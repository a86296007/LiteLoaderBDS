// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TradeWithPlayerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADEWITHPLAYERGOAL
public:
    class TradeWithPlayerGoal& operator=(class TradeWithPlayerGoal const &) = delete;
    TradeWithPlayerGoal(class TradeWithPlayerGoal const &) = delete;
    TradeWithPlayerGoal() = delete;
#endif

public:
    /*0*/ virtual ~TradeWithPlayerGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    MCAPI TradeWithPlayerGoal(class Mob &);

protected:

private:

};