// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ItemStackBase.hpp"
#define EXTRA_INCLUDE_PART_ITEMSTACK
#include "Extra/ItemStackAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEMSTACK
class ItemStack : public ItemStackBase {
#include "Extra/ItemStackAPI.hpp"
public:
    /*0*/ virtual ~ItemStack();
    /*1*/ virtual void reinit(class Item const&, int, int);
    /*2*/ virtual void reinit(class BlockLegacy const&, int);
    /*3*/ virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /*4*/ virtual void setNull();
    /*5*/ virtual std::string toString() const;
    /*6*/ virtual std::string toDebugString() const;
    /*
    inline void reinit(class BlockLegacy const& a0, int a1){
        void (ItemStack::*rv)(class BlockLegacy const&, int);
        *((void**)&rv) = dlsym("?reinit@ItemStack@@UEAAXAEBVBlockLegacy@@H@Z");
        return (this->*rv)(std::forward<class BlockLegacy const&>(a0), std::forward<int>(a1));
    }
    inline void reinit(class Item const& a0, int a1, int a2){
        void (ItemStack::*rv)(class Item const&, int, int);
        *((void**)&rv) = dlsym("?reinit@ItemStack@@UEAAXAEBVItem@@HH@Z");
        return (this->*rv)(std::forward<class Item const&>(a0), std::forward<int>(a1), std::forward<int>(a2));
    }
    inline void reinit(class gsl::basic_string_span<char const, -1> a0, int a1, int a2){
        void (ItemStack::*rv)(class gsl::basic_string_span<char const, -1>, int, int);
        *((void**)&rv) = dlsym("?reinit@ItemStack@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@HH@Z");
        return (this->*rv)(std::forward<class gsl::basic_string_span<char const, -1>>(a0), std::forward<int>(a1), std::forward<int>(a2));
    }
    inline void setNull(){
        void (ItemStack::*rv)();
        *((void**)&rv) = dlsym("?setNull@ItemStack@@UEAAXXZ");
        return (this->*rv)();
    }
    inline std::string toDebugString() const{
        std::string (ItemStack::*rv)() const;
        *((void**)&rv) = dlsym("?toDebugString@ItemStack@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline std::string toString() const{
        std::string (ItemStack::*rv)() const;
        *((void**)&rv) = dlsym("?toString@ItemStack@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI void __autoclassinit2(unsigned __int64);
    MCAPI void _assignNetIdVariant(class ItemStack const&) const;
    MCAPI void clientInitLegacyRequestId(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const&);
    MCAPI class ItemStack clone() const;
    MCAPI class ItemComponent const* getComponent(class HashedString const&) const;
    MCAPI float getDestroySpeed(class Block const&) const;
    MCAPI struct ItemStackNetIdVariant const& getItemStackNetIdVariant() const;
    MCAPI int getMaxUseDuration() const;
    MCAPI class ItemStack getStrippedNetworkItem() const;
    MCAPI bool hasItemStackNetId() const;
    MCAPI bool inventoryTick(class Level&, class Actor&, int, bool);
    MCAPI bool matchesAndNetIdVariantMatches(class ItemStack const&) const;
    MCAPI bool matchesNetIdVariant(class ItemStack const&) const;
    MCAPI void mineBlock(class Block const&, int, int, int, class Mob*);
    MCAPI class ItemStack& operator=(class ItemStack const&);
    MCAPI void playSoundIncrementally(class Mob&) const;
    MCAPI void releaseUsing(class Player*, int);
    MCAPI bool sameItemAndAuxAndBlockData(class ItemStack const&) const;
    MCAPI void serverInitNetId();
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const* tryGetItemStackNetId() const;
    MCAPI class ItemStack& use(class Player&);
    MCAPI void useAsFuel();
    MCAPI bool useOn(class Actor&, int, int, int, unsigned char, float, float, float);
    MCAPI enum ItemUseMethod useTimeDepleted(class Level*, class Player*);
    MCAPI static class ItemStack const EMPTY_ITEM;
    MCAPI static class ItemStack fromDescriptor(class NetworkItemStackDescriptor const&, class BlockPalette&, bool);
    MCAPI static class ItemStack fromTag(class CompoundTag const&);
    MCAPI static class ItemStack fromTag(class CompoundTag const&, class Level&);

protected:

private:
};