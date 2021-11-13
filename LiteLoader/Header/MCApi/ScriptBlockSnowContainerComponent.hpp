// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BaseScriptBlockLiquidContainerComponent.hpp"
class ScriptBlockSnowContainerComponent : public BaseScriptBlockLiquidContainerComponent {
public:
    virtual ~ScriptBlockSnowContainerComponent();

public:
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockSnowContainerComponent> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptBlockSnowContainerComponent> tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);
};