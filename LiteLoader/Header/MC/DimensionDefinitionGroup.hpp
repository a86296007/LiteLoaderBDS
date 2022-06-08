// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DimensionDefinitionGroup {

#define AFTER_EXTRA
    struct DimensionDefinition{};
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDEFINITIONGROUP
public:
    class DimensionDefinitionGroup& operator=(class DimensionDefinitionGroup const &) = delete;
    DimensionDefinitionGroup(class DimensionDefinitionGroup const &) = delete;
    DimensionDefinitionGroup() = delete;
#endif

public:
    MCAPI DimensionDefinitionGroup(class ResourcePackManager *const, bool);
    MCAPI class std::optional<struct DimensionDefinitionGroup::DimensionDefinition> getDimensionDefinition(std::string const &) const;
    MCAPI bool isEmpty() const;
    MCAPI bool tryAddDimensionDefinitionByString(std::string const &);
    MCAPI ~DimensionDefinitionGroup();

protected:

private:

};