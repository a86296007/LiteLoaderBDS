// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ACTORHISTORY
#include "Extra/ActorHistoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORHISTORY
class ActorHistory {
#include "Extra/ActorHistoryAPI.hpp"
public:
    MCAPI bool addFrame(struct IActorMovementProxy&, unsigned __int64);
    MCAPI struct ActorHistory::Snapshot createSnapshot(struct IActorMovementProxy&) const;

protected:

private:
};