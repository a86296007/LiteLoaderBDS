// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_STRUCTUREPOOLBLOCKPREDICATEBLOCKMATCH
#include "Extra/StructurePoolBlockPredicateBlockMatchAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRUCTUREPOOLBLOCKPREDICATEBLOCKMATCH
class StructurePoolBlockPredicateBlockMatch {
#include "Extra/StructurePoolBlockPredicateBlockMatchAPI.hpp"
public:
    /*0*/ virtual ~StructurePoolBlockPredicateBlockMatch();
    /*1*/ virtual bool test(class Block const&, class Randomize&) const;
    /*2*/ virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;
};