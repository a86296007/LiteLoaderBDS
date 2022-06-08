// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CopperHornItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COPPERHORNITEM
public:
    class CopperHornItem& operator=(class CopperHornItem const &) = delete;
    CopperHornItem(class CopperHornItem const &) = delete;
    CopperHornItem() = delete;
#endif

public:
    /*0*/ virtual ~CopperHornItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*56*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*62*/ virtual void __unk_vfn_62();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*82*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /*99*/ virtual class HashedString const & getCooldownType() const;
    /*100*/ virtual int getCooldownTime() const;
    /*119*/ virtual bool canBeCharged() const;
    MCAPI CopperHornItem(std::string const &, int);

protected:

private:

};