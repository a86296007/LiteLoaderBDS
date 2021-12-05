// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "CaveFeature.hpp"
#include "CaveFeatureUtils.hpp"
#define EXTRA_INCLUDE_PART_UNDERWATERCAVEFEATURE
#include "Extra/UnderwaterCaveFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_UNDERWATERCAVEFEATURE
class UnderwaterCaveFeature : public CaveFeature {
#include "Extra/UnderwaterCaveFeatureAPI.hpp"
public:
    /*0*/ virtual ~UnderwaterCaveFeature();
    /*1*/ virtual bool carveEllipsoidVolume(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, class BoundingBox const&, float, float, struct CaveFeatureUtils::CarvingParameters const&) const;
    /*
    inline bool carveEllipsoidVolume(class IBlockWorldGenAPI& a0, struct CaveFeatureUtils::CarverConfiguration const& a1, class Random& a2, class ChunkPos const& a3, class Vec3 const& a4, class BoundingBox const& a5, float a6, float a7, struct CaveFeatureUtils::CarvingParameters const& a8) const{
        bool (UnderwaterCaveFeature::*rv)(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, class BoundingBox const&, float, float, struct CaveFeatureUtils::CarvingParameters const&) const;
        *((void**)&rv) = dlsym("?carveEllipsoidVolume@UnderwaterCaveFeature@@MEBA_NAEAVIBlockWorldGenAPI@@AEBUCarverConfiguration@CaveFeatureUtils@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@AEBVBoundingBox@@MMAEBUCarvingParameters@4@@Z");
        return (this->*rv)(std::forward<class IBlockWorldGenAPI&>(a0), std::forward<struct CaveFeatureUtils::CarverConfiguration const&>(a1), std::forward<class Random&>(a2), std::forward<class ChunkPos const&>(a3), std::forward<class Vec3 const&>(a4), std::forward<class BoundingBox const&>(a5), std::forward<float>(a6), std::forward<float>(a7), std::forward<struct CaveFeatureUtils::CarvingParameters const&>(a8));
    }
    */

protected:

private:
};