// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FireworkChargeItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
enum Shape;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKCHARGEITEM
public:
    class FireworkChargeItem& operator=(class FireworkChargeItem const &) = delete;
    FireworkChargeItem(class FireworkChargeItem const &) = delete;
    FireworkChargeItem() = delete;
#endif

public:
    /*0*/ virtual ~FireworkChargeItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*14*/ virtual bool isDyeable() const;
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*56*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*62*/ virtual void __unk_vfn_62();
    /*63*/ virtual bool isValidAuxValue(int) const;
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*69*/ virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*108*/ virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    MCAPI FireworkChargeItem(std::string const &, int);
    MCAPI static std::string const TAG_EXPLOSION;
    MCAPI static std::string const TAG_E_COLORS;
    MCAPI static std::string const TAG_E_FADECOLORS;
    MCAPI static std::string const TAG_E_FLICKER;
    MCAPI static std::string const TAG_E_TRAIL;
    MCAPI static std::string const TAG_E_TYPE;
    MCAPI static void getFormattedHoverText(class CompoundTag const &, std::string &, std::string const &);
    MCAPI static class ItemInstance const & initFireworkChargeItem(class ItemInstance &, enum FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    MCAPI static class ItemStack const & initFireworkChargeItem(class ItemStack &, enum FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    MCAPI static void setColor(class ItemStackBase &);

protected:

private:
    MCAPI static void _initFireworkChargeItem(class ItemStackBase &, enum FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    MCAPI static void appendColors(std::string &, std::vector<unsigned char>);

};