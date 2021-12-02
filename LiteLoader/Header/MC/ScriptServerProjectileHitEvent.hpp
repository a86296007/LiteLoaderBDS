// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERPROJECTILEHITEVENT
#include "Extra/ScriptServerProjectileHitEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERPROJECTILEHITEVENT
class ScriptServerProjectileHitEvent {
#include "Extra/ScriptServerProjectileHitEventAPI.hpp"
public:
    /*0*/ virtual ~ScriptServerProjectileHitEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;

public:
    MCAPI void setHitId(struct ActorUniqueID const&);
    MCAPI void setHitPosition(class Vec3 const&);
    MCAPI void setOwnerId(struct ActorUniqueID const&);
    MCAPI void setProjectileId(struct ActorUniqueID const&);

private:
    MCAPI static class HashedString const mHash;
};