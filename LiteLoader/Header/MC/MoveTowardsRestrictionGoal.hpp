// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_MOVETOWARDSRESTRICTIONGOAL
#include "Extra/MoveTowardsRestrictionGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVETOWARDSRESTRICTIONGOAL
class MoveTowardsRestrictionGoal {
#include "Extra/MoveTowardsRestrictionGoalAPI.hpp"
public:
    /*0*/ virtual ~MoveTowardsRestrictionGoal();
    /*
    inline bool canContinueToUse(){
        bool (MoveTowardsRestrictionGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@MoveTowardsRestrictionGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (MoveTowardsRestrictionGoal::*rv)();
        *((void**)&rv) = dlsym("?start@MoveTowardsRestrictionGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:
    MCAPI class Mob const& _getMob() const;
    MCAPI bool _randomizeWantedPositionTowardsRestriction(class Vec3 const&);

private:
};