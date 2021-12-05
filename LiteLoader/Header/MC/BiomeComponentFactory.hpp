// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_BIOMECOMPONENTFACTORY
#include "Extra/BiomeComponentFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_BIOMECOMPONENTFACTORY
class BiomeComponentFactory {
#include "Extra/BiomeComponentFactoryAPI.hpp"
public:
    MCAPI void processDataComponents(class Biome&, class IWorldRegistriesProvider&, class CompoundTag&) const;
    MCAPI void registrationFinished();

protected:

private:
};