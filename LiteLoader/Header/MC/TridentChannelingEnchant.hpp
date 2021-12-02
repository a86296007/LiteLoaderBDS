// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TRIDENTCHANNELINGENCHANT
#include "Extra/TridentChannelingEnchantAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRIDENTCHANNELINGENCHANT
class TridentChannelingEnchant {
#include "Extra/TridentChannelingEnchantAPI.hpp"
public:
    /*0*/ virtual ~TridentChannelingEnchant();
    /*1*/ virtual bool isCompatibleWith(int /*enum Enchant::Type*/) const;
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual int getMaxLevel() const;
    /*5*/ virtual int getMaxLevel() const;
};