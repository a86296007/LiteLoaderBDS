// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BLOCKINTERSECTIONCONSTRAINT
#include "Extra/BlockIntersectionConstraintAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKINTERSECTIONCONSTRAINT
class BlockIntersectionConstraint {
#include "Extra/BlockIntersectionConstraintAPI.hpp"
public:
    /*0*/ virtual ~BlockIntersectionConstraint();
    /*1*/ virtual bool isSatisfied(class IBlockWorldGenAPI const&, class BlockPos const&, int /*enum Rotation*/ const&) const;
};