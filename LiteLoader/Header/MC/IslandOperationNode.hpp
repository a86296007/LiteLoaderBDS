// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ISLANDOPERATIONNODE
#include "Extra/IslandOperationNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_ISLANDOPERATIONNODE
class IslandOperationNode {
#include "Extra/IslandOperationNodeAPI.hpp"
public:
    /*0*/ virtual ~IslandOperationNode();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void _fillArea(class OperationNodeDetails::WorkingData<int /*enum enum OperationNodeValues::Terrain*/, char>&, class Pos2d const&, class Pos2d const&) const;
    /*
    inline void _fillArea(class OperationNodeDetails::WorkingData<int \/*enum enum OperationNodeValues::Terrain*\/, char>& a0, class Pos2d const& a1, class Pos2d const& a2) const{
        void (IslandOperationNode::*rv)(class OperationNodeDetails::WorkingData<int \/*enum enum OperationNodeValues::Terrain*\/, char>&, class Pos2d const&, class Pos2d const&) const;
        *((void**)&rv) = dlsym("?_fillArea@IslandOperationNode@@EEBAXAEAV?$WorkingData@W4Terrain@OperationNodeValues@@D@OperationNodeDetails@@AEBVPos2d@@1@Z");
        return (this->*rv)(std::forward<class OperationNodeDetails::WorkingData<int \/*enum enum OperationNodeValues::Terrain*\/, char>&>(a0), std::forward<class Pos2d const&>(a1), std::forward<class Pos2d const&>(a2));
    }
    */

protected:

private:
};