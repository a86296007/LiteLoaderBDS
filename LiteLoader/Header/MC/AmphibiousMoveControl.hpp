// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "GenericMoveControl.hpp"
#define EXTRA_INCLUDE_PART_AMPHIBIOUSMOVECONTROL
#include "Extra/AmphibiousMoveControlAPI.hpp"
#undef EXTRA_INCLUDE_PART_AMPHIBIOUSMOVECONTROL
class AmphibiousMoveControl : public GenericMoveControl {
#include "Extra/AmphibiousMoveControlAPI.hpp"
public:
    /*0*/ virtual ~AmphibiousMoveControl();
    /*2*/ virtual void tick(class MoveControlComponent&, class Mob&);
};