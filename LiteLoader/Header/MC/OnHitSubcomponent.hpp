// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ONHITSUBCOMPONENT
#include "Extra/OnHitSubcomponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_ONHITSUBCOMPONENT
class OnHitSubcomponent {
#include "Extra/OnHitSubcomponentAPI.hpp"
public:
    /*0*/ virtual ~OnHitSubcomponent();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual char const* getName();

protected:
    MCAPI bool _canAttack(class Actor*, class Actor*) const;
};