// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_AGENTLOOKCONTROL
#include "Extra/AgentLookControlAPI.hpp"
#undef EXTRA_INCLUDE_PART_AGENTLOOKCONTROL
class AgentLookControl {
#include "Extra/AgentLookControlAPI.hpp"
public:
    /*0*/ virtual ~AgentLookControl();
    /*1*/ virtual void initializeInternal(class Mob&);
    /*2*/ virtual void tick(class Mob&);
    /*
    inline void initializeInternal(class Mob& a0){
        void (AgentLookControl::*rv)(class Mob&);
        *((void**)&rv) = dlsym("?initializeInternal@AgentLookControl@@UEAAXAEAVMob@@@Z");
        return (this->*rv)(std::forward<class Mob&>(a0));
    }
    inline void tick(class Mob& a0){
        void (AgentLookControl::*rv)(class Mob&);
        *((void**)&rv) = dlsym("?tick@AgentLookControl@@UEAAXAEAVMob@@@Z");
        return (this->*rv)(std::forward<class Mob&>(a0));
    }
    */
    MCAPI static float sBaseYMax;

protected:

private:
};