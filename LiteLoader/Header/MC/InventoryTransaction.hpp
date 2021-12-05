// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_INVENTORYTRANSACTION
#include "Extra/InventoryTransactionAPI.hpp"
#undef EXTRA_INCLUDE_PART_INVENTORYTRANSACTION
class InventoryTransaction {
#include "Extra/InventoryTransactionAPI.hpp"
public:
    MCAPI void _logTransaction(bool) const;
    MCAPI void addAction(class InventoryAction const&);
    MCAPI enum InventoryTransactionError executeFull(class Player&, bool) const;
    MCAPI void forceBalanceTransaction();
    MCAPI std::vector<class InventoryAction> const& getActions(class InventorySource const&) const;
    MCAPI void postLoadItems(class BlockPalette&, bool);
    MCAPI void serialize(class BinaryStream&, bool) const;
    MCAPI static class InventoryTransaction deserialize(class ReadOnlyBinaryStream&);
    MCAPI static std::string const getInventoryTransactionErrorName(enum InventoryTransactionError);

protected:

private:
    MCAPI void _dropCreatedItems(class Player&) const;
    MCAPI void addItemToContent(class ItemStack const&, int);
    MCAPI static class BidirectionalUnorderedMap<enum InventoryTransactionError, std::string > const inventoryTransactionErrorMap;
};