// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Tag.hpp"
#define EXTRA_INCLUDE_PART_FLOATTAG
#include "Extra/FloatTagAPI.hpp"
#undef EXTRA_INCLUDE_PART_FLOATTAG
class FloatTag : public Tag {
#include "Extra/FloatTagAPI.hpp"
public:
    /*0*/ virtual ~FloatTag();
    /*1*/ virtual void deleteChildren();
    /*2*/ virtual void write(class IDataOutput&) const;
    /*3*/ virtual void load(class IDataInput&);
    /*4*/ virtual std::string toString() const;
    /*5*/ virtual int /*enum Tag::Type*/ getId() const;
    /*6*/ virtual bool equals(class Tag const&) const;
    /*9*/ virtual std::unique_ptr<class Tag> copy() const;
    /*10*/ virtual unsigned __int64 hash() const;
};