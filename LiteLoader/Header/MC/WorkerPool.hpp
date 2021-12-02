// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_WORKERPOOL
#include "Extra/WorkerPoolAPI.hpp"
#undef EXTRA_INCLUDE_PART_WORKERPOOL
class WorkerPool {
#include "Extra/WorkerPoolAPI.hpp"
public:
    /*0*/ virtual ~WorkerPool();

public:
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>, bool);
    MCAPI unsigned __int64 size() const;
    MCAPI class std::shared_ptr<class BackgroundTaskBase> tryPop(int);

private:
    MCAPI bool _checkPendingWork();

protected:
    MCAPI static void _registerPool(class WorkerPool&);
    MCAPI static class SmallSet<class WorkerPool*> sAllPools;
    MCAPI static class std::mutex sAllPoolsMutex;
};