// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_BREWINGSTANDRESULTCONTAINERVALIDATION
#include "Extra/BrewingStandResultContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_BREWINGSTANDRESULTCONTAINERVALIDATION
class BrewingStandResultContainerValidation : public ContainerValidationBase {
#include "Extra/BrewingStandResultContainerValidationAPI.hpp"
public:
    /*0*/ virtual ~BrewingStandResultContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
};