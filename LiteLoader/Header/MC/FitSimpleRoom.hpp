// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_FITSIMPLEROOM
#include "Extra/FitSimpleRoomAPI.hpp"
#undef EXTRA_INCLUDE_PART_FITSIMPLEROOM
class FitSimpleRoom {
#include "Extra/FitSimpleRoomAPI.hpp"
public:
    /*0*/ virtual ~FitSimpleRoom();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual std::unique_ptr<class OceanMonumentPiece> create(int&, class std::shared_ptr<class RoomDefinition>, class Random&);
    /*
    inline bool fits(class RoomDefinition const& a0) const{
        bool (FitSimpleRoom::*rv)(class RoomDefinition const&) const;
        *((void**)&rv) = dlsym("?fits@FitSimpleRoom@@UEBA_NAEBVRoomDefinition@@@Z");
        return (this->*rv)(std::forward<class RoomDefinition const&>(a0));
    }
    inline std::unique_ptr<class OceanMonumentPiece> create(int& a0, class std::shared_ptr<class RoomDefinition> a1, class Random& a2){
        std::unique_ptr<class OceanMonumentPiece> (FitSimpleRoom::*rv)(int&, class std::shared_ptr<class RoomDefinition>, class Random&);
        *((void**)&rv) = dlsym("?create@FitSimpleRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<int&>(a0), std::forward<class std::shared_ptr<class RoomDefinition>>(a1), std::forward<class Random&>(a2));
    }
    */

protected:

private:
};