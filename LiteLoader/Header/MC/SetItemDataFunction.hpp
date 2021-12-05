// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "LootItemFunction.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_SETITEMDATAFUNCTION
#include "Extra/SetItemDataFunctionAPI.hpp"
#undef EXTRA_INCLUDE_PART_SETITEMDATAFUNCTION
class SetItemDataFunction : public LootItemFunction {
#include "Extra/SetItemDataFunctionAPI.hpp"
public:
    /*0*/ virtual ~SetItemDataFunction();
    /*1*/ virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /*2*/ virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    /*
    inline void apply(class ItemInstance& a0, class Random& a1, class LootTableContext& a2){
        void (SetItemDataFunction::*rv)(class ItemInstance&, class Random&, class LootTableContext&);
        *((void**)&rv) = dlsym("?apply@SetItemDataFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z");
        return (this->*rv)(std::forward<class ItemInstance&>(a0), std::forward<class Random&>(a1), std::forward<class LootTableContext&>(a2));
    }
    inline void apply(class ItemStack& a0, class Random& a1, class LootTableContext& a2){
        void (SetItemDataFunction::*rv)(class ItemStack&, class Random&, class LootTableContext&);
        *((void**)&rv) = dlsym("?apply@SetItemDataFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Random&>(a1), std::forward<class LootTableContext&>(a2));
    }
    */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>>&);

protected:

private:
};