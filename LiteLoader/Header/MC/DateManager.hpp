// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_DATEMANAGER
#include "Extra/DateManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_DATEMANAGER
class DateManager {
#include "Extra/DateManagerAPI.hpp"
public:
    MCAPI static std::string getCurrentTimestampFileName();
    MCAPI static __int64 getRealTime();
    MCAPI static struct tm toDateTime(__int64, enum DateManager::TimeZoneType);
    MCAPI static std::string toString(struct tm const&, std::string const&);
    MCAPI static std::string toString(__int64 const&, enum DateManager::TimeZoneType, std::string const&);
    MCAPI static std::string toString_DateTime(struct tm const&, enum DateManager::TimeZoneType);
    MCAPI static std::string toString_DateTime(__int64 const&, enum DateManager::TimeZoneType);

protected:

private:
};