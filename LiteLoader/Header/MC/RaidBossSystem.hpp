// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_RAIDBOSSSYSTEM
#include "Extra/RaidBossSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_RAIDBOSSSYSTEM
class RaidBossSystem {
#include "Extra/RaidBossSystemAPI.hpp"
public:
    /*0*/ virtual ~RaidBossSystem();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void tick(class EntityRegistry&);
    /*
    inline void tick(class EntityRegistry& a0){
        void (RaidBossSystem::*rv)(class EntityRegistry&);
        *((void**)&rv) = dlsym("?tick@RaidBossSystem@@UEAAXAEAVEntityRegistry@@@Z");
        return (this->*rv)(std::forward<class EntityRegistry&>(a0));
    }
    */

protected:

private:
};