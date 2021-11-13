// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
class FilterTestBiomeHasTag : public FilterTest {
public:
    virtual ~FilterTestBiomeHasTag();
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();

private:
    MCAPI bool _evalBiome(class Biome const&, struct FilterContext const&) const;
};