// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StructureTemplateDataResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATEDATARESPONSEPACKET
public:
    class StructureTemplateDataResponsePacket& operator=(class StructureTemplateDataResponsePacket const &) = delete;
    StructureTemplateDataResponsePacket(class StructureTemplateDataResponsePacket const &) = delete;
#endif

public:
    /*0*/ virtual ~StructureTemplateDataResponsePacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /*
    inline  ~StructureTemplateDataResponsePacket(){
         (StructureTemplateDataResponsePacket::*rv)();
        *((void**)&rv) = dlsym("??1StructureTemplateDataResponsePacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI StructureTemplateDataResponsePacket(std::string const &, std::unique_ptr<class CompoundTag>, enum StructureTemplateResponseType);
    MCAPI StructureTemplateDataResponsePacket();
    MCAPI class StructureTemplateDataResponsePacket & operator=(class StructureTemplateDataResponsePacket &&);

protected:

private:

};