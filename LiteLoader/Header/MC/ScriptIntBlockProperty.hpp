// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTINTBLOCKPROPERTY
#include "Extra/ScriptIntBlockPropertyAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTINTBLOCKPROPERTY
class ScriptIntBlockProperty {
#include "Extra/ScriptIntBlockPropertyAPI.hpp"
public:
    /*0*/ virtual ~ScriptIntBlockProperty();

public:
    MCAPI class Scripting::Result<int> getState() const;
    MCAPI class ScriptIntBlockProperty& operator=(class ScriptIntBlockProperty&&);
    MCAPI std::vector<int> const& getAllValues() const;
    MCAPI std::string const& getName() const;
    MCAPI class Scripting::Result<void> setState(int);
};