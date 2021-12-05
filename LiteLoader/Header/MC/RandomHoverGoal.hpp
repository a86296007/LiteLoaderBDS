// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_RANDOMHOVERGOAL
#include "Extra/RandomHoverGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_RANDOMHOVERGOAL
class RandomHoverGoal {
#include "Extra/RandomHoverGoalAPI.hpp"
public:
    /*0*/ virtual ~RandomHoverGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*
    inline void appendDebugInfo(std::string& a0) const{
        void (RandomHoverGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@RandomHoverGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canContinueToUse(){
        bool (RandomHoverGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@RandomHoverGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (RandomHoverGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@RandomHoverGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (RandomHoverGoal::*rv)();
        *((void**)&rv) = dlsym("?start@RandomHoverGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (RandomHoverGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@RandomHoverGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:
    MCAPI bool _computeNewTarget();
    MCAPI void _moveToTarget();

private:
};