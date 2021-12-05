// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_UNBURIEDCONSTRAINT
#include "Extra/UnburiedConstraintAPI.hpp"
#undef EXTRA_INCLUDE_PART_UNBURIEDCONSTRAINT
class UnburiedConstraint {
#include "Extra/UnburiedConstraintAPI.hpp"
public:
    /*0*/ virtual ~UnburiedConstraint();
    /*1*/ virtual bool isSatisfied(class IBlockWorldGenAPI const&, class BlockPos const&, int /*enum enum Rotation*/ const&) const;
    /*
    inline bool isSatisfied(class IBlockWorldGenAPI const& a0, class BlockPos const& a1, int \/*enum enum Rotation*\/ const& a2) const{
        bool (UnburiedConstraint::*rv)(class IBlockWorldGenAPI const&, class BlockPos const&, int \/*enum enum Rotation*\/ const&) const;
        *((void**)&rv) = dlsym("?isSatisfied@UnburiedConstraint@@UEBA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBW4Rotation@@@Z");
        return (this->*rv)(std::forward<class IBlockWorldGenAPI const&>(a0), std::forward<class BlockPos const&>(a1), std::forward<int \/*enum enum Rotation*\/ const&>(a2));
    }
    */

protected:

private:
};