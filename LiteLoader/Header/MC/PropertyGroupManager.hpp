// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_PROPERTYGROUPMANAGER
#include "Extra/PropertyGroupManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_PROPERTYGROUPMANAGER
class PropertyGroupManager {
#include "Extra/PropertyGroupManagerAPI.hpp"
public:
    MCAPI class PropertyGroup const* getPropertyGroup(class HashedString const&) const;
    MCAPI void registerGroup(class HashedString const&, class PropertyGroup const&);

protected:

private:
};