// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "SpikeFeature.hpp"
#define EXTRA_INCLUDE_PART_THEENDSPIKEHELPER
#include "Extra/TheEndSpikeHelperAPI.hpp"
#undef EXTRA_INCLUDE_PART_THEENDSPIKEHELPER
namespace TheEndSpikeHelper {
#include "Extra/TheEndSpikeHelperAPI.hpp"
    MCAPI std::vector<class SpikeFeature::EndSpike> getSpikesForLevel(class Level&);
};