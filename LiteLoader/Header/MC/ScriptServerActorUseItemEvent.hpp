// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERACTORUSEITEMEVENT
#include "Extra/ScriptServerActorUseItemEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERACTORUSEITEMEVENT
class ScriptServerActorUseItemEvent {
#include "Extra/ScriptServerActorUseItemEventAPI.hpp"
public:
    /*0*/ virtual ~ScriptServerActorUseItemEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;

public:
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setItemStack(class ItemInstance const&);
    MCAPI void setUseMethod(enum ItemUseMethod);

private:
    MCAPI static class HashedString const mHash;
};