// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BehaviorDefinition.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_INTERACTACTIONDEFINITION
#include "Extra/InteractActionDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_INTERACTACTIONDEFINITION
class InteractActionDefinition : public BehaviorDefinition {
#include "Extra/InteractActionDefinitionAPI.hpp"
public:
    /*0*/ virtual ~InteractActionDefinition();
    /*1*/ virtual void load(class Json::Value, class BehaviorFactory const&);
    /*
    inline void load(class Json::Value a0, class BehaviorFactory const& a1){
        void (InteractActionDefinition::*rv)(class Json::Value, class BehaviorFactory const&);
        *((void**)&rv) = dlsym("?load@InteractActionDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z");
        return (this->*rv)(std::forward<class Json::Value>(a0), std::forward<class BehaviorFactory const&>(a1));
    }
    */

protected:

private:
};