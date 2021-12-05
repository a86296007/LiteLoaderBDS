// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_MOVETORANDOMBLOCKGOAL
#include "Extra/MoveToRandomBlockGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVETORANDOMBLOCKGOAL
class MoveToRandomBlockGoal {
#include "Extra/MoveToRandomBlockGoalAPI.hpp"
public:
    /*0*/ virtual ~MoveToRandomBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*
    inline void appendDebugInfo(std::string& a0) const{
        void (MoveToRandomBlockGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@MoveToRandomBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canContinueToUse(){
        bool (MoveToRandomBlockGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@MoveToRandomBlockGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (MoveToRandomBlockGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@MoveToRandomBlockGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (MoveToRandomBlockGoal::*rv)();
        *((void**)&rv) = dlsym("?start@MoveToRandomBlockGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void stop(){
        void (MoveToRandomBlockGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@MoveToRandomBlockGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (MoveToRandomBlockGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@MoveToRandomBlockGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
    MCAPI bool _isValidDestinationBlock(class BlockSource&, class BlockPos const&);
};