// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "TemplateStructurePiece.hpp"
#define EXTRA_INCLUDE_PART_OCEANRUINSTART
#include "Extra/OceanRuinStartAPI.hpp"
#undef EXTRA_INCLUDE_PART_OCEANRUINSTART
class OceanRuinStart : public TemplateStructurePiece {
#include "Extra/OceanRuinStartAPI.hpp"
public:
    /*0*/ virtual ~OceanRuinStart();
    /*1*/ virtual void moveBoundingBox(int, int, int);
    /*2*/ virtual bool isValid() const;
    /*3*/ virtual int /*enum StructurePieceType*/ getType() const;
    /*4*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*6*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*7*/ virtual int getWorldX(int, int);
    /*8*/ virtual int getWorldZ(int, int);
    /*9*/ virtual void placeBlock(class BlockSource&, class Block const&, int, int, int, class BoundingBox const&);
    /*10*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*14*/ virtual void unk_vfn_14();

public:
    MCAPI void createRuin(class Dimension&, class OverworldGenerator&, class Random&, int, int);
};