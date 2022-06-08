// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptMessagePacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMESSAGEPACKET
public:
    class ScriptMessagePacket& operator=(class ScriptMessagePacket const &) = delete;
    ScriptMessagePacket(class ScriptMessagePacket const &) = delete;
#endif

public:
    /*0*/ virtual ~ScriptMessagePacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    MCAPI ScriptMessagePacket(std::string const &, std::string const &);
    MCAPI ScriptMessagePacket();
    MCAPI std::string const & getMessageId() const;
    MCAPI std::string const & getMessageValue() const;

protected:

private:

};