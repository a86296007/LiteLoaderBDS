// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_FITDOUBLEXYROOM
#include "Extra/FitDoubleXYRoomAPI.hpp"
#undef EXTRA_INCLUDE_PART_FITDOUBLEXYROOM
class FitDoubleXYRoom {
#include "Extra/FitDoubleXYRoomAPI.hpp"
public:
    /*0*/ virtual ~FitDoubleXYRoom();
    /*1*/ virtual bool fits(class RoomDefinition const&) const;
    /*2*/ virtual std::unique_ptr<class OceanMonumentPiece> create(int&, class std::shared_ptr<class RoomDefinition>, class Random&);
    /*
    inline std::unique_ptr<class OceanMonumentPiece> create(int& a0, class std::shared_ptr<class RoomDefinition> a1, class Random& a2){
        std::unique_ptr<class OceanMonumentPiece> (FitDoubleXYRoom::*rv)(int&, class std::shared_ptr<class RoomDefinition>, class Random&);
        *((void**)&rv) = dlsym("?create@FitDoubleXYRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<int&>(a0), std::forward<class std::shared_ptr<class RoomDefinition>>(a1), std::forward<class Random&>(a2));
    }
    inline bool fits(class RoomDefinition const& a0) const{
        bool (FitDoubleXYRoom::*rv)(class RoomDefinition const&) const;
        *((void**)&rv) = dlsym("?fits@FitDoubleXYRoom@@UEBA_NAEBVRoomDefinition@@@Z");
        return (this->*rv)(std::forward<class RoomDefinition const&>(a0));
    }
    */

protected:

private:
};