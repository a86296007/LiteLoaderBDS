// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTPOSITIONCOMPONENT
#include "Extra/ScriptPositionComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTPOSITIONCOMPONENT
class ScriptPositionComponent {
#include "Extra/ScriptPositionComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptPositionComponent();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual bool applyComponentTo(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, class ScriptApi::ScriptObjectHandle const&) const;
    /*5*/ virtual void __unk_vfn_3();
    /*6*/ virtual void __unk_vfn_4();
    /*7*/ virtual void __unk_vfn_5();
    /*8*/ virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, class ScriptApi::ScriptObjectHandle&) const;
    /*
    inline bool applyComponentTo(class ScriptApi::ScriptVersionInfo const& a0, class ScriptEngine& a1, class ScriptServerContext& a2, class Actor& a3, class ScriptApi::ScriptObjectHandle const& a4) const{
        bool (ScriptPositionComponent::*rv)(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, class ScriptApi::ScriptObjectHandle const&) const;
        *((void**)&rv) = dlsym("?applyComponentTo@ScriptPositionComponent@@UEBA_NAEBVScriptVersionInfo@ScriptApi@@AEAVScriptEngine@@AEAVScriptServerContext@@AEAVActor@@AEBVScriptObjectHandle@3@@Z");
        return (this->*rv)(std::forward<class ScriptApi::ScriptVersionInfo const&>(a0), std::forward<class ScriptEngine&>(a1), std::forward<class ScriptServerContext&>(a2), std::forward<class Actor&>(a3), std::forward<class ScriptApi::ScriptObjectHandle const&>(a4));
    }
    inline bool hasComponent(class ScriptApi::ScriptVersionInfo const& a0, class ScriptEngine& a1, class ScriptServerContext& a2, class Actor& a3, bool& a4) const{
        bool (ScriptPositionComponent::*rv)(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, bool&) const;
        *((void**)&rv) = dlsym("?hasComponent@ScriptPositionComponent@@UEBA_NAEBVScriptVersionInfo@ScriptApi@@AEAVScriptEngine@@AEAVScriptServerContext@@AEAVActor@@AEA_N@Z");
        return (this->*rv)(std::forward<class ScriptApi::ScriptVersionInfo const&>(a0), std::forward<class ScriptEngine&>(a1), std::forward<class ScriptServerContext&>(a2), std::forward<class Actor&>(a3), std::forward<bool&>(a4));
    }
    inline bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const& a0, class ScriptEngine& a1, class ScriptServerContext& a2, class Actor& a3, class ScriptApi::ScriptObjectHandle& a4) const{
        bool (ScriptPositionComponent::*rv)(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, class ScriptApi::ScriptObjectHandle&) const;
        *((void**)&rv) = dlsym("?retrieveComponentFrom@ScriptPositionComponent@@UEBA_NAEBVScriptVersionInfo@ScriptApi@@AEAVScriptEngine@@AEAVScriptServerContext@@AEAVActor@@AEAVScriptObjectHandle@3@@Z");
        return (this->*rv)(std::forward<class ScriptApi::ScriptVersionInfo const&>(a0), std::forward<class ScriptEngine&>(a1), std::forward<class ScriptServerContext&>(a2), std::forward<class Actor&>(a3), std::forward<class ScriptApi::ScriptObjectHandle&>(a4));
    }
    */

protected:

private:
    MCAPI static class HashedString const mHash;
};