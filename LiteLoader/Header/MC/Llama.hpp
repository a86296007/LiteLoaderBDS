// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Animal.hpp"
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_LLAMA
#include "Extra/LlamaAPI.hpp"
#undef EXTRA_INCLUDE_PART_LLAMA
class Llama : public Animal {
#include "Extra/LlamaAPI.hpp"
public:
    /*0*/ virtual ~Llama();
    /*1*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual float getRidingHeight();
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual void __unk_vfn_3();
    /*8*/ virtual float getCameraOffset() const;
    /*9*/ virtual void __unk_vfn_4();
    /*10*/ virtual void __unk_vfn_5();
    /*11*/ virtual void playerTouch(class Player&);
    /*12*/ virtual void __unk_vfn_6();
    /*13*/ virtual void __unk_vfn_7();
    /*14*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*15*/ virtual void __unk_vfn_8();
    /*16*/ virtual void __unk_vfn_9();
    /*17*/ virtual void __unk_vfn_10();
    /*18*/ virtual void __unk_vfn_11();
    /*19*/ virtual class Actor* findAttackTarget();
    /*20*/ virtual bool isValidTarget(class Actor*) const;
    /*21*/ virtual void adjustDamageAmount(int&) const;
    /*22*/ virtual void onTame();
    /*23*/ virtual void onFailedTame();
    /*24*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*25*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*26*/ virtual void __unk_vfn_12();
    /*27*/ virtual void awardKillScore(class Actor&, int);
    /*28*/ virtual class HashedString const& queryEntityRenderer() const;
    /*29*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*30*/ virtual int getPortalWaitTime() const;
    /*31*/ virtual bool canChangeDimensions() const;
    /*32*/ virtual void __unk_vfn_13();
    /*33*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*34*/ virtual void causeFallDamage(float, float, class ActorDamageSource);
    /*35*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*36*/ virtual bool canBePulledIntoVehicle() const;
    /*37*/ virtual void __unk_vfn_14();
    /*38*/ virtual bool canSynchronizeNewEntity() const;
    /*39*/ virtual void __unk_vfn_15();
    /*40*/ virtual void __unk_vfn_16();
    /*41*/ virtual bool isWorldBuilder() const;
    /*42*/ virtual void __unk_vfn_17();
    /*43*/ virtual bool isAdventure() const;
    /*44*/ virtual bool canDestroyBlock(class Block const&) const;
    /*45*/ virtual void setAuxValue(int);
    /*46*/ virtual void stopSpinAttack();
    /*47*/ virtual void __unk_vfn_18();
    /*48*/ virtual void __unk_vfn_19();
    /*49*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*50*/ virtual void __unk_vfn_20();
    /*51*/ virtual void _playStepSound(class BlockPos const&, class Block const&);
    /*52*/ virtual void __unk_vfn_21();
    /*53*/ virtual void __unk_vfn_22();
    /*54*/ virtual void spawnAnim();
    /*55*/ virtual int getItemUseDuration() const;
    /*56*/ virtual float getItemUseStartupProgress() const;
    /*57*/ virtual float getItemUseIntervalProgress() const;
    /*58*/ virtual void __unk_vfn_23();
    /*59*/ virtual bool isAlliedTo(class Mob*);
    /*60*/ virtual void __unk_vfn_24();
    /*61*/ virtual int getArmorValue();
    /*62*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*63*/ virtual void onBorn(class Actor&, class Actor&);
    /*64*/ virtual void __unk_vfn_25();
    /*65*/ virtual void __unk_vfn_26();
    /*66*/ virtual void _serverAiMobStep();
    /*67*/ virtual void __unk_vfn_27();
    /*
    inline int getArmorValue(){
        int (Llama::*rv)();
        *((void**)&rv) = dlsym("?getArmorValue@Llama@@UEAAHXZ");
        return (this->*rv)();
    }
    inline bool useNewAi() const{
        bool (Llama::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Llama@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline void _playStepSound(class BlockPos const& a0, class Block const& a1){
        void (Llama::*rv)(class BlockPos const&, class Block const&);
        *((void**)&rv) = dlsym("?_playStepSound@Llama@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockPos const&>(a0), std::forward<class Block const&>(a1));
    }
    inline void causeFallDamage(float a0, float a1, class ActorDamageSource a2){
        void (Llama::*rv)(float, float, class ActorDamageSource);
        *((void**)&rv) = dlsym("?causeFallDamage@Llama@@MEAAXMMVActorDamageSource@@@Z");
        return (this->*rv)(std::forward<float>(a0), std::forward<float>(a1), std::forward<class ActorDamageSource>(a2));
    }
    inline void onFailedTame(){
        void (Llama::*rv)();
        *((void**)&rv) = dlsym("?onFailedTame@Llama@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void updateEntitySpecificMolangVariables(class RenderParams& a0){
        void (Llama::*rv)(class RenderParams&);
        *((void**)&rv) = dlsym("?updateEntitySpecificMolangVariables@Llama@@UEAAXAEAVRenderParams@@@Z");
        return (this->*rv)(std::forward<class RenderParams&>(a0));
    }
    */

protected:

private:
};