// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RUNAROUNDLIKECRAZYGOAL
#include "Extra/RunAroundLikeCrazyGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_RUNAROUNDLIKECRAZYGOAL
class RunAroundLikeCrazyGoal {
#include "Extra/RunAroundLikeCrazyGoalAPI.hpp"
public:
    /*0*/ virtual ~RunAroundLikeCrazyGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual void unk_vfn_6();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
};