// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_WORLDBLOCKTARGET
#include "Extra/WorldBlockTargetAPI.hpp"
#undef EXTRA_INCLUDE_PART_WORLDBLOCKTARGET
class WorldBlockTarget {
#include "Extra/WorldBlockTargetAPI.hpp"
public:
    /*0*/ virtual ~WorldBlockTarget();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual class LevelChunk* getChunk(class ChunkPos const&);
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual class Block const& getExtraBlock(class BlockPos const&) const;
    /*6*/ virtual bool hasBiomeTag(unsigned __int64, class BlockPos const&) const;
    /*7*/ virtual bool setBlock(class BlockPos const&, class Block const&, int);
    /*8*/ virtual bool setBlockSimple(class BlockPos const&, class Block const&);
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual bool placeStructure(class BlockPos const&, class StructureTemplate&, class StructureSettings&);
    /*11*/ virtual bool mayPlace(class BlockPos const&, class Block const&) const;
    /*12*/ virtual bool canSurvive(class BlockPos const&, class Block const&) const;
    /*13*/ virtual short getMaxHeight() const;
    /*14*/ virtual void __unk_vfn_4();
    /*15*/ virtual bool shimPlaceForOldFeatures(class Feature const&, class BlockPos const&, class Random&) const;
    /*16*/ virtual short getHeightmap(int, int);
    /*17*/ virtual bool isLegacyLevel();
    /*18*/ virtual class Biome const* getBiome(class BlockPos const&) const;
    /*19*/ virtual bool isInBounds(class Pos const&) const;
    /*20*/ virtual short getLocalWaterLevel(class BlockPos const&) const;
    /*21*/ virtual class LevelData const& getLevelData() const;
    /*
    inline bool apply() const{
        bool (WorldBlockTarget::*rv)() const;
        *((void**)&rv) = dlsym("?apply@WorldBlockTarget@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canGetChunk() const{
        bool (WorldBlockTarget::*rv)() const;
        *((void**)&rv) = dlsym("?canGetChunk@WorldBlockTarget@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline struct WorldGenContext const& getContext(){
        struct WorldGenContext const& (WorldBlockTarget::*rv)();
        *((void**)&rv) = dlsym("?getContext@WorldBlockTarget@@UEAAAEBUWorldGenContext@@XZ");
        return (this->*rv)();
    }
    inline short getMinHeight() const{
        short (WorldBlockTarget::*rv)() const;
        *((void**)&rv) = dlsym("?getMinHeight@WorldBlockTarget@@UEBAFXZ");
        return (this->*rv)();
    }
    inline class Block const& getBlock(class BlockPos const& a0) const{
        class Block const& (WorldBlockTarget::*rv)(class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getBlock@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    inline class Block const& getBlockNoBoundsCheck(class BlockPos const& a0) const{
        class Block const& (WorldBlockTarget::*rv)(class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getBlockNoBoundsCheck@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    inline bool canSurvive(class BlockPos const& a0, class Block const& a1) const{
        bool (WorldBlockTarget::*rv)(class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?canSurvive@WorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0), std::forward<class Block const&>(a1));
    }
    inline class Biome const* getBiome(class BlockPos const& a0) const{
        class Biome const* (WorldBlockTarget::*rv)(class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getBiome@WorldBlockTarget@@UEBAPEBVBiome@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    inline class LevelChunk* getChunk(class ChunkPos const& a0){
        class LevelChunk* (WorldBlockTarget::*rv)(class ChunkPos const&);
        *((void**)&rv) = dlsym("?getChunk@WorldBlockTarget@@UEAAPEAVLevelChunk@@AEBVChunkPos@@@Z");
        return (this->*rv)(std::forward<class ChunkPos const&>(a0));
    }
    inline class Block const& getExtraBlock(class BlockPos const& a0) const{
        class Block const& (WorldBlockTarget::*rv)(class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getExtraBlock@WorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    inline short getHeightmap(int a0, int a1){
        short (WorldBlockTarget::*rv)(int, int);
        *((void**)&rv) = dlsym("?getHeightmap@WorldBlockTarget@@UEAAFHH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    inline class LevelData const& getLevelData() const{
        class LevelData const& (WorldBlockTarget::*rv)() const;
        *((void**)&rv) = dlsym("?getLevelData@WorldBlockTarget@@UEBAAEBVLevelData@@XZ");
        return (this->*rv)();
    }
    inline short getLocalWaterLevel(class BlockPos const& a0) const{
        short (WorldBlockTarget::*rv)(class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getLocalWaterLevel@WorldBlockTarget@@UEBAFAEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    inline short getMaxHeight() const{
        short (WorldBlockTarget::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxHeight@WorldBlockTarget@@UEBAFXZ");
        return (this->*rv)();
    }
    inline bool hasBiomeTag(unsigned __int64 a0, class BlockPos const& a1) const{
        bool (WorldBlockTarget::*rv)(unsigned __int64, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?hasBiomeTag@WorldBlockTarget@@UEBA_N_KAEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<unsigned __int64>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline bool isInBounds(class Pos const& a0) const{
        bool (WorldBlockTarget::*rv)(class Pos const&) const;
        *((void**)&rv) = dlsym("?isInBounds@WorldBlockTarget@@UEBA_NAEBVPos@@@Z");
        return (this->*rv)(std::forward<class Pos const&>(a0));
    }
    inline bool isLegacyLevel(){
        bool (WorldBlockTarget::*rv)();
        *((void**)&rv) = dlsym("?isLegacyLevel@WorldBlockTarget@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool mayPlace(class BlockPos const& a0, class Block const& a1) const{
        bool (WorldBlockTarget::*rv)(class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?mayPlace@WorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0), std::forward<class Block const&>(a1));
    }
    inline bool placeStructure(class BlockPos const& a0, class StructureTemplate& a1, class StructureSettings& a2){
        bool (WorldBlockTarget::*rv)(class BlockPos const&, class StructureTemplate&, class StructureSettings&);
        *((void**)&rv) = dlsym("?placeStructure@WorldBlockTarget@@UEAA_NAEBVBlockPos@@AEAVStructureTemplate@@AEAVStructureSettings@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0), std::forward<class StructureTemplate&>(a1), std::forward<class StructureSettings&>(a2));
    }
    inline bool setBlock(class BlockPos const& a0, class Block const& a1, int a2){
        bool (WorldBlockTarget::*rv)(class BlockPos const&, class Block const&, int);
        *((void**)&rv) = dlsym("?setBlock@WorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@H@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2));
    }
    inline bool setBlockSimple(class BlockPos const& a0, class Block const& a1){
        bool (WorldBlockTarget::*rv)(class BlockPos const&, class Block const&);
        *((void**)&rv) = dlsym("?setBlockSimple@WorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0), std::forward<class Block const&>(a1));
    }
    inline bool shimPlaceForOldFeatures(class Feature const& a0, class BlockPos const& a1, class Random& a2) const{
        bool (WorldBlockTarget::*rv)(class Feature const&, class BlockPos const&, class Random&) const;
        *((void**)&rv) = dlsym("?shimPlaceForOldFeatures@WorldBlockTarget@@UEBA_NAEBVFeature@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class Feature const&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2));
    }
    */

protected:

private:
};