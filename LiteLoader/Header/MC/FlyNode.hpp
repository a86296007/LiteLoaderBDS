// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_FLYNODE
#include "Extra/FlyNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_FLYNODE
class FlyNode {
#include "Extra/FlyNodeAPI.hpp"
public:
    /*0*/ virtual ~FlyNode();
    /*1*/ virtual int /*enum enum BehaviorStatus*/ tick(class Actor&);
    /*2*/ virtual void initializeFromDefinition(class Actor&);
    /*
    inline void initializeFromDefinition(class Actor& a0){
        void (FlyNode::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?initializeFromDefinition@FlyNode@@EEAAXAEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor&>(a0));
    }
    inline int \/*enum enum BehaviorStatus*\/ tick(class Actor& a0){
        int \/*enum enum BehaviorStatus*\/ (FlyNode::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?tick@FlyNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor&>(a0));
    }
    */

protected:

private:
};