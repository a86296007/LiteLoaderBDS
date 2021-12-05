// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "StructurePiece.hpp"
#define EXTRA_INCLUDE_PART_SHLIBRARY
#include "Extra/SHLibraryAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHLIBRARY
class SHLibrary : public StructurePiece {
#include "Extra/SHLibraryAPI.hpp"
public:
    /*0*/ virtual ~SHLibrary();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*7*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;
    /*
    inline void addChildren(class StructurePiece& a0, std::vector<std::unique_ptr<class StructurePiece>>& a1, class Random& a2){
        void (SHLibrary::*rv)(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
        *((void**)&rv) = dlsym("?addChildren@SHLibrary@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class StructurePiece&>(a0), std::forward<std::vector<std::unique_ptr<class StructurePiece>>&>(a1), std::forward<class Random&>(a2));
    }
    inline int \/*enum enum StructurePieceType*\/ getType() const{
        int \/*enum enum StructurePieceType*\/ (SHLibrary::*rv)() const;
        *((void**)&rv) = dlsym("?getType@SHLibrary@@UEBA?AW4StructurePieceType@@XZ");
        return (this->*rv)();
    }
    inline bool postProcess(class BlockSource& a0, class Random& a1, class BoundingBox const& a2){
        bool (SHLibrary::*rv)(class BlockSource&, class Random&, class BoundingBox const&);
        *((void**)&rv) = dlsym("?postProcess@SHLibrary@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class Random&>(a1), std::forward<class BoundingBox const&>(a2));
    }
    */
    MCAPI static std::unique_ptr<class StrongholdPiece> createPiece(std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, int, int, int);

protected:

private:
};