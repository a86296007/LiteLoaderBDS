// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MaterialReducerOutputValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MATERIALREDUCEROUTPUTVALIDATION
public:
    class MaterialReducerOutputValidation& operator=(class MaterialReducerOutputValidation const &) = delete;
    MaterialReducerOutputValidation(class MaterialReducerOutputValidation const &) = delete;
    MaterialReducerOutputValidation() = delete;
#endif

public:
    /*0*/ virtual ~MaterialReducerOutputValidation();
    /*2*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /*9*/ virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
    /*
    inline bool canDestroy(class ContainerScreenContext const & a0) const{
        bool (MaterialReducerOutputValidation::*rv)(class ContainerScreenContext const &) const;
        *((void**)&rv) = dlsym("?canDestroy@MaterialReducerOutputValidation@@UEBA_NAEBVContainerScreenContext@@@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const &>(a0));
    }
    */

protected:

private:

};