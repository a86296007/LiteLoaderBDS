// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_REEDSFEATURE
#include "Extra/ReedsFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_REEDSFEATURE
class ReedsFeature : public Feature {
#include "Extra/ReedsFeatureAPI.hpp"
public:
    /*0*/ virtual ~ReedsFeature();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};