// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_TEMPTGOAL
#include "Extra/TemptGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_TEMPTGOAL
class TemptGoal {
#include "Extra/TemptGoalAPI.hpp"
public:
    /*0*/ virtual ~TemptGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*
    inline void appendDebugInfo(std::string& a0) const{
        void (TemptGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@TemptGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canContinueToUse(){
        bool (TemptGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@TemptGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (TemptGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@TemptGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (TemptGoal::*rv)();
        *((void**)&rv) = dlsym("?start@TemptGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void stop(){
        void (TemptGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@TemptGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (TemptGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@TemptGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};