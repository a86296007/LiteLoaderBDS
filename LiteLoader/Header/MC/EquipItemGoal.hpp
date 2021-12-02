// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_EQUIPITEMGOAL
#include "Extra/EquipItemGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_EQUIPITEMGOAL
class EquipItemGoal {
#include "Extra/EquipItemGoalAPI.hpp"
public:
    /*0*/ virtual ~EquipItemGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;

private:
    MCAPI void _dropItem(class ItemStack const&) const;
};