// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_NPCCOMMANDACTION
#include "Extra/NpcCommandActionAPI.hpp"
#undef EXTRA_INCLUDE_PART_NPCCOMMANDACTION
class NpcCommandAction {
#include "Extra/NpcCommandActionAPI.hpp"
public:
    /*0*/ virtual ~NpcCommandAction();
    /*1*/ virtual class Json::Value toJson();
    /*2*/ virtual bool fromJson(class Json::Value const&);
    /*
    inline bool fromJson(class Json::Value const& a0){
        bool (NpcCommandAction::*rv)(class Json::Value const&);
        *((void**)&rv) = dlsym("?fromJson@NpcCommandAction@@UEAA_NAEBVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value const&>(a0));
    }
    inline class Json::Value toJson(){
        class Json::Value (NpcCommandAction::*rv)();
        *((void**)&rv) = dlsym("?toJson@NpcCommandAction@@UEAA?AVValue@Json@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI std::vector<struct NpcCommandAction::SavedCommand>& getCommands();
    MCAPI void setCommands(std::vector<struct NpcCommandAction::SavedCommand>&&);
    MCAPI static char const COMMAND_DELIMITER;

protected:

private:
    MCAPI static std::string const COMMAND_LINE_KEY;
    MCAPI static std::string const COMMAND_VERSION_KEY;
};