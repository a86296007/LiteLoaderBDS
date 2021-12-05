// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_PHYSICSDEFINITION
#include "Extra/PhysicsDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_PHYSICSDEFINITION
class PhysicsDefinition {
#include "Extra/PhysicsDefinitionAPI.hpp"
public:
    MCAPI void initialize(class EntityContext&, class PhysicsComponent&);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PhysicsDefinition> >&);

protected:

private:
};