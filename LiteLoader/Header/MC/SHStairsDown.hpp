// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructurePiece.hpp"
#define EXTRA_INCLUDE_PART_SHSTAIRSDOWN
#include "Extra/SHStairsDownAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHSTAIRSDOWN
class SHStairsDown : public StructurePiece {
#include "Extra/SHStairsDownAPI.hpp"
public:
    /*0*/ virtual ~SHStairsDown();
    /*2*/ virtual bool isValid() const;
    /*3*/ virtual int /*enum StructurePieceType*/ getType() const;
    /*4*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*5*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*10*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*12*/ virtual int getWorldZ(int, int);
};