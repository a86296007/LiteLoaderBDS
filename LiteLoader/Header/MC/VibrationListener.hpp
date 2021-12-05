// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_VIBRATIONLISTENER
#include "Extra/VibrationListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_VIBRATIONLISTENER
class VibrationListener {
#include "Extra/VibrationListenerAPI.hpp"
public:
    /*0*/ virtual ~VibrationListener();
    /*1*/ virtual void handleGameEvent(class GameEvent const&, class BlockPos const&, class Actor const*, class BlockSource&);
    /*2*/ virtual class BlockPos getOwnerPos() const;
    /*3*/ virtual bool isEventInRange(class GameEvent const&, class BlockPos const&) const;
    /*
    inline class BlockPos getOwnerPos() const{
        class BlockPos (VibrationListener::*rv)() const;
        *((void**)&rv) = dlsym("?getOwnerPos@VibrationListener@@UEBA?AVBlockPos@@XZ");
        return (this->*rv)();
    }
    inline void handleGameEvent(class GameEvent const& a0, class BlockPos const& a1, class Actor const* a2, class BlockSource& a3){
        void (VibrationListener::*rv)(class GameEvent const&, class BlockPos const&, class Actor const*, class BlockSource&);
        *((void**)&rv) = dlsym("?handleGameEvent@VibrationListener@@UEAAXAEBVGameEvent@@AEBVBlockPos@@PEBVActor@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class GameEvent const&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Actor const*>(a2), std::forward<class BlockSource&>(a3));
    }
    inline bool isEventInRange(class GameEvent const& a0, class BlockPos const& a1) const{
        bool (VibrationListener::*rv)(class GameEvent const&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?isEventInRange@VibrationListener@@UEBA_NAEBVGameEvent@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class GameEvent const&>(a0), std::forward<class BlockPos const&>(a1));
    }
    */
    MCAPI class GameEvent const& getGameEvent() const;
    MCAPI unsigned __int64 getRange() const;
    MCAPI bool isWaiting() const;
    MCAPI void stopWaiting();
    MCAPI static int getGameEventFrequency(class GameEvent const&);

protected:

private:
};