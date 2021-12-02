// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "NetherFortressPiece.hpp"
#define EXTRA_INCLUDE_PART_NBCASTLEENTRANCE
#include "Extra/NBCastleEntranceAPI.hpp"
#undef EXTRA_INCLUDE_PART_NBCASTLEENTRANCE
class NBCastleEntrance : public NetherFortressPiece {
#include "Extra/NBCastleEntranceAPI.hpp"
public:
    /*0*/ virtual ~NBCastleEntrance();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual int /*enum StructurePieceType*/ getType() const;
    /*4*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*5*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual void unk_vfn_6();
    /*10*/ virtual void unk_vfn_10();
};