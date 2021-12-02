// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FEATURE
#include "Extra/FeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_FEATURE
class Feature {
#include "Extra/FeatureAPI.hpp"
public:
    /*0*/ virtual ~Feature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const = 0;

protected:
    MCAPI bool _placeBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    MCAPI void _setManuallyPlaced(class Actor*);
};