// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BlockSourceListener.hpp"
#define EXTRA_INCLUDE_PART_CLASSROOMMODELISTENER
#include "Extra/ClassroomModeListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_CLASSROOMMODELISTENER
class ClassroomModeListener : public BlockSourceListener {
#include "Extra/ClassroomModeListenerAPI.hpp"
public:
    /*0*/ virtual ~ClassroomModeListener();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void onSourceDestroyed(class BlockSource&);
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*
    inline void onEntityRemoved(class Actor& a0){
        void (ClassroomModeListener::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?onEntityRemoved@ClassroomModeListener@@UEAAXAEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor&>(a0));
    }
    inline void onAreaChanged(class BlockSource& a0, class BlockPos const& a1, class BlockPos const& a2){
        void (ClassroomModeListener::*rv)(class BlockSource&, class BlockPos const&, class BlockPos const&);
        *((void**)&rv) = dlsym("?onAreaChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class BlockPos const&>(a2));
    }
    inline void onChunkUnloaded(class LevelChunk& a0){
        void (ClassroomModeListener::*rv)(class LevelChunk&);
        *((void**)&rv) = dlsym("?onChunkUnloaded@ClassroomModeListener@@UEAAXAEAVLevelChunk@@@Z");
        return (this->*rv)(std::forward<class LevelChunk&>(a0));
    }
    inline void onBlockChanged(class BlockSource& a0, class BlockPos const& a1, unsigned int a2, class Block const& a3, class Block const& a4, int a5, struct ActorBlockSyncMessage const* a6, int \/*enum enum BlockChangedEventTarget*\/ a7){
        void (ClassroomModeListener::*rv)(class BlockSource&, class BlockPos const&, unsigned int, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*, int \/*enum enum BlockChangedEventTarget*\/);
        *((void**)&rv) = dlsym("?onBlockChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<unsigned int>(a2), std::forward<class Block const&>(a3), std::forward<class Block const&>(a4), std::forward<int>(a5), std::forward<struct ActorBlockSyncMessage const*>(a6), std::forward<int \/*enum enum BlockChangedEventTarget*\/>(a7));
    }
    inline void onChunkLoaded(class ChunkSource& a0, class LevelChunk& a1){
        void (ClassroomModeListener::*rv)(class ChunkSource&, class LevelChunk&);
        *((void**)&rv) = dlsym("?onChunkLoaded@ClassroomModeListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z");
        return (this->*rv)(std::forward<class ChunkSource&>(a0), std::forward<class LevelChunk&>(a1));
    }
    inline void onEntityAdded(class Actor& a0){
        void (ClassroomModeListener::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?onEntityAdded@ClassroomModeListener@@UEAAXAEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor&>(a0));
    }
    */

protected:

private:
};