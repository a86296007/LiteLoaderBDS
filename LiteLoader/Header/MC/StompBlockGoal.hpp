// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BaseMoveToGoal.hpp"
#define EXTRA_INCLUDE_PART_STOMPBLOCKGOAL
#include "Extra/StompBlockGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_STOMPBLOCKGOAL
class StompBlockGoal : public BaseMoveToGoal {
#include "Extra/StompBlockGoalAPI.hpp"
public:
    /*0*/ virtual ~StompBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void __unk_vfn_1();
    /*9*/ virtual void __unk_vfn_2();
    /*10*/ virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /*11*/ virtual bool _canReach(class BlockPos const&);
    /*12*/ virtual void _moveToBlock();
    /*13*/ virtual void __unk_vfn_3();
    /*14*/ virtual bool findTargetBlock();
    /*15*/ virtual void _createBreakProgressParticles(class Level&, class BlockSource&, class BlockPos);
    /*16*/ virtual void _createDestroyParticles(class Level&, class BlockSource&, class BlockPos);
    /*17*/ virtual void _playBreakProgressSound(class Level&, class BlockSource&, class BlockPos);
    /*18*/ virtual void _playDestroySound(class Level&, class BlockSource&, class BlockPos);
    /*
    inline void _playDestroySound(class Level& a0, class BlockSource& a1, class BlockPos a2){
        void (StompBlockGoal::*rv)(class Level&, class BlockSource&, class BlockPos);
        *((void**)&rv) = dlsym("?_playDestroySound@StompBlockGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z");
        return (this->*rv)(std::forward<class Level&>(a0), std::forward<class BlockSource&>(a1), std::forward<class BlockPos>(a2));
    }
    inline void _createBreakProgressParticles(class Level& a0, class BlockSource& a1, class BlockPos a2){
        void (StompBlockGoal::*rv)(class Level&, class BlockSource&, class BlockPos);
        *((void**)&rv) = dlsym("?_createBreakProgressParticles@StompBlockGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z");
        return (this->*rv)(std::forward<class Level&>(a0), std::forward<class BlockSource&>(a1), std::forward<class BlockPos>(a2));
    }
    inline void _createDestroyParticles(class Level& a0, class BlockSource& a1, class BlockPos a2){
        void (StompBlockGoal::*rv)(class Level&, class BlockSource&, class BlockPos);
        *((void**)&rv) = dlsym("?_createDestroyParticles@StompBlockGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z");
        return (this->*rv)(std::forward<class Level&>(a0), std::forward<class BlockSource&>(a1), std::forward<class BlockPos>(a2));
    }
    inline void _playBreakProgressSound(class Level& a0, class BlockSource& a1, class BlockPos a2){
        void (StompBlockGoal::*rv)(class Level&, class BlockSource&, class BlockPos);
        *((void**)&rv) = dlsym("?_playBreakProgressSound@StompBlockGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z");
        return (this->*rv)(std::forward<class Level&>(a0), std::forward<class BlockSource&>(a1), std::forward<class BlockPos>(a2));
    }
    inline bool _canReach(class BlockPos const& a0){
        bool (StompBlockGoal::*rv)(class BlockPos const&);
        *((void**)&rv) = dlsym("?_canReach@StompBlockGoal@@MEAA_NAEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    inline void _moveToBlock(){
        void (StompBlockGoal::*rv)();
        *((void**)&rv) = dlsym("?_moveToBlock@StompBlockGoal@@MEAAXXZ");
        return (this->*rv)();
    }
    inline void appendDebugInfo(std::string& a0) const{
        void (StompBlockGoal::*rv)(std::string&) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@StompBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string&>(a0));
    }
    inline bool canContinueToUse(){
        bool (StompBlockGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@StompBlockGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (StompBlockGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@StompBlockGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool findTargetBlock(){
        bool (StompBlockGoal::*rv)();
        *((void**)&rv) = dlsym("?findTargetBlock@StompBlockGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool isValidTarget(class BlockSource& a0, class BlockPos const& a1){
        bool (StompBlockGoal::*rv)(class BlockSource&, class BlockPos const&);
        *((void**)&rv) = dlsym("?isValidTarget@StompBlockGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline void start(){
        void (StompBlockGoal::*rv)();
        *((void**)&rv) = dlsym("?start@StompBlockGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void stop(){
        void (StompBlockGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@StompBlockGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (StompBlockGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@StompBlockGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};