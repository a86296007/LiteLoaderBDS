// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructureFeature.hpp"
class NetherFortressFeature : public StructureFeature {
public:
    virtual ~NetherFortressFeature();
    virtual bool isFeatureChunk(class Dimension const&, class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int);
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

public:
    MCAPI static void initMobSpawnTypes(class HardcodedSpawnAreaRegistry&);
};