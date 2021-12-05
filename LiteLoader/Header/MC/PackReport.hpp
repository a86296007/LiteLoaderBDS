// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_PACKREPORT
#include "Extra/PackReportAPI.hpp"
#undef EXTRA_INCLUDE_PART_PACKREPORT
class PackReport {
#include "Extra/PackReportAPI.hpp"
public:
    MCAPI std::string const& getOriginalName() const;
    MCAPI std::string const& getOriginalVersion() const;
    MCAPI class PackReport& operator=(class PackReport&&);
    MCAPI void serialize(class Json::Value&);
    MCAPI void setLocation(class ResourceLocation const&);
    MCAPI bool wasUpgraded() const;

protected:

private:
};