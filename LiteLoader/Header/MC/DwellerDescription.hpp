// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_DWELLERDESCRIPTION
#include "Extra/DwellerDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_DWELLERDESCRIPTION
class DwellerDescription {
#include "Extra/DwellerDescriptionAPI.hpp"
public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~DwellerDescription();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*3*/ virtual void serializeData(class Json::Value&) const;
    /*
    inline void deserializeData(struct DeserializeDataParams a0){
        void (DwellerDescription::*rv)(struct DeserializeDataParams);
        *((void**)&rv) = dlsym("?deserializeData@DwellerDescription@@UEAAXUDeserializeDataParams@@@Z");
        return (this->*rv)(std::forward<struct DeserializeDataParams>(a0));
    }
    inline char const* getJsonName() const{
        char const* (DwellerDescription::*rv)() const;
        *((void**)&rv) = dlsym("?getJsonName@DwellerDescription@@UEBAPEBDXZ");
        return (this->*rv)();
    }
    inline void serializeData(class Json::Value& a0) const{
        void (DwellerDescription::*rv)(class Json::Value&) const;
        *((void**)&rv) = dlsym("?serializeData@DwellerDescription@@UEBAXAEAVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0));
    }
    */

protected:

private:
};