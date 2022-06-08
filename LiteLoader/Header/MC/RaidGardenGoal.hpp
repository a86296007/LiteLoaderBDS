// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RaidGardenGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDGARDENGOAL
public:
    class RaidGardenGoal& operator=(class RaidGardenGoal const &) = delete;
    RaidGardenGoal(class RaidGardenGoal const &) = delete;
    RaidGardenGoal() = delete;
#endif

public:
    /*0*/ virtual ~RaidGardenGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*11*/ virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    MCAPI RaidGardenGoal(class Mob &, float, int, int, int, float, int, int, int, int, std::vector<class BlockDescriptor> const &);

protected:

private:

};