// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_MOBEFFECTSUBCOMPONENT
#include "Extra/MobEffectSubcomponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOBEFFECTSUBCOMPONENT
class MobEffectSubcomponent {
#include "Extra/MobEffectSubcomponentAPI.hpp"
public:
    /*0*/ virtual ~MobEffectSubcomponent();
    /*1*/ virtual void readfromJSON(class Json::Value&, class SemVersion const&);
    /*2*/ virtual void writetoJSON(class Json::Value&) const;
    /*3*/ virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    /*4*/ virtual char const* getName();

private:
    MCAPI void _addEffectFromJSON(class Json::Value&);
};