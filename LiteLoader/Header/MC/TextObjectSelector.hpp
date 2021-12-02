// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_TEXTOBJECTSELECTOR
#include "Extra/TextObjectSelectorAPI.hpp"
#undef EXTRA_INCLUDE_PART_TEXTOBJECTSELECTOR
class TextObjectSelector {
#include "Extra/TextObjectSelectorAPI.hpp"
public:
    /*0*/ virtual ~TextObjectSelector();
    /*1*/ virtual std::string asString() const;
    /*2*/ virtual class Json::Value asJsonValue() const;
    /*3*/ virtual class Json::Value resolve(struct ResolveData const&) const;

public:
    MCAPI static std::string const RAW_TEXT_SELECTOR_KEY;
    MCAPI static std::string const RAW_TEXT_SELECTOR_STAR;
};