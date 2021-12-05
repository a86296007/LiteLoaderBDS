// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Enchant.hpp"
#define EXTRA_INCLUDE_PART_DIGGINGENCHANT
#include "Extra/DiggingEnchantAPI.hpp"
#undef EXTRA_INCLUDE_PART_DIGGINGENCHANT
class DiggingEnchant : public Enchant {
#include "Extra/DiggingEnchantAPI.hpp"
public:
    /*0*/ virtual ~DiggingEnchant();
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
    inline bool _isValidEnchantmentTypeForCategory(int \/*enum enum Enchant::Type*\/ a0) const{
        bool (DiggingEnchant::*rv)(int \/*enum enum Enchant::Type*\/) const;
        *((void**)&rv) = dlsym("?_isValidEnchantmentTypeForCategory@DiggingEnchant@@EEBA_NW4Type@Enchant@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Enchant::Type*\/>(a0));
    }
    inline int getMaxCost(int a0) const{
        int (DiggingEnchant::*rv)(int) const;
        *((void**)&rv) = dlsym("?getMaxCost@DiggingEnchant@@UEBAHH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline int getMaxLevel() const{
        int (DiggingEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxLevel@DiggingEnchant@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getMinCost(int a0) const{
        int (DiggingEnchant::*rv)(int) const;
        *((void**)&rv) = dlsym("?getMinCost@DiggingEnchant@@UEBAHH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    */

protected:

private:
    MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;
};