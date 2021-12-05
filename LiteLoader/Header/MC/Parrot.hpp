// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Animal.hpp"
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_PARROT
#include "Extra/ParrotAPI.hpp"
#undef EXTRA_INCLUDE_PART_PARROT
class Parrot : public Animal {
#include "Extra/ParrotAPI.hpp"
public:
    /*0*/ virtual void reloadHardcodedClient(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*1*/ virtual ~Parrot();
    /*2*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual class Vec3 getInterpolatedRidingPosition(float) const;
    /*5*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*6*/ virtual void __unk_vfn_1();
    /*7*/ virtual float getRidingHeight();
    /*8*/ virtual void __unk_vfn_2();
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual float getCameraOffset() const;
    /*11*/ virtual float getShadowRadius() const;
    /*12*/ virtual void __unk_vfn_4();
    /*13*/ virtual void __unk_vfn_5();
    /*14*/ virtual void playerTouch(class Player&);
    /*15*/ virtual void __unk_vfn_6();
    /*16*/ virtual void __unk_vfn_7();
    /*17*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*18*/ virtual void __unk_vfn_8();
    /*19*/ virtual void __unk_vfn_9();
    /*20*/ virtual void __unk_vfn_10();
    /*21*/ virtual void __unk_vfn_11();
    /*22*/ virtual class Actor* findAttackTarget();
    /*23*/ virtual bool isValidTarget(class Actor*) const;
    /*24*/ virtual void adjustDamageAmount(int&) const;
    /*25*/ virtual void setSitting(bool);
    /*26*/ virtual void onTame();
    /*27*/ virtual void onFailedTame();
    /*28*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*29*/ virtual void playAmbientSound();
    /*30*/ virtual int /*enum enum LevelSoundEvent*/ getAmbientSound() const;
    /*31*/ virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /*32*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*33*/ virtual void __unk_vfn_12();
    /*34*/ virtual void awardKillScore(class Actor&, int);
    /*35*/ virtual class HashedString const& queryEntityRenderer() const;
    /*36*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*37*/ virtual int getPortalWaitTime() const;
    /*38*/ virtual bool canChangeDimensions() const;
    /*39*/ virtual void __unk_vfn_13();
    /*40*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*41*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*42*/ virtual bool canBePulledIntoVehicle() const;
    /*43*/ virtual void __unk_vfn_14();
    /*44*/ virtual bool canSynchronizeNewEntity() const;
    /*45*/ virtual void __unk_vfn_15();
    /*46*/ virtual void __unk_vfn_16();
    /*47*/ virtual bool isWorldBuilder() const;
    /*48*/ virtual void __unk_vfn_17();
    /*49*/ virtual bool isAdventure() const;
    /*50*/ virtual bool canDestroyBlock(class Block const&) const;
    /*51*/ virtual void setAuxValue(int);
    /*52*/ virtual void stopSpinAttack();
    /*53*/ virtual void __unk_vfn_18();
    /*54*/ virtual void __unk_vfn_19();
    /*55*/ virtual void __unk_vfn_20();
    /*56*/ virtual void _playStepSound(class BlockPos const&, class Block const&);
    /*57*/ virtual void __unk_vfn_21();
    /*58*/ virtual void __unk_vfn_22();
    /*59*/ virtual void spawnAnim();
    /*60*/ virtual void aiStep();
    /*61*/ virtual int getItemUseDuration() const;
    /*62*/ virtual float getItemUseStartupProgress() const;
    /*63*/ virtual float getItemUseIntervalProgress() const;
    /*64*/ virtual void __unk_vfn_23();
    /*65*/ virtual bool isAlliedTo(class Mob*);
    /*66*/ virtual void __unk_vfn_24();
    /*67*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*68*/ virtual void onBorn(class Actor&, class Actor&);
    /*69*/ virtual void __unk_vfn_25();
    /*70*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*71*/ virtual void __unk_vfn_26();
    /*72*/ virtual void _serverAiMobStep();
    /*73*/ virtual void __unk_vfn_27();
    /*
    inline bool useNewAi() const{
        bool (Parrot::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Parrot@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool _makeFlySound() const{
        bool (Parrot::*rv)() const;
        *((void**)&rv) = dlsym("?_makeFlySound@Parrot@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline void _playStepSound(class BlockPos const& a0, class Block const& a1){
        void (Parrot::*rv)(class BlockPos const&, class Block const&);
        *((void**)&rv) = dlsym("?_playStepSound@Parrot@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0), std::forward<class Block const&>(a1));
    }
    inline float _getWalkTargetValue(class BlockPos const& a0){
        float (Parrot::*rv)(class BlockPos const&);
        *((void**)&rv) = dlsym("?_getWalkTargetValue@Parrot@@UEAAMAEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0));
    }
    inline void aiStep(){
        void (Parrot::*rv)();
        *((void**)&rv) = dlsym("?aiStep@Parrot@@UEAAXXZ");
        return (this->*rv)();
    }
    inline bool canBePulledIntoVehicle() const{
        bool (Parrot::*rv)() const;
        *((void**)&rv) = dlsym("?canBePulledIntoVehicle@Parrot@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline int \/*enum enum LevelSoundEvent*\/ getAmbientSound() const{
        int \/*enum enum LevelSoundEvent*\/ (Parrot::*rv)() const;
        *((void**)&rv) = dlsym("?getAmbientSound@Parrot@@UEBA?AW4LevelSoundEvent@@XZ");
        return (this->*rv)();
    }
    inline class Vec3 getInterpolatedRidingPosition(float a0) const{
        class Vec3 (Parrot::*rv)(float) const;
        *((void**)&rv) = dlsym("?getInterpolatedRidingPosition@Parrot@@UEBA?AVVec3@@M@Z");
        return (this->*rv)(std::forward<float>(a0));
    }
    inline float getShadowRadius() const{
        float (Parrot::*rv)() const;
        *((void**)&rv) = dlsym("?getShadowRadius@Parrot@@UEBAMXZ");
        return (this->*rv)();
    }
    inline bool isInvulnerableTo(class ActorDamageSource const& a0) const{
        bool (Parrot::*rv)(class ActorDamageSource const&) const;
        *((void**)&rv) = dlsym("?isInvulnerableTo@Parrot@@UEBA_NAEBVActorDamageSource@@@Z");
        return (this->*rv)(std::forward<class ActorDamageSource const&>(a0));
    }
    inline void playAmbientSound(){
        void (Parrot::*rv)();
        *((void**)&rv) = dlsym("?playAmbientSound@Parrot@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void reloadHardcodedClient(int \/*enum enum Actor::InitializationMethod*\/ a0, class VariantParameterList const& a1){
        void (Parrot::*rv)(int \/*enum enum Actor::InitializationMethod*\/, class VariantParameterList const&);
        *((void**)&rv) = dlsym("?reloadHardcodedClient@Parrot@@MEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Actor::InitializationMethod*\/>(a0), std::forward<class VariantParameterList const&>(a1));
    }
    inline void setSitting(bool a0){
        void (Parrot::*rv)(bool);
        *((void**)&rv) = dlsym("?setSitting@Parrot@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline void vehicleLanded(class Vec3 const& a0, class Vec3 const& a1){
        void (Parrot::*rv)(class Vec3 const&, class Vec3 const&);
        *((void**)&rv) = dlsym("?vehicleLanded@Parrot@@UEAAXAEBVVec3@@0@Z");
        return (this->*rv)(std::forward<class Vec3 const&>(a0), std::forward<class Vec3 const&>(a1));
    }
    */
    MCAPI float getFlap() const;
    MCAPI float getFlapSpeed() const;

protected:

private:
};