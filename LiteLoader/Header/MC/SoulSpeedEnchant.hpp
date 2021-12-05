// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Enchant.hpp"
#define EXTRA_INCLUDE_PART_SOULSPEEDENCHANT
#include "Extra/SoulSpeedEnchantAPI.hpp"
#undef EXTRA_INCLUDE_PART_SOULSPEEDENCHANT
class SoulSpeedEnchant : public Enchant {
#include "Extra/SoulSpeedEnchantAPI.hpp"
public:
    /*0*/ virtual ~SoulSpeedEnchant();
    /*1*/ virtual int getMinCost(int) const;
    /*2*/ virtual int getMaxCost(int) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual int getMaxLevel() const;
    /*5*/ virtual int getDamageProtection(int, class ActorDamageSource const&) const;
    /*6*/ virtual float getDamageBonus(int, class Actor const&) const;
    /*7*/ virtual void doPostAttack(class Actor&, class Actor&, int) const;
    /*8*/ virtual void doPostHurt(class ItemInstance&, class Actor&, class Actor&, int) const;
    /*9*/ virtual void __unk_vfn_1();
    /*10*/ virtual void __unk_vfn_2();
    /*11*/ virtual void __unk_vfn_3();
    /*12*/ virtual void __unk_vfn_4();
    /*13*/ virtual bool _isValidEnchantmentTypeForCategory(int /*enum enum Enchant::Type*/) const;
    /*
    inline bool isDiscoverable() const{
        bool (SoulSpeedEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?isDiscoverable@SoulSpeedEnchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isTreasureOnly() const{
        bool (SoulSpeedEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?isTreasureOnly@SoulSpeedEnchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline int getMaxLevel() const{
        int (SoulSpeedEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxLevel@SoulSpeedEnchant@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getMaxCost(int a0) const{
        int (SoulSpeedEnchant::*rv)(int) const;
        *((void**)&rv) = dlsym("?getMaxCost@SoulSpeedEnchant@@UEBAHH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline int getMinCost(int a0) const{
        int (SoulSpeedEnchant::*rv)(int) const;
        *((void**)&rv) = dlsym("?getMinCost@SoulSpeedEnchant@@UEBAHH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    */
    MCAPI static class mce::UUID const SOUL_SPEED_BOOST_UUID;
    MCAPI static int getLevel(class Actor const&);
    MCAPI static float getSpeedBoost(int);
    MCAPI static bool isActive(class Actor const&);
    MCAPI static bool shouldSpawnParticles(class Actor const&);

protected:

private:
};