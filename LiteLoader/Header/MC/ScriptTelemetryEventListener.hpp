// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTTELEMETRYEVENTLISTENER
#include "Extra/ScriptTelemetryEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTTELEMETRYEVENTLISTENER
class ScriptTelemetryEventListener {
#include "Extra/ScriptTelemetryEventListenerAPI.hpp"
public:
    /*0*/ virtual ~ScriptTelemetryEventListener();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual void unk_vfn_6();
    /*7*/ virtual int /*enum EventResult*/ onScriptLoaded(std::string const&, unsigned __int64);
    /*8*/ virtual int /*enum EventResult*/ onScriptRan(std::string const&, std::string const&, bool);
};