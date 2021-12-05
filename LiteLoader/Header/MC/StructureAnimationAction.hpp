// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_STRUCTUREANIMATIONACTION
#include "Extra/StructureAnimationActionAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRUCTUREANIMATIONACTION
class StructureAnimationAction {
#include "Extra/StructureAnimationActionAPI.hpp"
public:
    /*0*/ virtual ~StructureAnimationAction();
    /*1*/ virtual void execute(class ServerLevel&, class Dimension&);
    /*2*/ virtual void serialize(class CompoundTag&);
    /*
    inline bool operator==(class IRequestAction& a0){
        bool (StructureAnimationAction::*rv)(class IRequestAction&);
        *((void**)&rv) = dlsym("??8StructureAnimationAction@@UEBA_NAEAVIRequestAction@@@Z");
        return (this->*rv)(std::forward<class IRequestAction&>(a0));
    }
    inline void execute(class ServerLevel& a0, class Dimension& a1){
        void (StructureAnimationAction::*rv)(class ServerLevel&, class Dimension&);
        *((void**)&rv) = dlsym("?execute@StructureAnimationAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z");
        return (this->*rv)(std::forward<class ServerLevel&>(a0), std::forward<class Dimension&>(a1));
    }
    inline void serialize(class CompoundTag& a0){
        void (StructureAnimationAction::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?serialize@StructureAnimationAction@@UEAAXAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    */
    MCAPI static std::unique_ptr<class StructureAnimationAction> load(class CompoundTag const&, std::string const&);

protected:

private:
};