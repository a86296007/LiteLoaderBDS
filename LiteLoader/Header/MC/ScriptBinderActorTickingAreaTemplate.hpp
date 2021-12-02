// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTBINDERACTORTICKINGAREATEMPLATE
#include "Extra/ScriptBinderActorTickingAreaTemplateAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBINDERACTORTICKINGAREATEMPLATE
class ScriptBinderActorTickingAreaTemplate {
#include "Extra/ScriptBinderActorTickingAreaTemplateAPI.hpp"
public:
    /*0*/ virtual ~ScriptBinderActorTickingAreaTemplate();
    /*1*/ virtual std::string const& getTemplateIdentifier() const;
    /*2*/ virtual void applyTemplate(class ScriptObjectBinder&) const;

public:
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(struct ActorUniqueID const&);
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class ITickingArea const&);
};