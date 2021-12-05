// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_BIOMEDEFINITIONLISTPACKET
#include "Extra/BiomeDefinitionListPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_BIOMEDEFINITIONLISTPACKET
class BiomeDefinitionListPacket {
#include "Extra/BiomeDefinitionListPacketAPI.hpp"
public:
    /*0*/ virtual ~BiomeDefinitionListPacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream&);
    /*
    inline int \/*enum enum StreamReadResult*\/ _read(class ReadOnlyBinaryStream& a0){
        int \/*enum enum StreamReadResult*\/ (BiomeDefinitionListPacket::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?_read@BiomeDefinitionListPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    inline int \/*enum enum MinecraftPacketIds*\/ getId() const{
        int \/*enum enum MinecraftPacketIds*\/ (BiomeDefinitionListPacket::*rv)() const;
        *((void**)&rv) = dlsym("?getId@BiomeDefinitionListPacket@@UEBA?AW4MinecraftPacketIds@@XZ");
        return (this->*rv)();
    }
    inline std::string getName() const{
        std::string (BiomeDefinitionListPacket::*rv)() const;
        *((void**)&rv) = dlsym("?getName@BiomeDefinitionListPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream& a0){
        struct ExtendedStreamReadResult (BiomeDefinitionListPacket::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?readExtended@BiomeDefinitionListPacket@@UEAA?AUExtendedStreamReadResult@@AEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    inline void write(class BinaryStream& a0) const{
        void (BiomeDefinitionListPacket::*rv)(class BinaryStream&) const;
        *((void**)&rv) = dlsym("?write@BiomeDefinitionListPacket@@UEBAXAEAVBinaryStream@@@Z");
        return (this->*rv)(std::forward<class BinaryStream&>(a0));
    }
    */

protected:

private:
};