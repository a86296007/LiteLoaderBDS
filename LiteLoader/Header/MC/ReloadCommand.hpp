// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RELOADCOMMAND
#include "Extra/ReloadCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_RELOADCOMMAND
class ReloadCommand {
#include "Extra/ReloadCommandAPI.hpp"
public:
    /*0*/ virtual ~ReloadCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);
};