// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ACTORTICKNEEDEDCOMPONENT
#include "Extra/ActorTickNeededComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORTICKNEEDEDCOMPONENT
class ActorTickNeededComponent {
#include "Extra/ActorTickNeededComponentAPI.hpp"
public:
    MCAPI class WeakRefT<struct SharePtrRefTraits<class BlockSource> > getBlockSource();
    MCAPI class ActorTickNeededComponent& operator=(class ActorTickNeededComponent&&);

protected:

private:
};