// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DescriptionIdSetter {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESCRIPTIONIDSETTER
public:
    class DescriptionIdSetter& operator=(class DescriptionIdSetter const &) = delete;
    DescriptionIdSetter(class DescriptionIdSetter const &) = delete;
    DescriptionIdSetter() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DESCRIPTIONIDSETTER
public:
#endif
    MCAPI std::string getDescriptionId() const;
    MCAPI void setDescriptionId(std::string const &);


};