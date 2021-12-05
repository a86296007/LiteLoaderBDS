// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BlockActor.hpp"
#define EXTRA_INCLUDE_PART_FLOWERPOTBLOCKACTOR
#include "Extra/FlowerPotBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_FLOWERPOTBLOCKACTOR
class FlowerPotBlockActor : public BlockActor {
#include "Extra/FlowerPotBlockActorAPI.hpp"
public:
    /*0*/ virtual ~FlowerPotBlockActor();
    /*1*/ virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /*2*/ virtual bool save(class CompoundTag&) const;
    /*3*/ virtual void saveBlockData(class CompoundTag&, class BlockSource&) const;
    /*4*/ virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    /*5*/ virtual void onCustomTagLoadDone(class BlockSource&);
    /*6*/ virtual void tick(class BlockSource&);
    /*7*/ virtual void onChanged(class BlockSource&);
    /*8*/ virtual void onPlace(class BlockSource&);
    /*9*/ virtual void __unk_vfn_0();
    /*10*/ virtual void onRemoved(class BlockSource&);
    /*11*/ virtual void triggerEvent(int, int);
    /*12*/ virtual void __unk_vfn_1();
    /*13*/ virtual void __unk_vfn_2();
    /*14*/ virtual void __unk_vfn_3();
    /*15*/ virtual void __unk_vfn_4();
    /*16*/ virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&);
    /*17*/ virtual void __unk_vfn_5();
    /*18*/ virtual std::string getName() const;
    /*19*/ virtual std::string getImmersiveReaderText(class BlockSource&);
    /*20*/ virtual void __unk_vfn_6();
    /*21*/ virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    /*22*/ virtual void __unk_vfn_7();
    /*23*/ virtual void __unk_vfn_8();
    /*24*/ virtual void __unk_vfn_9();
    /*25*/ virtual void __unk_vfn_10();
    /*26*/ virtual void __unk_vfn_11();
    /*27*/ virtual void __unk_vfn_12();
    /*28*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /*29*/ virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /*30*/ virtual bool _playerCanUpdate(class Player const&) const;
    /*
    inline std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& a0){
        std::unique_ptr<class BlockActorDataPacket> (FlowerPotBlockActor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?_getUpdatePacket@FlowerPotBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    inline void _onUpdatePacket(class CompoundTag const& a0, class BlockSource& a1){
        void (FlowerPotBlockActor::*rv)(class CompoundTag const&, class BlockSource&);
        *((void**)&rv) = dlsym("?_onUpdatePacket@FlowerPotBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0), std::forward<class BlockSource&>(a1));
    }
    inline void load(class Level& a0, class CompoundTag const& a1, class DataLoadHelper& a2){
        void (FlowerPotBlockActor::*rv)(class Level&, class CompoundTag const&, class DataLoadHelper&);
        *((void**)&rv) = dlsym("?load@FlowerPotBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class Level&>(a0), std::forward<class CompoundTag const&>(a1), std::forward<class DataLoadHelper&>(a2));
    }
    inline void onChanged(class BlockSource& a0){
        void (FlowerPotBlockActor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?onChanged@FlowerPotBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    inline bool save(class CompoundTag& a0) const{
        bool (FlowerPotBlockActor::*rv)(class CompoundTag&) const;
        *((void**)&rv) = dlsym("?save@FlowerPotBlockActor@@UEBA_NAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    */
    MCAPI class Block const* getPlantItem() const;
    MCAPI void setPlantItem(class Block const*);

protected:

private:
};