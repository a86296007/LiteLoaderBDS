// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "CommandOrigin.hpp"
class PrecompiledCommandOrigin : public CommandOrigin {
public:
    virtual ~PrecompiledCommandOrigin();
    virtual std::string const& getRequestId();
    virtual std::string getName();
    virtual class BlockPos getBlockPosition();
    virtual class Vec3 getWorldPosition();
    virtual class Level* getLevel();
    virtual class Dimension* getDimension();
    virtual class Actor* getEntity();
    virtual int /*enum CommandPermissionLevel*/ getPermissionsLevel();
    virtual std::unique_ptr<class CommandOrigin> clone();
    virtual class std::optional<class BlockPos> getCursorHitBlockPos();
    virtual class std::optional<class Vec3> getCursorHitPos();
    virtual bool hasChatPerms();
    virtual bool hasTellPerms();
    virtual bool canUseAbility(int /*enum AbilitiesIndex*/);
    virtual bool isWorldBuilder();
    virtual bool canUseCommandsWithoutCheatsEnabled();
    virtual bool isSelectorExpansionAllowed();
    virtual unsigned char getSourceSubId();
    virtual void unk_vfn_20();
    virtual void unk_vfn_22();
    virtual void unk_vfn_24();
    virtual void handleCommandOutputCallback(class Json::Value&&);
    virtual class CompoundTag serialize();
    virtual bool isValid();
};