// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "BehaviorDefinition.hpp"
#define EXTRA_INCLUDE_PART_REPEATUNTILSUCCESSDEFINITION
#include "Extra/RepeatUntilSuccessDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_REPEATUNTILSUCCESSDEFINITION
class RepeatUntilSuccessDefinition : public BehaviorDefinition {
#include "Extra/RepeatUntilSuccessDefinitionAPI.hpp"
public:
    /*0*/ virtual ~RepeatUntilSuccessDefinition();
    /*1*/ virtual void load(class Json::Value, class BehaviorFactory const&);
};