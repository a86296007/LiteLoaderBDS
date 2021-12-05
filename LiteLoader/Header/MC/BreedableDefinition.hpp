// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_BREEDABLEDEFINITION
#include "Extra/BreedableDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BREEDABLEDEFINITION
class BreedableDefinition {
#include "Extra/BreedableDefinitionAPI.hpp"
public:
    MCAPI void addBreedItem(class ItemDescriptor const&);
    MCAPI void addBreedableType(struct BreedableType const&);
    MCAPI void addEnvironmentRequirement(struct EnvironmentRequirement const&);
    MCAPI void initialize(class EntityContext&, class BreedableComponent&);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BreedableDefinition> >&);

protected:

private:
};