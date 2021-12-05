// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_PATH
#include "Extra/PathAPI.hpp"
#undef EXTRA_INCLUDE_PART_PATH
class Path {
#include "Extra/PathAPI.hpp"
public:
    MCAPI class Vec3 currentPos(class Actor const*) const;
    MCAPI class BlockPos const& currentPos() const;
    MCAPI bool endsInXZ(class Vec3 const&);
    MCAPI enum PathCompletionType getCompletionType() const;
    MCAPI class Vec3 getEndPos() const;
    MCAPI unsigned __int64 getIndex() const;
    MCAPI class BlockPos const& getLastPos() const;
    MCAPI class BlockPos const& getNodePos(unsigned __int64) const;
    MCAPI enum NodeType getNodeType(unsigned __int64) const;
    MCAPI class Vec3 getPos(class Actor const*, unsigned __int64) const;
    MCAPI unsigned __int64 getSize() const;
    MCAPI bool isDone() const;
    MCAPI bool isValid() const;
    MCAPI std::unique_ptr<class Path> makeCopy() const;
    MCAPI void next();
    MCAPI bool sameAs(class Path*) const;
    MCAPI void setIndex(unsigned __int64);
    MCAPI void setSize(unsigned __int64);

protected:

private:
    MCAPI void buildFromNodes(std::vector<class Path::Node>&&, enum PathCompletionType);
};