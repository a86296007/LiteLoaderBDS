// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SPAWNACTORSYSTEM
#include "Extra/SpawnActorSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPAWNACTORSYSTEM
class SpawnActorSystem {
#include "Extra/SpawnActorSystemAPI.hpp"
public:
    /*0*/ virtual ~SpawnActorSystem();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void tick(class EntityRegistry&);
    /*
    inline void tick(class EntityRegistry& a0){
        void (SpawnActorSystem::*rv)(class EntityRegistry&);
        *((void**)&rv) = dlsym("?tick@SpawnActorSystem@@UEAAXAEAVEntityRegistry@@@Z");
        return (this->*rv)(std::forward<class EntityRegistry&>(a0));
    }
    */

protected:

private:
};