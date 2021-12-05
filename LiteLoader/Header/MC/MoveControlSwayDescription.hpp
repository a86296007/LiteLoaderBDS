// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_MOVECONTROLSWAYDESCRIPTION
#include "Extra/MoveControlSwayDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVECONTROLSWAYDESCRIPTION
class MoveControlSwayDescription {
#include "Extra/MoveControlSwayDescriptionAPI.hpp"
public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~MoveControlSwayDescription();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*3*/ virtual void serializeData(class Json::Value&) const;
    /*
    inline void deserializeData(struct DeserializeDataParams a0){
        void (MoveControlSwayDescription::*rv)(struct DeserializeDataParams);
        *((void**)&rv) = dlsym("?deserializeData@MoveControlSwayDescription@@UEAAXUDeserializeDataParams@@@Z");
        return (this->*rv)(std::forward<struct DeserializeDataParams>(a0));
    }
    inline char const* getJsonName() const{
        char const* (MoveControlSwayDescription::*rv)() const;
        *((void**)&rv) = dlsym("?getJsonName@MoveControlSwayDescription@@UEBAPEBDXZ");
        return (this->*rv)();
    }
    inline void serializeData(class Json::Value& a0) const{
        void (MoveControlSwayDescription::*rv)(class Json::Value&) const;
        *((void**)&rv) = dlsym("?serializeData@MoveControlSwayDescription@@UEBAXAEAVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0));
    }
    */

protected:

private:
};