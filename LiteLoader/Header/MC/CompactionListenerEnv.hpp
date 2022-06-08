// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TransactionalWorldBlockTarget.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CompactionListenerEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPACTIONLISTENERENV
public:
    class CompactionListenerEnv& operator=(class CompactionListenerEnv const &) = delete;
    CompactionListenerEnv(class CompactionListenerEnv const &) = delete;
    CompactionListenerEnv() = delete;
#endif

public:
    /*0*/ virtual ~CompactionListenerEnv();
    /*
    inline void Schedule(void ( *)(void *) a0, void * a1){
        void (CompactionListenerEnv::*rv)(void ( *)(void *), void *);
        *((void**)&rv) = dlsym("?Schedule@CompactionListenerEnv@@UEAAXP6AXPEAX@Z0@Z");
        return (this->*rv)(std::forward<void ( *)(void *)>(a0), std::forward<void *>(a1));
    }
    */
    MCAPI CompactionListenerEnv(class leveldb::Env *);
    MCAPI void setCompactionCallback(class std::function<void (enum CompactionStatus)>);

protected:

private:

};