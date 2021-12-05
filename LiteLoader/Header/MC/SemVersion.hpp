// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_SEMVERSION
#include "Extra/SemVersionAPI.hpp"
#undef EXTRA_INCLUDE_PART_SEMVERSION
class SemVersion {
#include "Extra/SemVersionAPI.hpp"
public:
    MCAPI std::string const& asString() const;
    MCAPI unsigned short getMajor() const;
    MCAPI unsigned short getMinor() const;
    MCAPI unsigned short getPatch() const;
    MCAPI bool isAnyVersion() const;
    MCAPI bool isValid() const;
    MCAPI bool operator<(class SemVersion const&);
    MCAPI bool operator<=(class SemVersion const&);
    MCAPI class SemVersion& operator=(class SemVersion const&);
    MCAPI bool operator==(class SemVersion const&);
    MCAPI bool operator>(class SemVersion const&);
    MCAPI bool operator>=(class SemVersion const&);
    MCAPI bool satisfies(class SemVersion const&) const;
    MCAPI static struct SemVersion::any_version_constructor const AnyVersionConstructor;
    MCAPI static enum SemVersion::MatchType fromJson(class Json::Value const&, class SemVersion&, enum SemVersion::ParseOption);
    MCAPI static enum SemVersion::MatchType fromJsonArray(class Json::Value const&, class SemVersion&);
    MCAPI static enum SemVersion::MatchType fromString(std::string const&, class SemVersion&, enum SemVersion::ParseOption);

protected:

private:
    MCAPI void _parseVersionToString();
};