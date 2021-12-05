// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_RESOURCEPACKPATHS
#include "Extra/ResourcePackPathsAPI.hpp"
#undef EXTRA_INCLUDE_PART_RESOURCEPACKPATHS
namespace ResourcePackPaths {
#include "Extra/ResourcePackPathsAPI.hpp"
    MCAPI class Core::PathBuffer<std::string > getCachedBehaviorPacksPath();
    MCAPI class Core::PathBuffer<std::string > getCachedResourcePacksPath();
    MCAPI class Core::PathBuffer<std::string > getPremiumBehaviorPackPath();
    MCAPI class Core::PathBuffer<std::string > getPremiumPackPath();
    MCAPI class Core::PathBuffer<std::string > getPremiumResourcePackPath();
    MCAPI class Core::PathBuffer<std::string > getPremiumWorldTemplatePath();
    MCAPI class Core::PathBuffer<std::string > getTemporaryPremiumBehaviorPacksPath();
    MCAPI class Core::PathBuffer<std::string > getTemporaryPremiumResourcePacksPath();
};