// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StopSoundPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPSOUNDPACKET
public:
    class StopSoundPacket& operator=(class StopSoundPacket const &) = delete;
    StopSoundPacket(class StopSoundPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~StopSoundPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /*
    inline  ~StopSoundPacket(){
         (StopSoundPacket::*rv)();
        *((void**)&rv) = dlsym("??1StopSoundPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI StopSoundPacket(std::string const &, bool);
    MCAPI StopSoundPacket();

protected:

private:

};