// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_TRUSTCOMPONENT
#include "Extra/TrustComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRUSTCOMPONENT
class TrustComponent {
#include "Extra/TrustComponentAPI.hpp"
public:
    MCAPI void addAdditionalSaveData(class CompoundTag&);
    MCAPI void assignTrustedPlayer(struct ActorUniqueID);
    MCAPI class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID> > const& getTrustedPlayerIDs() const;
    MCAPI void initFromDefinition(class Actor&);
    MCAPI class TrustComponent& operator=(class TrustComponent&&);
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);

protected:

private:
};