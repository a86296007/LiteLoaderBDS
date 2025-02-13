// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BiomeChunkBlendingAttenuator {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMECHUNKBLENDINGATTENUATOR
public:
    class BiomeChunkBlendingAttenuator& operator=(class BiomeChunkBlendingAttenuator const &) = delete;
    BiomeChunkBlendingAttenuator(class BiomeChunkBlendingAttenuator const &) = delete;
    BiomeChunkBlendingAttenuator() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMECHUNKBLENDINGATTENUATOR
public:
#endif
    MCAPI BiomeChunkBlendingAttenuator(class ChunkPos, class std::array<class std::array<struct BiomeChunkBlendingAttenuator::HeightAttenuationData, 2>, 2>);
    MCAPI struct TerrainInfo attenuateOffsetAndFactor(class DividedPos2d<4> const &, short, struct TerrainInfo const &, class PerlinSimplexNoise const &);
    MCAPI ~BiomeChunkBlendingAttenuator();
    MCAPI static void adjustHeightAttenuationFactors(class std::array<class std::array<struct BiomeChunkBlendingAttenuator::HeightAttenuationData, 2>, 2> &, class std::array<class std::array<struct BiomeChunkBlendingAttenuator::CornerDepthData, 2>, 2> &, class ChunkPos const &, class std::array<class std::array<class Vec2, 2>, 2> const &, float);
    MCAPI static class std::optional<class std::array<class std::array<struct BiomeChunkBlendingAttenuator::HeightAttenuationData, 2>, 2>> determineHeightAttenuationFactors(class ChunkPos const &, class std::function<class std::tuple<bool, float> (class ChunkPos const &)>);


};