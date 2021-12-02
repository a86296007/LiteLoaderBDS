// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructureFeature.hpp"
#define EXTRA_INCLUDE_PART_RANDOMSCATTEREDLARGEFEATURE
#include "Extra/RandomScatteredLargeFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_RANDOMSCATTEREDLARGEFEATURE
class RandomScatteredLargeFeature : public StructureFeature {
#include "Extra/RandomScatteredLargeFeatureAPI.hpp"
public:
    /*0*/ virtual ~RandomScatteredLargeFeature();
    /*2*/ virtual bool getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool);
    /*3*/ virtual bool isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&);
    /*4*/ virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

public:
    MCAPI static void initMobSpawnTypes(class HardcodedSpawnAreaRegistry&);
};