// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PeekSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PEEKSYSTEM
public:
    class PeekSystem& operator=(class PeekSystem const &) = delete;
    PeekSystem(class PeekSystem const &) = delete;
    PeekSystem() = delete;
#endif

public:
    /*0*/ virtual ~PeekSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);

protected:

private:

};