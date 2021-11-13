// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
class CoralCrustFeature : public Feature {
public:
    virtual ~CoralCrustFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

private:
    MCAPI class BlockPos _getCropOffsetFromRot(int, int) const;
    MCAPI class BlockPos _getOffsetFromRot(int, int) const;
    MCAPI void _placeCoralBase(class BlockSource&, class BlockPos const&, class Random&, class LegacyStructureTemplate&, class LegacyStructureSettings&) const;
    MCAPI void _placeSideDecorations(class BlockSource&, class BlockPos const&, class Random&, unsigned char) const;
};