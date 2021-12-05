// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_FOLLOWPARENTGOAL
#include "Extra/FollowParentGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_FOLLOWPARENTGOAL
class FollowParentGoal {
#include "Extra/FollowParentGoalAPI.hpp"
public:
    /*0*/ virtual ~FollowParentGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void __unk_vfn_2();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*
    inline void stop(){
        void (FollowParentGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@FollowParentGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void appendDebugInfo(std::string& a0) const{
        void (FollowParentGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@FollowParentGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canContinueToUse(){
        bool (FollowParentGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@FollowParentGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (FollowParentGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@FollowParentGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (FollowParentGoal::*rv)();
        *((void**)&rv) = dlsym("?start@FollowParentGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (FollowParentGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@FollowParentGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};