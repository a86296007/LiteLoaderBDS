// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Bedrock.hpp"
#define EXTRA_INCLUDE_PART_DEDICATEDSERVERCOMMANDS
#include "Extra/DedicatedServerCommandsAPI.hpp"
#undef EXTRA_INCLUDE_PART_DEDICATEDSERVERCOMMANDS
class DedicatedServerCommands {
#include "Extra/DedicatedServerCommandsAPI.hpp"
public:
    MCAPI static void setupStandaloneServer(class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft> > const&, class IMinecraftApp&, class Level&, class LevelStorage&, class DedicatedServer&, class AllowListFile&);

protected:

private:
    MCAPI static std::vector<std::string> mSaveAllFileList;
};