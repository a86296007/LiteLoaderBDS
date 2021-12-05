// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_EVENTCOMMAND
#include "Extra/EventCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_EVENTCOMMAND
class EventCommand {
#include "Extra/EventCommandAPI.hpp"
public:
    /*0*/ virtual ~EventCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /*
    inline void execute(class CommandOrigin const& a0, class CommandOutput& a1) const{
        void (EventCommand::*rv)(class CommandOrigin const&, class CommandOutput&) const;
        *((void**)&rv) = dlsym("?execute@EventCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z");
        return (this->*rv)(std::forward<class CommandOrigin const&>(a0), std::forward<class CommandOutput&>(a1));
    }
    */
    MCAPI static void setup(class CommandRegistry&);

protected:

private:
};