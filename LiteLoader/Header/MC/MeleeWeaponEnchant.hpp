// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Enchant.hpp"
#define EXTRA_INCLUDE_PART_MELEEWEAPONENCHANT
#include "Extra/MeleeWeaponEnchantAPI.hpp"
#undef EXTRA_INCLUDE_PART_MELEEWEAPONENCHANT
class MeleeWeaponEnchant : public Enchant {
#include "Extra/MeleeWeaponEnchantAPI.hpp"
public:
    /*0*/ virtual ~MeleeWeaponEnchant();
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
    inline bool isMeleeDamageEnchant() const{
        bool (MeleeWeaponEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?isMeleeDamageEnchant@MeleeWeaponEnchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool _isValidEnchantmentTypeForCategory(int \/*enum enum Enchant::Type*\/ a0) const{
        bool (MeleeWeaponEnchant::*rv)(int \/*enum enum Enchant::Type*\/) const;
        *((void**)&rv) = dlsym("?_isValidEnchantmentTypeForCategory@MeleeWeaponEnchant@@EEBA_NW4Type@Enchant@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Enchant::Type*\/>(a0));
    }
    inline void doPostAttack(class Actor& a0, class Actor& a1, int a2) const{
        void (MeleeWeaponEnchant::*rv)(class Actor&, class Actor&, int) const;
        *((void**)&rv) = dlsym("?doPostAttack@MeleeWeaponEnchant@@UEBAXAEAVActor@@0H@Z");
        return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class Actor&>(a1), std::forward<int>(a2));
    }
    inline float getDamageBonus(int a0, class Actor const& a1) const{
        float (MeleeWeaponEnchant::*rv)(int, class Actor const&) const;
        *((void**)&rv) = dlsym("?getDamageBonus@MeleeWeaponEnchant@@UEBAMHAEBVActor@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class Actor const&>(a1));
    }
    inline int getMaxCost(int a0) const{
        int (MeleeWeaponEnchant::*rv)(int) const;
        *((void**)&rv) = dlsym("?getMaxCost@MeleeWeaponEnchant@@UEBAHH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline int getMaxLevel() const{
        int (MeleeWeaponEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxLevel@MeleeWeaponEnchant@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getMinCost(int a0) const{
        int (MeleeWeaponEnchant::*rv)(int) const;
        *((void**)&rv) = dlsym("?getMinCost@MeleeWeaponEnchant@@UEBAHH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    */

protected:

private:
    MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;
};