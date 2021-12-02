// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ATTRIBUTEBUFF
#include "Extra/AttributeBuffAPI.hpp"
#undef EXTRA_INCLUDE_PART_ATTRIBUTEBUFF
class AttributeBuff {
#include "Extra/AttributeBuffAPI.hpp"
public:
    /*0*/ virtual ~AttributeBuff();
    /*1*/ virtual bool isInstantaneous() const = 0;
    /*2*/ virtual bool isSerializable() const  = 0;
    /*3*/ virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);

public:
    MCAPI float getAmount() const;
    MCAPI unsigned __int64 getId() const;
    MCAPI int getOperand() const;
    MCAPI enum AttributeBuffType getType() const;
    MCAPI void setAmplificationAmount(int, float);
    MCAPI void setId(unsigned __int64);
    MCAPI void setOperand(int);
    MCAPI void setSource(class Actor*);
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>);

    MCAPI static enum ActorDamageCause buffTypeToDamageCause(enum AttributeBuffType);
};