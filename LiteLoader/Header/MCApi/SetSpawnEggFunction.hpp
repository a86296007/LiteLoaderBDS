// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "LootItemFunction.hpp"
class SetSpawnEggFunction : public LootItemFunction {
public:
    virtual ~SetSpawnEggFunction();
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
};