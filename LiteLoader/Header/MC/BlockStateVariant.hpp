// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_BLOCKSTATEVARIANT
#include "Extra/BlockStateVariantAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKSTATEVARIANT
class BlockStateVariant {
#include "Extra/BlockStateVariantAPI.hpp"
public:
    /*0*/ virtual ~BlockStateVariant();
    /*1*/ virtual void toNBT(class CompoundTag&, int) const;
    /*2*/ virtual bool fromNBT(class CompoundTag const&, int&) const;
    /*
    inline bool fromNBT(class CompoundTag const& a0, int& a1) const{
        bool (BlockStateVariant::*rv)(class CompoundTag const&, int&) const;
        *((void**)&rv) = dlsym("?fromNBT@BlockStateVariant@@UEBA_NAEBVCompoundTag@@AEAH@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0), std::forward<int&>(a1));
    }
    inline void toNBT(class CompoundTag& a0, int a1) const{
        void (BlockStateVariant::*rv)(class CompoundTag&, int) const;
        *((void**)&rv) = dlsym("?toNBT@BlockStateVariant@@UEBAXAEAVCompoundTag@@H@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0), std::forward<int>(a1));
    }
    */

protected:

private:
};