// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_JUMPCONTROLSYSTEM
#include "Extra/JumpControlSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_JUMPCONTROLSYSTEM
class JumpControlSystem {
#include "Extra/JumpControlSystemAPI.hpp"
public:
    /*0*/ virtual ~JumpControlSystem();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void tick(class EntityRegistry&);
    /*
    inline void tick(class EntityRegistry& a0){
        void (JumpControlSystem::*rv)(class EntityRegistry&);
        *((void**)&rv) = dlsym("?tick@JumpControlSystem@@UEAAXAEAVEntityRegistry@@@Z");
        return (this->*rv)(std::forward<class EntityRegistry&>(a0));
    }
    */

protected:

private:
};