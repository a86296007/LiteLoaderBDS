// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
class MobEffectSystem : public ITickingSystem {
public:
    virtual ~MobEffectSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);

private:
    MCAPI void _tickComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class MobEffectComponent>&);
};