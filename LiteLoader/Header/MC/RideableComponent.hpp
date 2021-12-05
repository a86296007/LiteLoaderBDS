// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_RIDEABLECOMPONENT
#include "Extra/RideableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_RIDEABLECOMPONENT
class RideableComponent {
#include "Extra/RideableComponentAPI.hpp"
public:
    MCAPI bool areSeatsFull(class Actor const&) const;
    MCAPI bool canAddPassenger(class Actor const&, class Actor&) const;
    MCAPI bool getFirstAvailableSeatPosition(class Actor const&, class Actor&, class Vec3&) const;
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    MCAPI void positionPassenger(class Actor&, class Actor&);
    MCAPI bool pullInEntity(class Actor&, class Actor&);

protected:

private:
    MCAPI void _setCanPlayerRide(class Player&, bool);
    MCAPI struct SeatDescription getValidSeat(class Actor const&, int) const;
};