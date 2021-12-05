// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ONUSEONITEMCOMPONENT
#include "Extra/OnUseOnItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_ONUSEONITEMCOMPONENT
class OnUseOnItemComponent {
#include "Extra/OnUseOnItemComponentAPI.hpp"
public:
    /*0*/ virtual ~OnUseOnItemComponent();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual bool useOn(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&) const;
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);
    /*
    inline bool isNetworkComponent() const{
        bool (OnUseOnItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?isNetworkComponent@OnUseOnItemComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class CompoundTag> buildNetworkTag() const{
        std::unique_ptr<class CompoundTag> (OnUseOnItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?buildNetworkTag@OnUseOnItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline void initializeFromNetwork(class CompoundTag const& a0){
        void (OnUseOnItemComponent::*rv)(class CompoundTag const&);
        *((void**)&rv) = dlsym("?initializeFromNetwork@OnUseOnItemComponent@@UEAAXAEBVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0));
    }
    inline bool useOn(class ItemStack& a0, class Actor& a1, class BlockPos const& a2, unsigned char a3, class Vec3 const& a4) const{
        bool (OnUseOnItemComponent::*rv)(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&) const;
        *((void**)&rv) = dlsym("?useOn@OnUseOnItemComponent@@UEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Actor&>(a1), std::forward<class BlockPos const&>(a2), std::forward<unsigned char>(a3), std::forward<class Vec3 const&>(a4));
    }
    */
    MCAPI static void bindType();

protected:

private:
};