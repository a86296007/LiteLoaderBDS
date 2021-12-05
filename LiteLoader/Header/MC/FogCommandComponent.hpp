// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_FOGCOMMANDCOMPONENT
#include "Extra/FogCommandComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_FOGCOMMANDCOMPONENT
class FogCommandComponent {
#include "Extra/FogCommandComponentAPI.hpp"
public:
    MCAPI void addAdditionalSaveData(class CompoundTag&);
    MCAPI std::vector<std::string> getFogSettingsStack() const;
    MCAPI bool popFogSetting(std::string const&);
    MCAPI bool pushFogSetting(std::string const&, std::string const&);
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI bool removeFogSettings(std::string const&);

protected:

private:
};