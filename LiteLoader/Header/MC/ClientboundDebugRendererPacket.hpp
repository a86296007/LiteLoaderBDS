// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_CLIENTBOUNDDEBUGRENDERERPACKET
#include "Extra/ClientboundDebugRendererPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_CLIENTBOUNDDEBUGRENDERERPACKET
class ClientboundDebugRendererPacket : public Packet {
#include "Extra/ClientboundDebugRendererPacketAPI.hpp"
public:
    /*0*/ virtual ~ClientboundDebugRendererPacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
    /*
    inline int \/*enum enum StreamReadResult*\/ _read(class ReadOnlyBinaryStream& a0){
        int \/*enum enum StreamReadResult*\/ (ClientboundDebugRendererPacket::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?_read@ClientboundDebugRendererPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    inline int \/*enum enum MinecraftPacketIds*\/ getId() const{
        int \/*enum enum MinecraftPacketIds*\/ (ClientboundDebugRendererPacket::*rv)() const;
        *((void**)&rv) = dlsym("?getId@ClientboundDebugRendererPacket@@UEBA?AW4MinecraftPacketIds@@XZ");
        return (this->*rv)();
    }
    inline std::string getName() const{
        std::string (ClientboundDebugRendererPacket::*rv)() const;
        *((void**)&rv) = dlsym("?getName@ClientboundDebugRendererPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline void write(class BinaryStream& a0) const{
        void (ClientboundDebugRendererPacket::*rv)(class BinaryStream&) const;
        *((void**)&rv) = dlsym("?write@ClientboundDebugRendererPacket@@UEBAXAEAVBinaryStream@@@Z");
        return (this->*rv)(std::forward<class BinaryStream&>(a0));
    }
    */

protected:

private:
};