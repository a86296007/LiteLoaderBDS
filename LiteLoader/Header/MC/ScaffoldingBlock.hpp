// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "HeavyBlock.hpp"
#define EXTRA_INCLUDE_PART_SCAFFOLDINGBLOCK
#include "Extra/ScaffoldingBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCAFFOLDINGBLOCK
class ScaffoldingBlock : public HeavyBlock {
#include "Extra/ScaffoldingBlockAPI.hpp"
public:
    /*0*/ virtual ~ScaffoldingBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool getCollisionShape(class AABB&, class Block const&, class BlockSource const&, class BlockPos const&, class optional_ref<struct IActorMovementProxy>) const;
    /*3*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*4*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*5*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*6*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*7*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*8*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const&)> const&, class BlockPos const&) const;
    /*9*/ virtual void __unk_vfn_0();
    /*10*/ virtual bool isStrippable(class Block const&) const;
    /*11*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*12*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*13*/ virtual void __unk_vfn_1();
    /*14*/ virtual void __unk_vfn_2();
    /*15*/ virtual void __unk_vfn_3();
    /*16*/ virtual bool isWaterBlocking() const;
    /*17*/ virtual void __unk_vfn_4();
    /*18*/ virtual void __unk_vfn_5();
    /*19*/ virtual void __unk_vfn_6();
    /*20*/ virtual void __unk_vfn_7();
    /*21*/ virtual void __unk_vfn_8();
    /*22*/ virtual void __unk_vfn_9();
    /*23*/ virtual void __unk_vfn_10();
    /*24*/ virtual bool isDoubleSlabBlock() const;
    /*25*/ virtual void __unk_vfn_11();
    /*26*/ virtual void __unk_vfn_12();
    /*27*/ virtual void __unk_vfn_13();
    /*28*/ virtual void __unk_vfn_14();
    /*29*/ virtual void __unk_vfn_15();
    /*30*/ virtual void __unk_vfn_16();
    /*31*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*32*/ virtual bool isValidAuxValue(int) const;
    /*33*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*34*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*35*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*36*/ virtual void __unk_vfn_17();
    /*37*/ virtual void __unk_vfn_18();
    /*38*/ virtual bool canContainLiquid() const;
    /*39*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*40*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*41*/ virtual void __unk_vfn_19();
    /*42*/ virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;
    /*43*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*44*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*45*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*46*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*47*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*48*/ virtual void __unk_vfn_20();
    /*49*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*52*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*53*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*54*/ virtual void __unk_vfn_21();
    /*55*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*56*/ virtual void __unk_vfn_22();
    /*57*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*58*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*59*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*60*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*61*/ virtual bool mayPick() const;
    /*62*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*63*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /*64*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*65*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*66*/ virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;
    /*67*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*68*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*69*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*70*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*71*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*72*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*73*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int) const;
    /*74*/ virtual void __unk_vfn_23();
    /*75*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*76*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*77*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*78*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*79*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*80*/ virtual int getExperienceDrop(class Random&) const;
    /*81*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*82*/ virtual void __unk_vfn_24();
    /*83*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*84*/ virtual void __unk_vfn_25();
    /*85*/ virtual void __unk_vfn_26();
    /*86*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*87*/ virtual bool canSlide(class BlockSource&, class BlockPos const&) const;
    /*88*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*89*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*90*/ virtual void __unk_vfn_27();
    /*91*/ virtual int getIconYOffset() const;
    /*92*/ virtual bool isAuxValueRelevantForPicking() const;
    /*93*/ virtual int getColor(class Block const&) const;
    /*94*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*95*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*96*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*97*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*98*/ virtual void __unk_vfn_28();
    /*99*/ virtual class Block const& getRenderBlock() const;
    /*100*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*101*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*102*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*103*/ virtual void __unk_vfn_29();
    /*104*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*105*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*106*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*107*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*108*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*109*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*110*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*111*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*112*/ virtual void __unk_vfn_30();
    /*113*/ virtual void __unk_vfn_31();
    /*114*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*115*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*116*/ virtual void __unk_vfn_32();
    /*117*/ virtual class HitResult clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const;
    /*118*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*119*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*120*/ virtual void __unk_vfn_33();
    /*121*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*122*/ virtual void __unk_vfn_34();
    /*123*/ virtual void __unk_vfn_35();
    /*124*/ virtual class mce::Color getDustColor(class Block const&) const;
    /*125*/ virtual std::string getDustParticleName(class Block const&) const;
    /*126*/ virtual void __unk_vfn_36();
    /*127*/ virtual void onLand(class BlockSource&, class BlockPos const&) const;
    /*
    inline bool waterSpreadCausesSpawn() const{
        bool (ScaffoldingBlock::*rv)() const;
        *((void**)&rv) = dlsym("?waterSpreadCausesSpawn@ScaffoldingBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canContainLiquid() const{
        bool (ScaffoldingBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canContainLiquid@ScaffoldingBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isWaterBlocking() const{
        bool (ScaffoldingBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isWaterBlocking@ScaffoldingBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool breaksFallingBlocks(class Block const& a0, class BaseGameVersion a1) const{
        bool (ScaffoldingBlock::*rv)(class Block const&, class BaseGameVersion) const;
        *((void**)&rv) = dlsym("?breaksFallingBlocks@ScaffoldingBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0), std::forward<class BaseGameVersion>(a1));
    }
    inline class AABB const& getAABB(class BlockSource const& a0, class BlockPos const& a1, class Block const& a2, class AABB& a3, bool a4) const{
        class AABB const& (ScaffoldingBlock::*rv)(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
        *((void**)&rv) = dlsym("?getAABB@ScaffoldingBlock@@UEBAAEBVAABB@@AEBVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z");
        return (this->*rv)(std::forward<class BlockSource const&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2), std::forward<class AABB&>(a3), std::forward<bool>(a4));
    }
    inline void animateTick(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const{
        void (ScaffoldingBlock::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
        *((void**)&rv) = dlsym("?animateTick@ScaffoldingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2));
    }
    inline bool canBeAscendedByJumping(class Actor const& a0, class BlockPos const& a1) const{
        bool (ScaffoldingBlock::*rv)(class Actor const&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?canBeAscendedByJumping@ScaffoldingBlock@@UEBA_NAEBVActor@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class Actor const&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline bool canSlide(class BlockSource& a0, class BlockPos const& a1) const{
        bool (ScaffoldingBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?canSlide@ScaffoldingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline bool checkIsPathable(class Actor& a0, class BlockPos const& a1, class BlockPos const& a2) const{
        bool (ScaffoldingBlock::*rv)(class Actor&, class BlockPos const&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?checkIsPathable@ScaffoldingBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z");
        return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class BlockPos const&>(a2));
    }
    inline class HitResult clip(class BlockSource const& a0, class BlockPos const& a1, class Vec3 const& a2, class Vec3 const& a3, bool a4) const{
        class HitResult (ScaffoldingBlock::*rv)(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const;
        *((void**)&rv) = dlsym("?clip@ScaffoldingBlock@@UEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z");
        return (this->*rv)(std::forward<class BlockSource const&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Vec3 const&>(a2), std::forward<class Vec3 const&>(a3), std::forward<bool>(a4));
    }
    inline bool getCollisionShape(class AABB& a0, class Block const& a1, class BlockSource const& a2, class BlockPos const& a3, class optional_ref<struct IActorMovementProxy> a4) const{
        bool (ScaffoldingBlock::*rv)(class AABB&, class Block const&, class BlockSource const&, class BlockPos const&, class optional_ref<struct IActorMovementProxy>) const;
        *((void**)&rv) = dlsym("?getCollisionShape@ScaffoldingBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@V?$optional_ref@UIActorMovementProxy@@@@@Z");
        return (this->*rv)(std::forward<class AABB&>(a0), std::forward<class Block const&>(a1), std::forward<class BlockSource const&>(a2), std::forward<class BlockPos const&>(a3), std::forward<class optional_ref<struct IActorMovementProxy>>(a4));
    }
    inline class mce::Color getDustColor(class Block const& a0) const{
        class mce::Color (ScaffoldingBlock::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?getDustColor@ScaffoldingBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline std::string getDustParticleName(class Block const& a0) const{
        std::string (ScaffoldingBlock::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?getDustParticleName@ScaffoldingBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline class Block const& getPlacementBlock(class Actor& a0, class BlockPos const& a1, unsigned char a2, class Vec3 const& a3, int a4) const{
        class Block const& (ScaffoldingBlock::*rv)(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
        *((void**)&rv) = dlsym("?getPlacementBlock@ScaffoldingBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z");
        return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class BlockPos const&>(a1), std::forward<unsigned char>(a2), std::forward<class Vec3 const&>(a3), std::forward<int>(a4));
    }
    inline bool mayPlace(class BlockSource& a0, class BlockPos const& a1) const{
        bool (ScaffoldingBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?mayPlace@ScaffoldingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline void neighborChanged(class BlockSource& a0, class BlockPos const& a1, class BlockPos const& a2) const{
        void (ScaffoldingBlock::*rv)(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?neighborChanged@ScaffoldingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class BlockPos const&>(a2));
    }
    inline void onPlace(class BlockSource& a0, class BlockPos const& a1) const{
        void (ScaffoldingBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?onPlace@ScaffoldingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline void tick(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const{
        void (ScaffoldingBlock::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
        *((void**)&rv) = dlsym("?tick@ScaffoldingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2));
    }
    */
    MCAPI static int const MAX_STABILITY;

protected:
    MCAPI int calculateStability(class BlockSource const&, class BlockPos const&) const;

private:
    MCAPI bool _updateBlockStability(class BlockSource&, class BlockPos const&) const;
};