// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTBEFORECHATEVENT
#include "Extra/ScriptBeforeChatEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBEFORECHATEVENT
struct ScriptBeforeChatEvent {
#include "Extra/ScriptBeforeChatEventAPI.hpp"
public:
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptBeforeChatEvent> bind(struct Scripting::Version);

protected:

private:
};