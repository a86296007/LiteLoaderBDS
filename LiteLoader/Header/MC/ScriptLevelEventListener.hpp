// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptLevelEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTLEVELEVENTLISTENER
public:
    class ScriptLevelEventListener& operator=(class ScriptLevelEventListener const &) = delete;
    ScriptLevelEventListener(class ScriptLevelEventListener const &) = delete;
    ScriptLevelEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ScriptLevelEventListener();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual enum EventResult onLevelAddedPlayer(class Level &, class Player &);
    /*4*/ virtual enum EventResult onLevelRemovedPlayer(class Level &, class Player &);
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual enum EventResult onLevelTick();
    /*7*/ virtual enum EventResult onLevelWeatherChange(std::string const &, bool, bool);
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual enum EventResult onEvent(struct LevelStartLeaveGameEvent const &);
    /*10*/ virtual enum EventResult onEvent(struct LevelNotificationEvent const &);
    MCAPI ScriptLevelEventListener(class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>);

protected:

private:

};