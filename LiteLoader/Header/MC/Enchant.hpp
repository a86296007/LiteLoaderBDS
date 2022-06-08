// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Enchant {

#define AFTER_EXTRA
// Add Member There
public:
enum class Frequency
{
    VeryRare = 1,
    Rare = 3,
    Uncommon = 10,
    Common = 30
};

enum class Slot
{
    ALL = -1,
    NONE = 0,
    ARMOR_HEAD = 1,
    ARMOR_TORSO = 2,
    ARMOR_FEET = 4,
    ARMOR_LEGS = 8,
    G_ARMOR = 15,
    SWORD = 16,
    BOW = 32,
    HOE = 64,
    SHEARS = 128,
    FLINTSTEEL = 256,
    AXE = 512,
    PICKAXE = 1024,
    SHOVEL = 2048,
    G_DIGGING = 3648,
    FISHING_ROD = 4096,
    CARROT_STICK = 8192,
    ELYTRA = 16384,
    SPEAR = 32768,
    CROSSBOW = 65536,
    SHIELD = 131072,
    G_TOOL = 131520,
    COSMETIC_HEAD = 262144,
    COMPASS = 524288,
    MUSHROOM_STICK = 1048576
};

enum class Type : uint8_t
{
    protection = 0,
    fire_protection = 1,
    feather_falling = 2,
    blast_protection = 3,
    projectile_protection = 4,
    thorns = 5,
    respiration = 6,
    depth_strider = 7,
    aqua_affinity = 8,
    sharpness = 9,
    smite = 10,
    bane_of_arthropods = 11,
    knockback = 12,
    fire_aspect = 13,
    looting = 14,
    efficiency = 15,
    silk_touch = 16,
    unbreaking = 17,
    fortune = 18,
    power = 19,
    punch = 20,
    flame = 21,
    infinity = 22,
    luck_of_the_sea = 23,
    lure = 24,
    frost_walker = 25,
    mending = 26,
    binding = 27,
    vanishing = 28,
    impaling = 29,
    riptide = 30,
    loyalty = 31,
    channeling = 32,
    multishot = 33,
    piercing = 34,
    quick_charge = 35,
    soul_speed = 36,
    num_enchantments = 37,
    invalid_enchantment = 38
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANT
public:
    class Enchant& operator=(class Enchant const &) = delete;
    Enchant(class Enchant const &) = delete;
    Enchant() = delete;
#endif

public:
    /*0*/ virtual ~Enchant();
    /*1*/ virtual bool isCompatibleWith(enum Enchant::Type) const;
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual int getMinLevel() const;
    /*5*/ virtual int getMaxLevel() const;
    /*6*/ virtual int getDamageProtection(int, class ActorDamageSource const &) const;
    /*7*/ virtual float getDamageBonus(int, class Actor const &) const;
    /*8*/ virtual void doPostAttack(class Actor &, class Actor &, int) const;
    /*9*/ virtual void doPostHurt(class ItemInstance &, class Actor &, class Actor &, int) const;
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
    /*
    inline bool isProtectionEnchant() const{
        bool (Enchant::*rv)() const;
        *((void**)&rv) = dlsym("?isProtectionEnchant@Enchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isTreasureOnly() const{
        bool (Enchant::*rv)() const;
        *((void**)&rv) = dlsym("?isTreasureOnly@Enchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isMeleeDamageEnchant() const{
        bool (Enchant::*rv)() const;
        *((void**)&rv) = dlsym("?isMeleeDamageEnchant@Enchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isDiscoverable() const{
        bool (Enchant::*rv)() const;
        *((void**)&rv) = dlsym("?isDiscoverable@Enchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Enchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);
    MCAPI Enchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int, bool);
    MCAPI bool canEnchant(int, bool) const;
    MCAPI std::string getDescription() const;
    MCAPI std::string getDescriptionId() const;
    MCAPI enum Enchant::Type getEnchantType() const;
    MCAPI enum Enchant::Frequency getFrequency() const;
    MCAPI class HashedString const & getStringId() const;
    MCAPI bool isAvailable() const;
    MCAPI bool isDisabled() const;
    MCAPI bool isLootable() const;
    MCAPI static enum Enchant::Slot enchantSlotFromString(class gsl::basic_string_span<char const, -1>);
    MCAPI static class Enchant const * getEnchant(enum Enchant::Type const &);
    MCAPI static void initEnchants();
    MCAPI static class std::unordered_map<class HashedString, enum Enchant::Type, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, enum Enchant::Type>>> mEnchantNameToType;
    MCAPI static class std::unordered_map<enum Enchant::Slot, std::string, struct EnchantSlotEnumHasher, struct std::equal_to<enum Enchant::Slot>, class std::allocator<struct std::pair<enum Enchant::Slot const, std::string>>> mEnchantSlotTypeEnumToStringMap;
    MCAPI static class std::unordered_map<std::string, enum Enchant::Slot, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum Enchant::Slot>>> mEnchantSlotTypeNameToEnumMap;
    MCAPI static std::vector<std::unique_ptr<class Enchant>> mEnchants;
    MCAPI static void shutdownEnchants();
    MCAPI static std::string stringFromEnchantSlot(enum Enchant::Slot const &);

protected:

private:

};