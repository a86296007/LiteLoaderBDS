// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TAGCOMMAND
#include "Extra/TagCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_TAGCOMMAND
class TagCommand {
#include "Extra/TagCommandAPI.hpp"
public:
    /*0*/ virtual ~TagCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);

private:
    MCAPI void _addTag(class CommandOutput&, std::vector<class std::reference_wrapper<class Actor>> const&) const;
    MCAPI std::vector<class std::reference_wrapper<class Actor>> _getSelectorResults(class CommandOrigin const&, class CommandOutput&) const;
    MCAPI void _listTags(class CommandOutput&, std::vector<class std::reference_wrapper<class Actor>> const&) const;
    MCAPI void _removeTag(class CommandOutput&, std::vector<class std::reference_wrapper<class Actor>> const&) const;
};