// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BasePressurePlateBlock.hpp"
#define EXTRA_INCLUDE_PART_PRESSUREPLATEBLOCK
#include "Extra/PressurePlateBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_PRESSUREPLATEBLOCK
class PressurePlateBlock : public BasePressurePlateBlock {
#include "Extra/PressurePlateBlockAPI.hpp"
public:
    /*0*/ virtual ~PressurePlateBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*5*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*6*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const&)> const&, class BlockPos const&) const;
    /*7*/ virtual void __unk_vfn_0();
    /*8*/ virtual bool isStrippable(class Block const&) const;
    /*9*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*10*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*11*/ virtual void __unk_vfn_1();
    /*12*/ virtual void __unk_vfn_2();
    /*13*/ virtual void __unk_vfn_3();
    /*14*/ virtual void __unk_vfn_4();
    /*15*/ virtual void __unk_vfn_5();
    /*16*/ virtual void __unk_vfn_6();
    /*17*/ virtual void __unk_vfn_7();
    /*18*/ virtual void __unk_vfn_8();
    /*19*/ virtual void __unk_vfn_9();
    /*20*/ virtual void __unk_vfn_10();
    /*21*/ virtual bool isDoubleSlabBlock() const;
    /*22*/ virtual void __unk_vfn_11();
    /*23*/ virtual void __unk_vfn_12();
    /*24*/ virtual void __unk_vfn_13();
    /*25*/ virtual void __unk_vfn_14();
    /*26*/ virtual void __unk_vfn_15();
    /*27*/ virtual void __unk_vfn_16();
    /*28*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*29*/ virtual bool isValidAuxValue(int) const;
    /*30*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*31*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*32*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*33*/ virtual void __unk_vfn_17();
    /*34*/ virtual void __unk_vfn_18();
    /*35*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*36*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*37*/ virtual void __unk_vfn_19();
    /*38*/ virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;
    /*39*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*40*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*41*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*42*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*43*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*44*/ virtual void __unk_vfn_20();
    /*45*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*46*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual void __unk_vfn_21();
    /*50*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*51*/ virtual void __unk_vfn_22();
    /*52*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*53*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*54*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*55*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*56*/ virtual bool mayPick() const;
    /*57*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*58*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*59*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*60*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*61*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*62*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*63*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*64*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*65*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*66*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int) const;
    /*67*/ virtual void __unk_vfn_23();
    /*68*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*69*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*70*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*71*/ virtual int getExperienceDrop(class Random&) const;
    /*72*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*73*/ virtual void __unk_vfn_24();
    /*74*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*75*/ virtual void __unk_vfn_25();
    /*76*/ virtual void __unk_vfn_26();
    /*77*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*78*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*79*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*80*/ virtual void __unk_vfn_27();
    /*81*/ virtual int getIconYOffset() const;
    /*82*/ virtual bool isAuxValueRelevantForPicking() const;
    /*83*/ virtual int getColor(class Block const&) const;
    /*84*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*85*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*86*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*87*/ virtual int getVariant(class Block const&) const;
    /*88*/ virtual void __unk_vfn_28();
    /*89*/ virtual class Block const& getRenderBlock() const;
    /*90*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*91*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*92*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*93*/ virtual void __unk_vfn_29();
    /*94*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
    /*95*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*96*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*97*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*98*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*99*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*100*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*101*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*102*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*103*/ virtual void __unk_vfn_30();
    /*104*/ virtual void __unk_vfn_31();
    /*105*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*106*/ virtual void __unk_vfn_32();
    /*107*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*108*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*109*/ virtual void __unk_vfn_33();
    /*110*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*111*/ virtual void __unk_vfn_34();
    /*112*/ virtual void __unk_vfn_35();
    /*113*/ virtual void __unk_vfn_36();
    /*114*/ virtual int getSignalStrength(class BlockSource&, class BlockPos const&) const;
    /*115*/ virtual int getSignalForData(int) const;
    /*116*/ virtual int getRedstoneSignal(int) const;
    /*
    inline class ItemInstance asItemInstance(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        class ItemInstance (PressurePlateBlock::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?asItemInstance@PressurePlateBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline int getRedstoneSignal(int a0) const{
        int (PressurePlateBlock::*rv)(int) const;
        *((void**)&rv) = dlsym("?getRedstoneSignal@PressurePlateBlock@@MEBAHH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline class ItemInstance getResourceItem(class Randomize& a0, class Block const& a1, int a2) const{
        class ItemInstance (PressurePlateBlock::*rv)(class Randomize&, class Block const&, int) const;
        *((void**)&rv) = dlsym("?getResourceItem@PressurePlateBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z");
        return (this->*rv)(std::forward<class Randomize&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2));
    }
    inline int getSignalForData(int a0) const{
        int (PressurePlateBlock::*rv)(int) const;
        *((void**)&rv) = dlsym("?getSignalForData@PressurePlateBlock@@MEBAHH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline int getSignalStrength(class BlockSource& a0, class BlockPos const& a1) const{
        int (PressurePlateBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getSignalStrength@PressurePlateBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    */

protected:

private:
};