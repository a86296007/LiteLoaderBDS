// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_FILTERTEXTPACKET
#include "Extra/FilterTextPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILTERTEXTPACKET
class FilterTextPacket : public Packet {
#include "Extra/FilterTextPacketAPI.hpp"
public:
    /*0*/ virtual ~FilterTextPacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
    /*
    inline void write(class BinaryStream& a0) const{
        void (FilterTextPacket::*rv)(class BinaryStream&) const;
        *((void**)&rv) = dlsym("?write@FilterTextPacket@@UEBAXAEAVBinaryStream@@@Z");
        return (this->*rv)(std::forward<class BinaryStream&>(a0));
    }
    inline int \/*enum enum StreamReadResult*\/ _read(class ReadOnlyBinaryStream& a0){
        int \/*enum enum StreamReadResult*\/ (FilterTextPacket::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?_read@FilterTextPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    inline int \/*enum enum MinecraftPacketIds*\/ getId() const{
        int \/*enum enum MinecraftPacketIds*\/ (FilterTextPacket::*rv)() const;
        *((void**)&rv) = dlsym("?getId@FilterTextPacket@@UEBA?AW4MinecraftPacketIds@@XZ");
        return (this->*rv)();
    }
    inline std::string getName() const{
        std::string (FilterTextPacket::*rv)() const;
        *((void**)&rv) = dlsym("?getName@FilterTextPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    */

protected:

private:
};