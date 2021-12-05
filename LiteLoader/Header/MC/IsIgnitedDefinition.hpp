// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_ISIGNITEDDEFINITION
#include "Extra/IsIgnitedDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_ISIGNITEDDEFINITION
struct IsIgnitedDefinition {
#include "Extra/IsIgnitedDefinitionAPI.hpp"
public:
    MCAPI void initialize(class EntityContext&);
    MCAPI void uninitialize(class EntityContext&);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsIgnitedDefinition> >&);

protected:

private:
};