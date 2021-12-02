// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "Core.hpp"
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTENGINE
#include "Extra/ScriptEngineAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTENGINE
class ScriptEngine {
#include "Extra/ScriptEngineAPI.hpp"

public:
    MCAPI bool deserializeScriptObjectHandleToJson(class ScriptApi::ScriptObjectHandle const&, class Json::Value&);
    MCAPI bool fireEventToScript(class EventInfo const&, class ScriptApi::ScriptObjectHandle&&);
    MCAPI class ScriptLoggerConfig& getLoggerConfig();
    MCAPI class ScriptEventCoordinator& getScriptEventCoordinator();
    MCAPI bool helpDefinePosition(class BlockPos const&, class ScriptApi::ScriptObjectHandle&);
    MCAPI bool helpDefinePosition(class Vec3 const&, class ScriptApi::ScriptObjectHandle&);
    MCAPI bool helpDefineVec3(class ScriptApi::ScriptObjectHandle&, std::string const&, class Vec3 const&);
    MCAPI std::unique_ptr<class ScriptObjectBinder> helpDeserialize(class ScriptApi::ScriptObjectHandle const&);
    MCAPI bool helpGetPosition(class ScriptApi::ScriptObjectHandle const&, class BlockPos&);
    MCAPI bool helpGetPosition(class ScriptApi::ScriptObjectHandle const&, class Vec3&);
    MCAPI bool helpGetVec3(class ScriptApi::ScriptObjectHandle const&, std::string const&, class Vec3&);
    MCAPI bool helpSetPosition(class BlockPos const&, class ScriptApi::ScriptObjectHandle const&);
    MCAPI bool helpSetPosition(class Vec3 const&, class ScriptApi::ScriptObjectHandle const&);
    MCAPI bool isInitialized() const;
    MCAPI void queueScript(class Core::Path const&, std::string const&, std::string const&, std::string const&);
    MCAPI bool serializeJsonToScriptObjectHandle(class ScriptApi::ScriptObjectHandle&, class Json::Value const&);
    MCAPI void startScriptLoading();
    MCAPI bool update();

    MCAPI static bool isScriptingEnabled();

private:
    MCAPI void _addScriptToQueue(struct ScriptEngine::ScriptQueueData const&);
    MCAPI bool _getVersionInfo(class ScriptApi::ScriptObjectHandle const&, class ScriptApi::ScriptVersionInfo&);
    MCAPI bool _processSystemInitialize();
    MCAPI bool _processSystemShutdown();
    MCAPI bool _processSystemUpdate();

protected:
    MCAPI struct IdentifierResult _validateObjectIdentifier(std::string const&) const;
};