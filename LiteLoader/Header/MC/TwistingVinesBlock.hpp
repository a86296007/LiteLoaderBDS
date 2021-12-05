// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BlockLegacy.hpp"
#define EXTRA_INCLUDE_PART_TWISTINGVINESBLOCK
#include "Extra/TwistingVinesBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_TWISTINGVINESBLOCK
class TwistingVinesBlock : public BlockLegacy {
#include "Extra/TwistingVinesBlockAPI.hpp"
public:
    /*0*/ virtual ~TwistingVinesBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*5*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*6*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*7*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const&)> const&, class BlockPos const&) const;
    /*8*/ virtual void __unk_vfn_0();
    /*9*/ virtual bool isStrippable(class Block const&) const;
    /*10*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*11*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*12*/ virtual void __unk_vfn_1();
    /*13*/ virtual void __unk_vfn_2();
    /*14*/ virtual void __unk_vfn_3();
    /*15*/ virtual void __unk_vfn_4();
    /*16*/ virtual void __unk_vfn_5();
    /*17*/ virtual void __unk_vfn_6();
    /*18*/ virtual void __unk_vfn_7();
    /*19*/ virtual void __unk_vfn_8();
    /*20*/ virtual void __unk_vfn_9();
    /*21*/ virtual void __unk_vfn_10();
    /*22*/ virtual bool isDoubleSlabBlock() const;
    /*23*/ virtual void __unk_vfn_11();
    /*24*/ virtual void __unk_vfn_12();
    /*25*/ virtual void __unk_vfn_13();
    /*26*/ virtual void __unk_vfn_14();
    /*27*/ virtual void __unk_vfn_15();
    /*28*/ virtual void __unk_vfn_16();
    /*29*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*30*/ virtual bool isValidAuxValue(int) const;
    /*31*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*32*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*33*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*34*/ virtual void __unk_vfn_17();
    /*35*/ virtual void __unk_vfn_18();
    /*36*/ virtual bool canContainLiquid() const;
    /*37*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*38*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*39*/ virtual void __unk_vfn_19();
    /*40*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*41*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*42*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*43*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*44*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*45*/ virtual void __unk_vfn_20();
    /*46*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual void __unk_vfn_21();
    /*52*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*53*/ virtual void __unk_vfn_22();
    /*54*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*55*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*56*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*57*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*58*/ virtual bool mayPick() const;
    /*59*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*60*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /*61*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*62*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*63*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*64*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*65*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*66*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*67*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*68*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*69*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*70*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int) const;
    /*71*/ virtual void __unk_vfn_23();
    /*72*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*73*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*74*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*75*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*76*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*77*/ virtual int getExperienceDrop(class Random&) const;
    /*78*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*79*/ virtual void __unk_vfn_24();
    /*80*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*81*/ virtual void __unk_vfn_25();
    /*82*/ virtual void __unk_vfn_26();
    /*83*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*84*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*85*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*86*/ virtual void __unk_vfn_27();
    /*87*/ virtual int getIconYOffset() const;
    /*88*/ virtual bool isAuxValueRelevantForPicking() const;
    /*89*/ virtual int getColor(class Block const&) const;
    /*90*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*91*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*92*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*93*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*94*/ virtual void __unk_vfn_28();
    /*95*/ virtual class Block const& getRenderBlock() const;
    /*96*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*97*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*98*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*99*/ virtual void __unk_vfn_29();
    /*100*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*101*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*102*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*103*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*104*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*105*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*106*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*107*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*108*/ virtual void __unk_vfn_30();
    /*109*/ virtual void __unk_vfn_31();
    /*110*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*111*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*112*/ virtual void __unk_vfn_32();
    /*113*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*114*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*115*/ virtual void __unk_vfn_33();
    /*116*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*117*/ virtual void __unk_vfn_34();
    /*118*/ virtual void __unk_vfn_35();
    /*
    inline bool canContainLiquid() const{
        bool (TwistingVinesBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canContainLiquid@TwistingVinesBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canBeFertilized(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        bool (TwistingVinesBlock::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?canBeFertilized@TwistingVinesBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline class ItemInstance asItemInstance(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        class ItemInstance (TwistingVinesBlock::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?asItemInstance@TwistingVinesBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline bool canSurvive(class BlockSource& a0, class BlockPos const& a1) const{
        bool (TwistingVinesBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?canSurvive@TwistingVinesBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline class AABB const& getAABB(class BlockSource const& a0, class BlockPos const& a1, class Block const& a2, class AABB& a3, bool a4) const{
        class AABB const& (TwistingVinesBlock::*rv)(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
        *((void**)&rv) = dlsym("?getAABB@TwistingVinesBlock@@UEBAAEBVAABB@@AEBVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z");
        return (this->*rv)(std::forward<class BlockSource const&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2), std::forward<class AABB&>(a3), std::forward<bool>(a4));
    }
    inline class ItemInstance getResourceItem(class Randomize& a0, class Block const& a1, int a2) const{
        class ItemInstance (TwistingVinesBlock::*rv)(class Randomize&, class Block const&, int) const;
        *((void**)&rv) = dlsym("?getResourceItem@TwistingVinesBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z");
        return (this->*rv)(std::forward<class Randomize&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2));
    }
    inline bool mayPlace(class BlockSource& a0, class BlockPos const& a1) const{
        bool (TwistingVinesBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?mayPlace@TwistingVinesBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline void neighborChanged(class BlockSource& a0, class BlockPos const& a1, class BlockPos const& a2) const{
        void (TwistingVinesBlock::*rv)(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?neighborChanged@TwistingVinesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class BlockPos const&>(a2));
    }
    inline bool onFertilized(class BlockSource& a0, class BlockPos const& a1, class Actor* a2, int \/*enum enum FertilizerType*\/ a3) const{
        bool (TwistingVinesBlock::*rv)(class BlockSource&, class BlockPos const&, class Actor*, int \/*enum enum FertilizerType*\/) const;
        *((void**)&rv) = dlsym("?onFertilized@TwistingVinesBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Actor*>(a2), std::forward<int \/*enum enum FertilizerType*\/>(a3));
    }
    inline void onPlace(class BlockSource& a0, class BlockPos const& a1) const{
        void (TwistingVinesBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?onPlace@TwistingVinesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline void onRemove(class BlockSource& a0, class BlockPos const& a1) const{
        void (TwistingVinesBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?onRemove@TwistingVinesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline void tick(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const{
        void (TwistingVinesBlock::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
        *((void**)&rv) = dlsym("?tick@TwistingVinesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2));
    }
    */

protected:

private:
    MCAPI bool _shouldGrow(class BlockSource&, class BlockPos const&, int) const;
    MCAPI void _tryGrow(class BlockSource&, class BlockPos const&, int) const;
};