// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_GAMEMODECOMMAND
#include "Extra/GameModeCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_GAMEMODECOMMAND
class GameModeCommand {
#include "Extra/GameModeCommandAPI.hpp"
public:
    /*0*/ virtual ~GameModeCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /*
    inline void execute(class CommandOrigin const& a0, class CommandOutput& a1) const{
        void (GameModeCommand::*rv)(class CommandOrigin const&, class CommandOutput&) const;
        *((void**)&rv) = dlsym("?execute@GameModeCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z");
        return (this->*rv)(std::forward<class CommandOrigin const&>(a0), std::forward<class CommandOutput&>(a1));
    }
    */
    MCAPI static void setup(class CommandRegistry&);

protected:

private:
};