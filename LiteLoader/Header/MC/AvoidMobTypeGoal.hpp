// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_AVOIDMOBTYPEGOAL
#include "Extra/AvoidMobTypeGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_AVOIDMOBTYPEGOAL
class AvoidMobTypeGoal {
#include "Extra/AvoidMobTypeGoalAPI.hpp"
public:
    /*0*/ virtual ~AvoidMobTypeGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;

public:
    MCAPI bool canFindAvoidPath(class Actor*);
    MCAPI class Actor* findNearestEntityToAvoid(float);
};