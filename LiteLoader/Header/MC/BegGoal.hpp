// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BegGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEGGOAL
public:
    class BegGoal& operator=(class BegGoal const &) = delete;
    BegGoal(class BegGoal const &) = delete;
    BegGoal() = delete;
#endif

public:
    /*0*/ virtual ~BegGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    MCAPI BegGoal(class Mob &, std::vector<class ItemDescriptor> const &, float, int, int);

protected:

private:
    MCAPI bool _playerHoldingInteresting(class Player *);

};