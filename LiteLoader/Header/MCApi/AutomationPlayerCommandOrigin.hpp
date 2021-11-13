// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "PlayerCommandOrigin.hpp"
class AutomationPlayerCommandOrigin : public PlayerCommandOrigin {
public:
    virtual ~AutomationPlayerCommandOrigin();
    virtual std::string const& getRequestId();
    virtual std::string getName();
    virtual class Level* getLevel();
    virtual int /*enum CommandPermissionLevel*/ getPermissionsLevel();
    virtual std::unique_ptr<class CommandOrigin> clone();
    virtual bool hasChatPerms();
    virtual bool hasTellPerms();
    virtual bool canUseCommandsWithoutCheatsEnabled();
    virtual bool isSelectorExpansionAllowed();
    virtual class NetworkIdentifier const& getSourceId();
    virtual void unk_vfn_20();
    virtual void unk_vfn_22();
    virtual struct CommandOriginData toCommandOriginData();
    virtual void unk_vfn_24();
    virtual void handleCommandOutputCallback(class Json::Value&&);
    virtual class CompoundTag serialize();
    virtual bool isValid();
};