// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_LABTABLEINPUTVALIDATION
#include "Extra/LabTableInputValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_LABTABLEINPUTVALIDATION
class LabTableInputValidation : public ContainerValidationBase {
#include "Extra/LabTableInputValidationAPI.hpp"
public:
    /*0*/ virtual ~LabTableInputValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*
    inline bool canDestroy(class ContainerScreenContext const& a0) const{
        bool (LabTableInputValidation::*rv)(class ContainerScreenContext const&) const;
        *((void**)&rv) = dlsym("?canDestroy@LabTableInputValidation@@UEBA_NAEBVContainerScreenContext@@@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0));
    }
    inline bool isItemAllowedInSlot(class ContainerScreenContext const& a0, int a1, class ItemStackBase const& a2, int a3) const{
        bool (LabTableInputValidation::*rv)(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
        *((void**)&rv) = dlsym("?isItemAllowedInSlot@LabTableInputValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0), std::forward<int>(a1), std::forward<class ItemStackBase const&>(a2), std::forward<int>(a3));
    }
    inline bool isValidSlotForContainer(class ContainerScreenContext const& a0, class Container const& a1, int a2) const{
        bool (LabTableInputValidation::*rv)(class ContainerScreenContext const&, class Container const&, int) const;
        *((void**)&rv) = dlsym("?isValidSlotForContainer@LabTableInputValidation@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0), std::forward<class Container const&>(a1), std::forward<int>(a2));
    }
    */

protected:

private:
};