// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "TargetGoal.hpp"
#define EXTRA_INCLUDE_PART_NEARESTATTACKABLETARGETGOAL
#include "Extra/NearestAttackableTargetGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_NEARESTATTACKABLETARGETGOAL
class NearestAttackableTargetGoal : public TargetGoal {
#include "Extra/NearestAttackableTargetGoalAPI.hpp"
public:
    /*0*/ virtual ~NearestAttackableTargetGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void appendDebugInfo(std::string&) const;
    /*7*/ virtual void __unk_vfn_2();
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual struct ActorUniqueID _findTarget(struct MobDescriptor const**);
    /*
    inline struct ActorUniqueID _findTarget(struct MobDescriptor const** a0){
        struct ActorUniqueID (NearestAttackableTargetGoal::*rv)(struct MobDescriptor const**);
        *((void**)&rv) = dlsym("?_findTarget@NearestAttackableTargetGoal@@MEAA?AUActorUniqueID@@PEAPEBUMobDescriptor@@@Z");
        return (this->*rv)(std::forward<struct MobDescriptor const**>(a0));
    }
    inline void appendDebugInfo(std::string& a0) const{
        void (NearestAttackableTargetGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@NearestAttackableTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canContinueToUse(){
        bool (NearestAttackableTargetGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@NearestAttackableTargetGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (NearestAttackableTargetGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@NearestAttackableTargetGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (NearestAttackableTargetGoal::*rv)();
        *((void**)&rv) = dlsym("?start@NearestAttackableTargetGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:
    MCAPI bool _canStartSearching();
    MCAPI bool _isTargetVisible(class Mob const&, float, float) const;

private:
    MCAPI bool _selectTarget();
};