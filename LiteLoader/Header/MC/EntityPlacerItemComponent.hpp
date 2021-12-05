// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ENTITYPLACERITEMCOMPONENT
#include "Extra/EntityPlacerItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENTITYPLACERITEMCOMPONENT
class EntityPlacerItemComponent {
#include "Extra/EntityPlacerItemComponentAPI.hpp"
public:
    /*0*/ virtual ~EntityPlacerItemComponent();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual bool useOn(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&) const;
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);
    /*
    inline bool isNetworkComponent() const{
        bool (EntityPlacerItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?isNetworkComponent@EntityPlacerItemComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class CompoundTag> buildNetworkTag() const{
        std::unique_ptr<class CompoundTag> (EntityPlacerItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?buildNetworkTag@EntityPlacerItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline void initializeFromNetwork(class CompoundTag const& a0){
        void (EntityPlacerItemComponent::*rv)(class CompoundTag const&);
        *((void**)&rv) = dlsym("?initializeFromNetwork@EntityPlacerItemComponent@@UEAAXAEBVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0));
    }
    inline bool useOn(class ItemStack& a0, class Actor& a1, class BlockPos const& a2, unsigned char a3, class Vec3 const& a4) const{
        bool (EntityPlacerItemComponent::*rv)(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&) const;
        *((void**)&rv) = dlsym("?useOn@EntityPlacerItemComponent@@UEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Actor&>(a1), std::forward<class BlockPos const&>(a2), std::forward<unsigned char>(a3), std::forward<class Vec3 const&>(a4));
    }
    */
    MCAPI bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();

protected:

private:
    MCAPI void _positionAndRotateActor(class Actor&, class Vec3, unsigned char, class Vec3 const&, class BlockLegacy const*) const;
    MCAPI void _setActorCustomName(class Actor&, class ItemStack const&) const;
};