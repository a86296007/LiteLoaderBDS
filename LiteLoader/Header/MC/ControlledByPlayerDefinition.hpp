// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_CONTROLLEDBYPLAYERDEFINITION
#include "Extra/ControlledByPlayerDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_CONTROLLEDBYPLAYERDEFINITION
class ControlledByPlayerDefinition {
#include "Extra/ControlledByPlayerDefinitionAPI.hpp"
public:
    /*0*/ virtual ~ControlledByPlayerDefinition();

    MCAPI void initialize(class EntityContext&, class ControlledByPlayerGoal&);
    MCAPI static void buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ControlledByPlayerDefinition> >&);

protected:

private:
};