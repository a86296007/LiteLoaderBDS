// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_FLOCKINGDEFINITION
#include "Extra/FlockingDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_FLOCKINGDEFINITION
class FlockingDefinition {
#include "Extra/FlockingDefinitionAPI.hpp"
public:
    MCAPI void initialize(class EntityContext&, class FlockingComponent&);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FlockingDefinition> >&);

protected:

private:
};