// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_TRADEWITHPLAYERGOAL
#include "Extra/TradeWithPlayerGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRADEWITHPLAYERGOAL
class TradeWithPlayerGoal {
#include "Extra/TradeWithPlayerGoalAPI.hpp"
public:
    /*0*/ virtual ~TradeWithPlayerGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void __unk_vfn_2();
    /*6*/ virtual void __unk_vfn_3();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*
    inline void stop(){
        void (TradeWithPlayerGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@TradeWithPlayerGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void appendDebugInfo(std::string& a0) const{
        void (TradeWithPlayerGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@TradeWithPlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canContinueToUse(){
        bool (TradeWithPlayerGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@TradeWithPlayerGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (TradeWithPlayerGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@TradeWithPlayerGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (TradeWithPlayerGoal::*rv)();
        *((void**)&rv) = dlsym("?start@TradeWithPlayerGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};