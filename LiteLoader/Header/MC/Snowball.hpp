// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Throwable.hpp"
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_SNOWBALL
#include "Extra/SnowballAPI.hpp"
#undef EXTRA_INCLUDE_PART_SNOWBALL
class Snowball : public Throwable {
#include "Extra/SnowballAPI.hpp"
public:
    /*0*/ virtual void reloadHardcoded(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*1*/ virtual ~Snowball();
    /*2*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual float getInterpolatedHeadRot(float) const;
    /*5*/ virtual float getInterpolatedBodyYaw(float) const;
    /*6*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*7*/ virtual void __unk_vfn_1();
    /*8*/ virtual float getRidingHeight();
    /*9*/ virtual void __unk_vfn_2();
    /*10*/ virtual void __unk_vfn_3();
    /*11*/ virtual float getCameraOffset() const;
    /*12*/ virtual float getShadowHeightOffs();
    /*13*/ virtual void __unk_vfn_4();
    /*14*/ virtual void __unk_vfn_5();
    /*15*/ virtual void playerTouch(class Player&);
    /*16*/ virtual bool isPickable();
    /*17*/ virtual void __unk_vfn_6();
    /*18*/ virtual bool isSleeping() const;
    /*19*/ virtual void setSleeping(bool);
    /*20*/ virtual void __unk_vfn_7();
    /*21*/ virtual bool isBlocking() const;
    /*22*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*23*/ virtual void __unk_vfn_8();
    /*24*/ virtual bool isSurfaceMob() const;
    /*25*/ virtual void __unk_vfn_9();
    /*26*/ virtual void __unk_vfn_10();
    /*27*/ virtual void __unk_vfn_11();
    /*28*/ virtual class Actor* findAttackTarget();
    /*29*/ virtual bool isValidTarget(class Actor*) const;
    /*30*/ virtual void adjustDamageAmount(int&) const;
    /*31*/ virtual void onTame();
    /*32*/ virtual void onFailedTame();
    /*33*/ virtual bool isJumping() const;
    /*34*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*35*/ virtual void animateHurt();
    /*36*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*37*/ virtual void __unk_vfn_12();
    /*38*/ virtual void awardKillScore(class Actor&, int);
    /*39*/ virtual int /*enum enum ArmorMaterialType*/ getArmorMaterialTypeInSlot(int /*enum enum ArmorSlot*/) const;
    /*40*/ virtual int /*enum enum ArmorTextureType*/ getArmorMaterialTextureTypeInSlot(int /*enum enum ArmorSlot*/) const;
    /*41*/ virtual float getArmorColorInSlot(int /*enum enum ArmorSlot*/, int) const;
    /*42*/ virtual void setEquippedSlot(int /*enum enum EquipmentSlot*/, class ItemStack const&);
    /*43*/ virtual class HashedString const& queryEntityRenderer() const;
    /*44*/ virtual bool canFreeze() const;
    /*45*/ virtual int getPortalWaitTime() const;
    /*46*/ virtual bool canChangeDimensions() const;
    /*47*/ virtual void __unk_vfn_13();
    /*48*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*49*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*50*/ virtual bool canBePulledIntoVehicle() const;
    /*51*/ virtual bool inCaravan() const;
    /*52*/ virtual void __unk_vfn_14();
    /*53*/ virtual bool canSynchronizeNewEntity() const;
    /*54*/ virtual void buildDebugInfo(std::string&) const;
    /*55*/ virtual int getDeathTime() const;
    /*56*/ virtual void swing();
    /*57*/ virtual void __unk_vfn_15();
    /*58*/ virtual void __unk_vfn_16();
    /*59*/ virtual float getYHeadRot() const;
    /*60*/ virtual bool isWorldBuilder() const;
    /*61*/ virtual void __unk_vfn_17();
    /*62*/ virtual bool isAdventure() const;
    /*63*/ virtual bool canDestroyBlock(class Block const&) const;
    /*64*/ virtual void setAuxValue(int);
    /*65*/ virtual void stopSpinAttack();
    /*66*/ virtual void __unk_vfn_18();
    /*67*/ virtual void __unk_vfn_19();
    /*68*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*69*/ virtual void __unk_vfn_20();
    /*70*/ virtual void __unk_vfn_21();
    /*71*/ virtual void _onSizeUpdated();
    /*72*/ virtual void __unk_vfn_22();
    /*73*/ virtual void __unk_vfn_23();
    /*74*/ virtual float getThrowUpAngleOffset();
    /*
    inline void reloadHardcoded(int \/*enum enum Actor::InitializationMethod*\/ a0, class VariantParameterList const& a1){
        void (Snowball::*rv)(int \/*enum enum Actor::InitializationMethod*\/, class VariantParameterList const&);
        *((void**)&rv) = dlsym("?reloadHardcoded@Snowball@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Actor::InitializationMethod*\/>(a0), std::forward<class VariantParameterList const&>(a1));
    }
    */

protected:

private:
};