// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "LootItemFunction.hpp"
#define EXTRA_INCLUDE_PART_SETITEMCOUNTFUNCTION
#include "Extra/SetItemCountFunctionAPI.hpp"
#undef EXTRA_INCLUDE_PART_SETITEMCOUNTFUNCTION
class SetItemCountFunction : public LootItemFunction {
#include "Extra/SetItemCountFunctionAPI.hpp"
public:
    /*0*/ virtual ~SetItemCountFunction();
    /*1*/ virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /*3*/ virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);

public:
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>>&);
};