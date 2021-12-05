// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_COLUMNUTILS
#include "Extra/ColumnUtilsAPI.hpp"
#undef EXTRA_INCLUDE_PART_COLUMNUTILS
namespace ColumnUtils {
#include "Extra/ColumnUtilsAPI.hpp"
    MCAPI class std::optional<struct ColumnUtils::ColumnRange> scanColumn(class BlockPos const&, int, class std::function<bool (class BlockPos const&)>, class std::function<bool (class BlockPos const&)>);
    MCAPI class std::optional<struct ColumnUtils::ColumnRange> scanColumnWithinPosBiome(class IBlockWorldGenAPI&, class BlockPos const&, int, class std::function<bool (class BlockPos const&)>, class std::function<bool (class BlockPos const&)>);
};