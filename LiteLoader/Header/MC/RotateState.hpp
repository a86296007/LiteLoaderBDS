// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "PetSleepWithOwnerState.hpp"
#define EXTRA_INCLUDE_PART_ROTATESTATE
#include "Extra/RotateStateAPI.hpp"
#undef EXTRA_INCLUDE_PART_ROTATESTATE
class RotateState : public PetSleepWithOwnerState {
#include "Extra/RotateStateAPI.hpp"
public:
    /*0*/ virtual ~RotateState();
    /*1*/ virtual void tick();
    /*2*/ virtual void unk_vfn_2();
};