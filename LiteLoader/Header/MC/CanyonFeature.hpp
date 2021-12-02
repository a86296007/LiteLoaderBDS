// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Types.hpp"
#define EXTRA_INCLUDE_PART_CANYONFEATURE
#include "Extra/CanyonFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_CANYONFEATURE
class CanyonFeature {
#include "Extra/CanyonFeatureAPI.hpp"
public:
    /*0*/ virtual ~CanyonFeature();
    /*1*/ virtual bool carve(class BlockVolume&, class BiomeSource const&, class Random&, class ChunkPos const&, class Vec3 const&, class Vec3 const&, int, int, int, int, int, int, float, float, class gsl::span<float const, -1>, struct WorldGenContext const&) const;
    /*2*/ virtual void addFeature(class BlockVolume&, class BiomeSource const&, struct CanyonFeatureUtils::CanyonConfiguration const&, class ChunkPos const&, class Random&, int, int, struct WorldGenContext const&);

public:
    MCAPI void apply(class BlockVolume&, class ChunkPos const&, class BiomeSource const&, struct CanyonFeatureUtils::CanyonConfiguration const&, class Random&, unsigned int, struct WorldGenContext const&);

protected:
    MCAPI void addTunnel(class BlockVolume&, class BiomeSource const&, class Random&, class ChunkPos const&, class Vec3 const&, class Vec3 const&, float, float, float, int, int, float, struct WorldGenContext const&) const;
};