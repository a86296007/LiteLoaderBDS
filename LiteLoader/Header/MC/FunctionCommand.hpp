// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FUNCTIONCOMMAND
#include "Extra/FunctionCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_FUNCTIONCOMMAND
class FunctionCommand {
#include "Extra/FunctionCommandAPI.hpp"
public:
    /*0*/ virtual ~FunctionCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);
};