#include <filesystem>
#include <EventAPI.h>
#include <LLAPI.h>
#include <ServerAPI.h>
#include <RegCommandAPI.h>
#include <MC/CommandOrigin.hpp>
#include <MC/CommandOutput.hpp>
#include <MC/CommandPosition.hpp>
#include <MC/CommandRegistry.hpp>
#include <MC/Packet.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/VanillaDimensions.hpp>
#include <Main/AutoUpgrade.h>
#include <Main/Config.h>
#include <Main/PluginManager.h>
#include <ScriptEngine/Configs.h>

using namespace RegisterCommandHelper;
using namespace LL;

static_assert(sizeof(CommandSelector<Player>) == 200);

void LLUpgradeCommand(CommandOutput& output, bool isForce)
{
    std::thread([isForce]() {
        // Set global SEH-Exception handler
        _set_se_translator(seh_exception::TranslateSEHtoCE);

        LL::CheckAutoUpdate(true, isForce);
    }).detach();
}

void LLListPluginsCommand(CommandOutput& output)
{
    auto plugins = LL::getAllPlugins();
    std::ostringstream oss;
    oss << "Plugin Lists [" << plugins.size() << "]\n";

    for (auto& [name, plugin] : plugins)
    {
        string pluginName = name;
        if (pluginName.find("§") == string::npos)
            pluginName = "§b" + pluginName;
        string desc = plugin->desc;
        if (desc.find("§") == string::npos)
            desc = "§7" + desc;

        auto fileName = UTF82String(std::filesystem::path(str2wstr(plugin->filePath)).filename().u8string());
        oss << fmt::format("- {} §a[v{}] §8({})\n  {}\n",
            pluginName, plugin->version.toString(), fileName, desc);
    }
    oss << "\n* Send command \"ll list <Plugin Name>\" for more information";
    output.success(oss.str());
}

void LLPluginInfoCommand(CommandOutput& output, const string& pluginName)
{
    auto plugin = LL::getPlugin(pluginName);
    if (plugin)
    {
        std::map<std::string, std::string> outs;
        std::ostringstream oss;
        auto fn = UTF82String(std::filesystem::path(str2wstr(plugin->filePath)).filename().u8string());
        string pluginType = plugin->type == Plugin::PluginType::ScriptPlugin ? "Script Plugin" : "DLL Plugin";

        oss << "Plugin <" << pluginName << ">\n\n";

        outs.emplace("Name", fmt::format("{} ({})", plugin->name, fn));
        outs.emplace("Description", plugin->desc);
        outs.emplace("Version", "v" + plugin->version.toString(true));
        outs.emplace("Type", pluginType);
        outs.emplace("File Path", plugin->filePath);
        outs.merge(plugin->others);
        size_t width = 10;
        for (auto& [k, _] : outs)
            width = std::max(width, k.length());
        for (auto& [k, v] : outs)
        {
            if (k != "PluginType" && k != "PluginFilePath")
                oss << "- §l" << std::setw(width) << std::left << k << "§r: " << v << std::endl;
        }
        auto text = oss.str();
        text.pop_back();
        output.success(text, {});
    }
    else
    {
        output.error("Plugin <" + pluginName + "> is not found!", {});
    }
}

void LLVersionCommand(CommandOutput& output)
{
    output.success(fmt::format("Bedrock Dedicated Server {}\n- with LiteLoaderBDS {}\n- Network Protocol: {}",
                               LL::getBdsVersion(), LL::getLoaderVersionString(), LL::getServerProtocolVersion()));
}

void LLHelpCommand(CommandOutput& output)
{
    output.success(
        "[Introduction]\n"
        "LiteLoaderBDS is an unofficial plugin loader for modding development of Bedrock Dedicated Server.\n"
        "It provides a huge nubmer of APIs, a powerful event system and lots of packed utility interfaces .\n"
        "[Github]\n"
        "--> https://github.com/LiteLDev/LiteLoaderBDS <--\n"
        "Welcome to our github project to get more information ~");
}

void LLLoadPluginCommand(CommandOutput& output, const string& path)
{
    // if (!LL::isDebugMode())
    //     return;
    if (PluginManager::loadPlugin(path, true))
        output.success("Plugin <" + path + "> loaded successfully.");
    else
        output.error("Fail to load plugin " + path);
}

void LLUnloadPluginCommand(CommandOutput& output, const string& pluginName)
{
    // if (!LL::isDebugMode())
    //     return;
    if (PluginManager::unloadPlugin(pluginName, true))
        output.success("Plugin <" + pluginName + "> unloaded successfully.");
    else
        output.error("Fail to unload plugin " + pluginName);
}

void LLReloadPluginCommand(CommandOutput& output, const string& pluginName, bool reloadAll)
{
    //if (!LL::isDebugMode())
    //    return;
    if (!reloadAll)
    {
        if (PluginManager::reloadPlugin(pluginName, true))
            output.success("Plugin <" + pluginName + "> reloaded successfully.");
        else
            output.error("Fail to reload plugin <" + pluginName + ">");
    }
    else
    {
        int cnt = PluginManager::reloadAllPlugins(true);
        if (cnt > 0)
            output.success(std::to_string(cnt) + " plugins reloaded successfully.");
        else
            output.error("Fail to reload any plugin!");
    }
}

class LLCommand : public Command
{

    enum class Operation
    {
        Version,
        List,
        Upgrade,
        Help,
        Load,
        Unload,
        Reload
    };
    enum class UpgradeOption
    {
        Force
    };

    Operation operation;
    UpgradeOption upgradeOption;
    bool hasUpgradeOption, hasPluginNameSet;
    CommandRawText pluginNameToDoOperation;

public:

    void execute(CommandOrigin const& ori, CommandOutput& output) const override
    {
        std::string pluginName = "";
        if (hasPluginNameSet) {
            pluginName = pluginNameToDoOperation;
            if (pluginName.size() > 1 && pluginName[0] == '"' && pluginName[pluginName.size() - 1] == '"' && pluginName[pluginName.size() - 2] != '\\')
            {
                pluginName.erase(0, 1);
                pluginName.pop_back();
            }
        }
        switch (operation)
        {
            case Operation::Version:
                LLVersionCommand(output);
                break;
            case Operation::Upgrade:
                LLUpgradeCommand(output, hasUpgradeOption && upgradeOption == UpgradeOption::Force);
                break;
            case Operation::List:
                if (!hasPluginNameSet)
                    LLListPluginsCommand(output);
                else
                    LLPluginInfoCommand(output, pluginName);
                break;
            case Operation::Load:
                if (hasPluginNameSet)
                    LLLoadPluginCommand(output, pluginName);
                else
                    output.error("You must provide a valid path of LiteLoader plugin!");
                break;
            case Operation::Unload:
                if (hasPluginNameSet)
                    LLUnloadPluginCommand(output, pluginName);
                else
                    output.error("You must provide a valid name of LiteLoader plugin!");
                break;
            case Operation::Reload:
                if (hasPluginNameSet)
                    LLReloadPluginCommand(output, pluginName, false);
                else
                    LLReloadPluginCommand(output, "", true);
                break;
            case Operation::Help:
                LLHelpCommand(output);
                break;
            default:
                break;
        }
    }

    static void setup(CommandRegistry* registry)
    {
        // Register Cmd
        registry->registerCommand("ll", "LiteLoaderBDS plugin operations",
                                  CommandPermissionLevel::Console, {(CommandFlagValue)0}, {(CommandFlagValue)0x80});

        // Register softenum
        vector<string> pluginList;
        for (auto& [name, p] : LL::getAllPlugins())
        {
            pluginList.push_back(name);
        }
        registry->addSoftEnum("PluginName", pluginList);

        // ll version & help
        registry->addEnum<Operation>("Operation_Common", {
            {"version", Operation::Version},
            {"help", Operation::Help}}
        );
        registry->registerOverload<LLCommand>(
            "ll",
            makeMandatory<CommandParameterDataType::ENUM>(&LLCommand::operation, "Operation", "Operation_Common").addOptions((CommandParameterOption)1));

        // ll load 
        registry->addEnum<Operation>("Operation_FreeFilePath", {
            {"load", Operation::Load},
        });
        registry->registerOverload<LLCommand>(
            "ll",
            makeMandatory<CommandParameterDataType::ENUM>(&LLCommand::operation, "Operation", "Operation_FreeFilePath").addOptions((CommandParameterOption)1),
            makeMandatory<CommandParameterDataType::NORMAL>(&LLCommand::pluginNameToDoOperation, "pluginPath", nullptr, &LLCommand::hasPluginNameSet));

        // ll unload
        registry->addEnum<Operation>("Operation_MustPluginName", {
            {"unload", Operation::Unload},
        });
        registry->registerOverload<LLCommand>(
            "ll",
            makeMandatory<CommandParameterDataType::ENUM>(&LLCommand::operation, "Operation", "Operation_MustPluginName").addOptions((CommandParameterOption)1),
            makeMandatory<CommandParameterDataType::SOFT_ENUM>((std::string LLCommand::*)&LLCommand::pluginNameToDoOperation, "pluginName", "PluginName", &LLCommand::hasPluginNameSet));

        // ll list & reload
        registry->addEnum<Operation>("Operation_OptionalPluginName", {
            {"list", Operation::List},
            {"plugins", Operation::List},
            {"reload", Operation::Reload},
        });
        registry->registerOverload<LLCommand>(
            "ll",
            makeMandatory<CommandParameterDataType::ENUM>(&LLCommand::operation, "Operation", "Operation_OptionalPluginName").addOptions((CommandParameterOption)1),
            makeOptional<CommandParameterDataType::SOFT_ENUM>((std::string LLCommand::*)&LLCommand::pluginNameToDoOperation, "pluginName", "PluginName", &LLCommand::hasPluginNameSet));

        // ll upgrade
        registry->addEnum<Operation>("Operation_WithOption", {
            {"upgrade", Operation::Upgrade},
        });
		
        registry->addEnum<UpgradeOption>("UpgradeOption", {{"force", UpgradeOption::Force}});
        registry->registerOverload<LLCommand>(
            "ll",
            makeMandatory<CommandParameterDataType::ENUM>(&LLCommand::operation, "Operation", "Operation_WithOption").addOptions((CommandParameterOption)1),
            makeOptional<CommandParameterDataType::ENUM>(&LLCommand::upgradeOption, "Option", "UpgradeOption", &LLCommand::hasUpgradeOption).addOptions((CommandParameterOption)1));
    }
};

class VersionCommand : public Command
{

public:

    void execute(CommandOrigin const& ori, CommandOutput& output) const override
    {
#ifdef DEBUG
        Logger("CommandOrigin").warn(ori.serialize().toSNBT());
#endif // DEBUG
        LLVersionCommand(output);
    }

    static void setup(CommandRegistry* registry)
    {
        registry->registerCommand("version", "Get the version of this server",
                                  CommandPermissionLevel::GameMasters, {(CommandFlagValue)0}, {(CommandFlagValue)0x80});
        registry->registerOverload<VersionCommand>("version");
    }
};

void RegisterCommands()
{
    Event::RegCmdEvent::subscribe([](Event::RegCmdEvent ev) { // Register commands
        LLCommand::setup(ev.mCommandRegistry);
        VersionCommand::setup(ev.mCommandRegistry);
        TeleportDimensionCommand::setup(ev.mCommandRegistry);
        return true;
    });
}
