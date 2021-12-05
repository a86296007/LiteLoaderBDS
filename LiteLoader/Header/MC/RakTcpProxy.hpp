// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "RakNet.hpp"
#define EXTRA_INCLUDE_PART_RAKTCPPROXY
#include "Extra/RakTcpProxyAPI.hpp"
#undef EXTRA_INCLUDE_PART_RAKTCPPROXY
class RakTcpProxy {
#include "Extra/RakTcpProxyAPI.hpp"
public:
    /*0*/ virtual ~RakTcpProxy();
    /*1*/ virtual bool start(unsigned short, unsigned short, unsigned short);
    /*2*/ virtual struct RakNet::SystemAddress connect(std::string const&, unsigned short);
    /*3*/ virtual void send(char const*, unsigned int, struct RakNet::SystemAddress);
    /*4*/ virtual void close(struct RakNet::SystemAddress);
    /*5*/ virtual bool packetsAvailable();
    /*6*/ virtual struct RakNet::Packet* nextPacket();
    /*7*/ virtual void deallocatePacket(struct RakNet::Packet*);
    /*8*/ virtual struct RakNet::SystemAddress nextCompletedConnectionAttempt();
    /*9*/ virtual struct RakNet::SystemAddress nextFailedConnectionAttempt();
    /*10*/ virtual struct RakNet::SystemAddress nextLostConnection();
    /*
    inline void close(struct RakNet::SystemAddress a0){
        void (RakTcpProxy::*rv)(struct RakNet::SystemAddress);
        *((void**)&rv) = dlsym("?close@RakTcpProxy@@UEAAXUSystemAddress@RakNet@@@Z");
        return (this->*rv)(std::forward<struct RakNet::SystemAddress>(a0));
    }
    inline struct RakNet::SystemAddress connect(std::string const& a0, unsigned short a1){
        struct RakNet::SystemAddress (RakTcpProxy::*rv)(std::string const&, unsigned short);
        *((void**)&rv) = dlsym("?connect@RakTcpProxy@@UEAA?AUSystemAddress@RakNet@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<unsigned short>(a1));
    }
    inline void deallocatePacket(struct RakNet::Packet* a0){
        void (RakTcpProxy::*rv)(struct RakNet::Packet*);
        *((void**)&rv) = dlsym("?deallocatePacket@RakTcpProxy@@UEAAXPEAUPacket@RakNet@@@Z");
        return (this->*rv)(std::forward<struct RakNet::Packet*>(a0));
    }
    inline struct RakNet::SystemAddress nextCompletedConnectionAttempt(){
        struct RakNet::SystemAddress (RakTcpProxy::*rv)();
        *((void**)&rv) = dlsym("?nextCompletedConnectionAttempt@RakTcpProxy@@UEAA?AUSystemAddress@RakNet@@XZ");
        return (this->*rv)();
    }
    inline struct RakNet::SystemAddress nextFailedConnectionAttempt(){
        struct RakNet::SystemAddress (RakTcpProxy::*rv)();
        *((void**)&rv) = dlsym("?nextFailedConnectionAttempt@RakTcpProxy@@UEAA?AUSystemAddress@RakNet@@XZ");
        return (this->*rv)();
    }
    inline struct RakNet::SystemAddress nextLostConnection(){
        struct RakNet::SystemAddress (RakTcpProxy::*rv)();
        *((void**)&rv) = dlsym("?nextLostConnection@RakTcpProxy@@UEAA?AUSystemAddress@RakNet@@XZ");
        return (this->*rv)();
    }
    inline struct RakNet::Packet* nextPacket(){
        struct RakNet::Packet* (RakTcpProxy::*rv)();
        *((void**)&rv) = dlsym("?nextPacket@RakTcpProxy@@UEAAPEAUPacket@RakNet@@XZ");
        return (this->*rv)();
    }
    inline bool packetsAvailable(){
        bool (RakTcpProxy::*rv)();
        *((void**)&rv) = dlsym("?packetsAvailable@RakTcpProxy@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void send(char const* a0, unsigned int a1, struct RakNet::SystemAddress a2){
        void (RakTcpProxy::*rv)(char const*, unsigned int, struct RakNet::SystemAddress);
        *((void**)&rv) = dlsym("?send@RakTcpProxy@@UEAAXPEBDIUSystemAddress@RakNet@@@Z");
        return (this->*rv)(std::forward<char const*>(a0), std::forward<unsigned int>(a1), std::forward<struct RakNet::SystemAddress>(a2));
    }
    inline bool start(unsigned short a0, unsigned short a1, unsigned short a2){
        bool (RakTcpProxy::*rv)(unsigned short, unsigned short, unsigned short);
        *((void**)&rv) = dlsym("?start@RakTcpProxy@@UEAA_NGGG@Z");
        return (this->*rv)(std::forward<unsigned short>(a0), std::forward<unsigned short>(a1), std::forward<unsigned short>(a2));
    }
    */

protected:

private:
};