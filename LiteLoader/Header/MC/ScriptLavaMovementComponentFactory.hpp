// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTLAVAMOVEMENTCOMPONENTFACTORY
#include "Extra/ScriptLavaMovementComponentFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTLAVAMOVEMENTCOMPONENTFACTORY
class ScriptLavaMovementComponentFactory {
#include "Extra/ScriptLavaMovementComponentFactoryAPI.hpp"
public:
    /*0*/ virtual ~ScriptLavaMovementComponentFactory();
    /*1*/ virtual class Scripting::StrongTypedObjectHandle<class ScriptActorComponent> createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    /*2*/ virtual bool hasComponent(class WeakEntityRef) const;
    /*
    inline class Scripting::StrongTypedObjectHandle<class ScriptActorComponent> createComponent(class WeakEntityRef a0, class Scripting::WeakLifetimeScope const& a1, std::string const& a2){
        class Scripting::StrongTypedObjectHandle<class ScriptActorComponent> (ScriptLavaMovementComponentFactory::*rv)(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
        *((void**)&rv) = dlsym("?createComponent@ScriptLavaMovementComponentFactory@@UEAA?AV?$StrongTypedObjectHandle@VScriptActorComponent@@@Scripting@@VWeakEntityRef@@AEBVWeakLifetimeScope@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<class WeakEntityRef>(a0), std::forward<class Scripting::WeakLifetimeScope const&>(a1), std::forward<std::string const&>(a2));
    }
    inline bool hasComponent(class WeakEntityRef a0) const{
        bool (ScriptLavaMovementComponentFactory::*rv)(class WeakEntityRef) const;
        *((void**)&rv) = dlsym("?hasComponent@ScriptLavaMovementComponentFactory@@UEBA_NVWeakEntityRef@@@Z");
        return (this->*rv)(std::forward<class WeakEntityRef>(a0));
    }
    */

protected:

private:
};