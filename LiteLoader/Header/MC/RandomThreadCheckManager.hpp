// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_RANDOMTHREADCHECKMANAGER
#include "Extra/RandomThreadCheckManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_RANDOMTHREADCHECKMANAGER
class RandomThreadCheckManager {
#include "Extra/RandomThreadCheckManagerAPI.hpp"
public:
    /*0*/ virtual ~RandomThreadCheckManager();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();
    /*5*/ virtual void __unk_vfn_4();
    /*6*/ virtual void onAppResumed();
    /*
    inline void onAppResumed(){
        void (RandomThreadCheckManager::*rv)();
        *((void**)&rv) = dlsym("?onAppResumed@RandomThreadCheckManager@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
    MCAPI static std::unique_ptr<class RandomThreadCheckManager> mInstance;
    MCAPI static class std::recursive_mutex mMutex;
};