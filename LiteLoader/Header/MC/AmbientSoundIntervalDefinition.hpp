// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_AMBIENTSOUNDINTERVALDEFINITION
#include "Extra/AmbientSoundIntervalDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_AMBIENTSOUNDINTERVALDEFINITION
struct AmbientSoundIntervalDefinition {
#include "Extra/AmbientSoundIntervalDefinitionAPI.hpp"
public:
    MCAPI void initialize(class EntityContext&);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct AmbientSoundIntervalDefinition> >&);

protected:

private:
};