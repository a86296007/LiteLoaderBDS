// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Types.hpp"
#define EXTRA_INCLUDE_PART_FAKETHERMALMONITORINTERFACE
#include "Extra/FakeThermalMonitorInterfaceAPI.hpp"
#undef EXTRA_INCLUDE_PART_FAKETHERMALMONITORINTERFACE
class FakeThermalMonitorInterface : public TypedBlockActorScriptBlockComponentFactory<class ScriptBlockInventoryComponent> {
#include "Extra/FakeThermalMonitorInterfaceAPI.hpp"
public:
    /*0*/ virtual ~FakeThermalMonitorInterface();
    /*1*/ virtual int /*enum ThermalState*/ getThermalState() const;
    /*2*/ virtual float getThermalValueCelsius() const;
    /*3*/ virtual bool isLowBatteryModeEnabled() const;
    /*4*/ virtual void unk_vfn_4();
    /*6*/ virtual void unk_vfn_6();
    /*8*/ virtual void unk_vfn_8();
    /*10*/ virtual void unk_vfn_10();
    /*12*/ virtual void unk_vfn_12();
    /*14*/ virtual void unk_vfn_14();
    /*16*/ virtual void unk_vfn_16();
};