// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_CONSUMEITEMNODE
#include "Extra/ConsumeItemNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_CONSUMEITEMNODE
class ConsumeItemNode {
#include "Extra/ConsumeItemNodeAPI.hpp"
public:
    /*0*/ virtual ~ConsumeItemNode();
    /*1*/ virtual int /*enum enum BehaviorStatus*/ tick(class Actor&);
    /*
    inline int \/*enum enum BehaviorStatus*\/ tick(class Actor& a0){
        int \/*enum enum BehaviorStatus*\/ (ConsumeItemNode::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?tick@ConsumeItemNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor&>(a0));
    }
    */

protected:

private:
};