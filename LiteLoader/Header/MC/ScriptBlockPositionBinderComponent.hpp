// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTBLOCKPOSITIONBINDERCOMPONENT
#include "Extra/ScriptBlockPositionBinderComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBLOCKPOSITIONBINDERCOMPONENT
class ScriptBlockPositionBinderComponent {
#include "Extra/ScriptBlockPositionBinderComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptBlockPositionBinderComponent();
    /*1*/ virtual bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&) const;
    /*2*/ virtual bool deserialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);
    /*
    inline bool deserialize(class ScriptEngine& a0, class ScriptApi::ScriptObjectHandle const& a1){
        bool (ScriptBlockPositionBinderComponent::*rv)(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);
        *((void**)&rv) = dlsym("?deserialize@ScriptBlockPositionBinderComponent@@UEAA_NAEAVScriptEngine@@AEBVScriptObjectHandle@ScriptApi@@@Z");
        return (this->*rv)(std::forward<class ScriptEngine&>(a0), std::forward<class ScriptApi::ScriptObjectHandle const&>(a1));
    }
    inline bool serialize(class ScriptEngine& a0, class ScriptApi::ScriptObjectHandle const& a1) const{
        bool (ScriptBlockPositionBinderComponent::*rv)(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&) const;
        *((void**)&rv) = dlsym("?serialize@ScriptBlockPositionBinderComponent@@UEBA_NAEAVScriptEngine@@AEBVScriptObjectHandle@ScriptApi@@@Z");
        return (this->*rv)(std::forward<class ScriptEngine&>(a0), std::forward<class ScriptApi::ScriptObjectHandle const&>(a1));
    }
    */
    MCAPI class BlockPos const& getPosition() const;
    MCAPI static std::string const TAG;

protected:

private:
};