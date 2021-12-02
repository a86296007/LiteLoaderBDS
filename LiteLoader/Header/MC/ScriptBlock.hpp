// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#include "ScriptObject.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTBLOCK
#include "Extra/ScriptBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBLOCK
class ScriptBlock : public ScriptObject {
#include "Extra/ScriptBlockAPI.hpp"
public:
    /*0*/ virtual ~ScriptBlock();

public:
    MCAPI class Scripting::Result<class Scripting::StrongObjectHandle> getComponent(std::string const&);
    MCAPI std::vector<std::string> getTags() const;
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptBlockType> getType() const;
    MCAPI bool hasTag(std::string const&) const;
    MCAPI class ScriptBlock& operator=(class ScriptBlock&&);
    MCAPI void setPermutation(class ScriptBlockPermutation const&);
    MCAPI void setType(class ScriptBlockType const&);
    MCAPI class Scripting::Result<void> setWaterlogged(bool);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlock> bind(struct Scripting::Version);
};