// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BlockLegacy.hpp"
#define EXTRA_INCLUDE_PART_VINEBLOCK
#include "Extra/VineBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_VINEBLOCK
class VineBlock : public BlockLegacy {
#include "Extra/VineBlockAPI.hpp"
public:
    /*0*/ virtual ~VineBlock();
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
    /*36*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*37*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*38*/ virtual void __unk_vfn_19();
    /*39*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*40*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*41*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*42*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*43*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*44*/ virtual void __unk_vfn_20();
    /*45*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*46*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void __unk_vfn_21();
    /*51*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*52*/ virtual void __unk_vfn_22();
    /*53*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*54*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*55*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*56*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*57*/ virtual bool mayPick() const;
    /*58*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*59*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*60*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*61*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*62*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*63*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*64*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*65*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*66*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*67*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int) const;
    /*68*/ virtual void __unk_vfn_23();
    /*69*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*70*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*71*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*72*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*73*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*74*/ virtual int getExperienceDrop(class Random&) const;
    /*75*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*76*/ virtual void __unk_vfn_24();
    /*77*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*78*/ virtual void __unk_vfn_25();
    /*79*/ virtual void __unk_vfn_26();
    /*80*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*81*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*82*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*83*/ virtual void __unk_vfn_27();
    /*84*/ virtual int getIconYOffset() const;
    /*85*/ virtual bool isAuxValueRelevantForPicking() const;
    /*86*/ virtual int getColor(class Block const&) const;
    /*87*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*88*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*89*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*90*/ virtual class AABB const& getVisualShapeInWorld(class Block const&, class BlockSource const&, class BlockPos const&, class AABB&, bool) const;
    /*91*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*92*/ virtual void __unk_vfn_28();
    /*93*/ virtual class Block const& getRenderBlock() const;
    /*94*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*95*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*96*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*97*/ virtual void __unk_vfn_29();
    /*98*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*99*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*100*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*101*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*102*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*103*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*104*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*105*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*106*/ virtual void __unk_vfn_30();
    /*107*/ virtual void __unk_vfn_31();
    /*108*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*109*/ virtual void playerDestroy(class Player&, class BlockPos const&, class Block const&) const;
    /*110*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*111*/ virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*112*/ virtual void __unk_vfn_32();
    /*113*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*114*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*115*/ virtual void __unk_vfn_33();
    /*116*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*117*/ virtual void __unk_vfn_34();
    /*118*/ virtual void __unk_vfn_35();
    /*
    inline int getResourceCount(class Randomize& a0, class Block const& a1, int a2) const{
        int (VineBlock::*rv)(class Randomize&, class Block const&, int) const;
        *((void**)&rv) = dlsym("?getResourceCount@VineBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z");
        return (this->*rv)(std::forward<class Randomize&>(a0), std::forward<class Block const&>(a1), std::forward<int>(a2));
    }
    inline bool waterSpreadCausesSpawn() const{
        bool (VineBlock::*rv)() const;
        *((void**)&rv) = dlsym("?waterSpreadCausesSpawn@VineBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline class AABB const& getAABB(class BlockSource const& a0, class BlockPos const& a1, class Block const& a2, class AABB& a3, bool a4) const{
        class AABB const& (VineBlock::*rv)(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
        *((void**)&rv) = dlsym("?getAABB@VineBlock@@UEBAAEBVAABB@@AEBVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z");
        return (this->*rv)(std::forward<class BlockSource const&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2), std::forward<class AABB&>(a3), std::forward<bool>(a4));
    }
    inline int getColor(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        int (VineBlock::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?getColor@VineBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline int getColor(class Block const& a0) const{
        int (VineBlock::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?getColor@VineBlock@@UEBAHAEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0));
    }
    inline class mce::Color getMapColor(class BlockSource& a0, class BlockPos const& a1) const{
        class mce::Color (VineBlock::*rv)(class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getMapColor@VineBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1));
    }
    inline class Block const& getPlacementBlock(class Actor& a0, class BlockPos const& a1, unsigned char a2, class Vec3 const& a3, int a4) const{
        class Block const& (VineBlock::*rv)(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
        *((void**)&rv) = dlsym("?getPlacementBlock@VineBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z");
        return (this->*rv)(std::forward<class Actor&>(a0), std::forward<class BlockPos const&>(a1), std::forward<unsigned char>(a2), std::forward<class Vec3 const&>(a3), std::forward<int>(a4));
    }
    inline class AABB const& getVisualShapeInWorld(class Block const& a0, class BlockSource const& a1, class BlockPos const& a2, class AABB& a3, bool a4) const{
        class AABB const& (VineBlock::*rv)(class Block const&, class BlockSource const&, class BlockPos const&, class AABB&, bool) const;
        *((void**)&rv) = dlsym("?getVisualShapeInWorld@VineBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEAV2@_N@Z");
        return (this->*rv)(std::forward<class Block const&>(a0), std::forward<class BlockSource const&>(a1), std::forward<class BlockPos const&>(a2), std::forward<class AABB&>(a3), std::forward<bool>(a4));
    }
    inline bool mayPlace(class BlockSource& a0, class BlockPos const& a1, unsigned char a2) const{
        bool (VineBlock::*rv)(class BlockSource&, class BlockPos const&, unsigned char) const;
        *((void**)&rv) = dlsym("?mayPlace@VineBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<unsigned char>(a2));
    }
    inline void neighborChanged(class BlockSource& a0, class BlockPos const& a1, class BlockPos const& a2) const{
        void (VineBlock::*rv)(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?neighborChanged@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class BlockPos const&>(a2));
    }
    inline void playerDestroy(class Player& a0, class BlockPos const& a1, class Block const& a2) const{
        void (VineBlock::*rv)(class Player&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?playerDestroy@VineBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline void randomTick(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const{
        void (VineBlock::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
        *((void**)&rv) = dlsym("?randomTick@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2));
    }
    inline void tick(class BlockSource& a0, class BlockPos const& a1, class Random& a2) const{
        void (VineBlock::*rv)(class BlockSource&, class BlockPos const&, class Random&) const;
        *((void**)&rv) = dlsym("?tick@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Random&>(a2));
    }
    */
    MCAPI static int const VINE_ALL;
    MCAPI static int const VINE_EAST;
    MCAPI static int const VINE_NORTH;
    MCAPI static int const VINE_SOUTH;
    MCAPI static int const VINE_WEST;
    MCAPI static class Block const& getBlockForFace(unsigned char);
    MCAPI static bool isAcceptableNeighbour(class Block const&);

protected:

private:
    MCAPI int _nextVineDirections(class BlockSource&, class BlockPos const&) const;
};