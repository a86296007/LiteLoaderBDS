// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ITEMEVENTCOORDINATOR
#include "Extra/ItemEventCoordinatorAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEMEVENTCOORDINATOR
class ItemEventCoordinator {
#include "Extra/ItemEventCoordinatorAPI.hpp"
public:
    /*0*/ virtual ~ItemEventCoordinator();

public:
    MCAPI void onItemModifiedActor(class ItemStackBase const&, class Actor const&);
    MCAPI void onItemSpawnedActor(class ItemStackBase const&, class Actor const&);
    MCAPI void registerItemGameplayHandler(std::unique_ptr<class ItemGameplayHandler>);
};