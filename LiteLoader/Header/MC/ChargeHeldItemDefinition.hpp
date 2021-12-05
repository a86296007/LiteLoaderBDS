// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_CHARGEHELDITEMDEFINITION
#include "Extra/ChargeHeldItemDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_CHARGEHELDITEMDEFINITION
class ChargeHeldItemDefinition {
#include "Extra/ChargeHeldItemDefinitionAPI.hpp"
public:
    /*0*/ virtual ~ChargeHeldItemDefinition();

    MCAPI void initialize(class EntityContext&, class ChargeHeldItemGoal&);
    MCAPI static void buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ChargeHeldItemDefinition> >&);

protected:

private:
};