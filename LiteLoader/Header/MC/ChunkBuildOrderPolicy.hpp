// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_CHUNKBUILDORDERPOLICY
#include "Extra/ChunkBuildOrderPolicyAPI.hpp"
#undef EXTRA_INCLUDE_PART_CHUNKBUILDORDERPOLICY
class ChunkBuildOrderPolicy {
#include "Extra/ChunkBuildOrderPolicyAPI.hpp"
public:
    /*0*/ virtual ~ChunkBuildOrderPolicy();
    /*1*/ virtual int getChunkRebuildPriority(class ChunkPos const&) const;
    /*2*/ virtual unsigned int registerForUpdates();
    /*3*/ virtual void unregisterForUpdates(unsigned int);
    /*4*/ virtual void setBuildOrderInfluence(unsigned int, class ChunkPos const&, class Vec3 const&);
    /*5*/ virtual void updateInfluences();
    /*
    inline int getChunkRebuildPriority(class ChunkPos const& a0) const{
        int (ChunkBuildOrderPolicy::*rv)(class ChunkPos const&) const;
        *((void**)&rv) = dlsym("?getChunkRebuildPriority@ChunkBuildOrderPolicy@@UEBAHAEBVChunkPos@@@Z");
        return (this->*rv)(std::forward<class ChunkPos const&>(a0));
    }
    inline unsigned int registerForUpdates(){
        unsigned int (ChunkBuildOrderPolicy::*rv)();
        *((void**)&rv) = dlsym("?registerForUpdates@ChunkBuildOrderPolicy@@UEAAIXZ");
        return (this->*rv)();
    }
    inline void setBuildOrderInfluence(unsigned int a0, class ChunkPos const& a1, class Vec3 const& a2){
        void (ChunkBuildOrderPolicy::*rv)(unsigned int, class ChunkPos const&, class Vec3 const&);
        *((void**)&rv) = dlsym("?setBuildOrderInfluence@ChunkBuildOrderPolicy@@UEAAXIAEBVChunkPos@@AEBVVec3@@@Z");
        return (this->*rv)(std::forward<unsigned int>(a0), std::forward<class ChunkPos const&>(a1), std::forward<class Vec3 const&>(a2));
    }
    inline void unregisterForUpdates(unsigned int a0){
        void (ChunkBuildOrderPolicy::*rv)(unsigned int);
        *((void**)&rv) = dlsym("?unregisterForUpdates@ChunkBuildOrderPolicy@@UEAAXI@Z");
        return (this->*rv)(std::forward<unsigned int>(a0));
    }
    inline void updateInfluences(){
        void (ChunkBuildOrderPolicy::*rv)();
        *((void**)&rv) = dlsym("?updateInfluences@ChunkBuildOrderPolicy@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};