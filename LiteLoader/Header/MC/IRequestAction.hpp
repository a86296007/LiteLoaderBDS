// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_IREQUESTACTION
#include "Extra/IRequestActionAPI.hpp"
#undef EXTRA_INCLUDE_PART_IREQUESTACTION
class IRequestAction {
#include "Extra/IRequestActionAPI.hpp"
public:
    /*0*/ virtual ~IRequestAction();
    /*1*/ virtual void execute(class ServerLevel&, class Dimension&) = 0;
    /*2*/ virtual void serialize(class CompoundTag&);
    /*3*/ virtual bool operator==(class IRequestAction&);
    /*
    inline bool operator==(class IRequestAction& a0){
        bool (IRequestAction::*rv)(class IRequestAction&);
        *((void**)&rv) = dlsym("??8IRequestAction@@UEBA_NAEAV0@@Z");
        return (this->*rv)(std::forward<class IRequestAction&>(a0));
    }
    inline void serialize(class CompoundTag& a0){
        void (IRequestAction::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?serialize@IRequestAction@@UEAAXAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    */
    MCAPI static bool isValidTag(class CompoundTag const&);

protected:

private:
};