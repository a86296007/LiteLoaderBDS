// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "AttributeScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptUnderwaterMovementComponent : public AttributeScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTUNDERWATERMOVEMENTCOMPONENT
public:
    class ScriptUnderwaterMovementComponent& operator=(class ScriptUnderwaterMovementComponent const &) = delete;
    ScriptUnderwaterMovementComponent(class ScriptUnderwaterMovementComponent const &) = delete;
    ScriptUnderwaterMovementComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptUnderwaterMovementComponent();
    /*
    inline  ~ScriptUnderwaterMovementComponent(){
         (ScriptUnderwaterMovementComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptUnderwaterMovementComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptUnderwaterMovementComponent> bind(struct Scripting::Version);

protected:

private:

};