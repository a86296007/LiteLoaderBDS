// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_STRUCTUREPIECE
#include "Extra/StructurePieceAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRUCTUREPIECE
class StructurePiece {
#include "Extra/StructurePieceAPI.hpp"
public:
    /*0*/ virtual ~StructurePiece();
    /*1*/ virtual void moveBoundingBox(int, int, int);
    /*2*/ virtual bool isValid() const;
    /*3*/ virtual int /*enum StructurePieceType*/ getType() const;
    /*4*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*5*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&) = 0;
    /*6*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*7*/ virtual int getWorldX(int, int);
    /*8*/ virtual int getWorldZ(int, int);
    /*9*/ virtual void placeBlock(class BlockSource&, class Block const&, int, int, int, class BoundingBox const&);
    /*10*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*11*/ virtual void generateBox(class BlockSource&, class BoundingBox const&, int, int, int, int, int, int, class Block const&, class Block const&, bool);
    /*12*/ virtual int getWorldZ(int, int);

public:
    MCAPI class BlockPos _getWorldPos(int, int, int);
    MCAPI bool edgesLiquid(class BlockSource&, class BoundingBox const&);
    MCAPI void generateAirBox(class BlockSource&, class BoundingBox const&, int, int, int, int, int, int);
    MCAPI void generateBox(class BlockSource&, class BoundingBox const&, int, int, int, int, int, int, bool, class Random&, class BlockSelector const&);
    MCAPI void generateMaybeBox(class BlockSource&, class BoundingBox const&, class Random&, float, int, int, int, int, int, int, class Block const&, class Block const&, bool, bool);
    MCAPI void generateUpperHalfSphere(class BlockSource&, class BoundingBox const&, int, int, int, int, int, int, class Block const&, bool);
    MCAPI class Block const& getBlock(class BlockSource&, int, int, int, class BoundingBox const&);
    MCAPI unsigned short getOrientationData(class Block const*, unsigned short);
    MCAPI int getWorldY(int);
    MCAPI bool isAboveGround(int, int, int, class BlockSource&);
    MCAPI bool isAir(class BlockSource&, int, int, int, class BoundingBox const&);
    MCAPI bool isReplaceableBlock(class Block const&);
    MCAPI void maybeGenerateBlock(class BlockSource&, class BoundingBox const&, class Random&, float, int, int, int, class Block const&);
    MCAPI void maybeGenerateBlockIfNotFloating(class BlockSource&, class BoundingBox const&, class Random&, float, int, int, int, class Block const&);

    MCAPI static class StructurePiece* findCollisionPiece(std::vector<std::unique_ptr<class StructurePiece>> const&, class BoundingBox const&);
    MCAPI static int getTotalWeight(std::vector<class PieceWeight> const&);
};