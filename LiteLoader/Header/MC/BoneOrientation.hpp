// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_BONEORIENTATION
#include "Extra/BoneOrientationAPI.hpp"
#undef EXTRA_INCLUDE_PART_BONEORIENTATION
class BoneOrientation {
#include "Extra/BoneOrientationAPI.hpp"
public:
    MCAPI class HashedString const& getName() const;
    MCAPI class Vec3& getPivot();
    MCAPI class Vec3 const& getPivot() const;
    MCAPI void setDefaultPose();

protected:

private:
};