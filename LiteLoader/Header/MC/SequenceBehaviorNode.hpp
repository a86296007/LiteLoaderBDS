// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SEQUENCEBEHAVIORNODE
#include "Extra/SequenceBehaviorNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_SEQUENCEBEHAVIORNODE
class SequenceBehaviorNode {
#include "Extra/SequenceBehaviorNodeAPI.hpp"
public:
    /*0*/ virtual ~SequenceBehaviorNode();
    /*1*/ virtual int /*enum enum BehaviorStatus*/ tick(class Actor&);
    /*
    inline void initializeFromDefinition(class Actor& a0){
        void (SequenceBehaviorNode::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?initializeFromDefinition@SequenceBehaviorNode@@MEAAXAEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor&>(a0));
    }
    inline int \/*enum enum BehaviorStatus*\/ tick(class Actor& a0){
        int \/*enum enum BehaviorStatus*\/ (SequenceBehaviorNode::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?tick@SequenceBehaviorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor&>(a0));
    }
    */

protected:

private:
};