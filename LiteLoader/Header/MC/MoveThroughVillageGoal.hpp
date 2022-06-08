// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MoveThroughVillageGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETHROUGHVILLAGEGOAL
public:
    class MoveThroughVillageGoal& operator=(class MoveThroughVillageGoal const &) = delete;
    MoveThroughVillageGoal(class MoveThroughVillageGoal const &) = delete;
    MoveThroughVillageGoal() = delete;
#endif

public:
    /*0*/ virtual ~MoveThroughVillageGoal();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*
    inline bool canContinueToUse(){
        bool (MoveThroughVillageGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@MoveThroughVillageGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (MoveThroughVillageGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@MoveThroughVillageGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI MoveThroughVillageGoal(class Mob &, float, bool);

protected:

private:

};