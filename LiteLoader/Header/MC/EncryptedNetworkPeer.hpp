// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "NetworkPeer.hpp"
#define EXTRA_INCLUDE_PART_ENCRYPTEDNETWORKPEER
#include "Extra/EncryptedNetworkPeerAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENCRYPTEDNETWORKPEER
class EncryptedNetworkPeer : public NetworkPeer {
#include "Extra/EncryptedNetworkPeerAPI.hpp"
public:
    /*0*/ virtual ~EncryptedNetworkPeer();
    /*1*/ virtual void sendPacket(std::string const&, int /*enum enum NetworkPeer::Reliability*/, int, unsigned short, int /*enum enum Compressibility*/);
    /*2*/ virtual int /*enum enum NetworkPeer::DataStatus*/ receivePacket(std::string&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > > > const&);
    /*3*/ virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
    /*
    inline struct NetworkPeer::NetworkStatus getNetworkStatus() const{
        struct NetworkPeer::NetworkStatus (EncryptedNetworkPeer::*rv)() const;
        *((void**)&rv) = dlsym("?getNetworkStatus@EncryptedNetworkPeer@@UEBA?AUNetworkStatus@NetworkPeer@@XZ");
        return (this->*rv)();
    }
    inline int \/*enum enum NetworkPeer::DataStatus*\/ receivePacket(std::string& a0, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > > > const& a1){
        int \/*enum enum NetworkPeer::DataStatus*\/ (EncryptedNetworkPeer::*rv)(std::string&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > > > const&);
        *((void**)&rv) = dlsym("?receivePacket@EncryptedNetworkPeer@@UEAA?AW4DataStatus@NetworkPeer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@5@@Z");
        return (this->*rv)(std::forward<std::string&>(a0), std::forward<class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > > > const&>(a1));
    }
    inline void sendPacket(std::string const& a0, int \/*enum enum NetworkPeer::Reliability*\/ a1, int a2, unsigned short a3, int \/*enum enum Compressibility*\/ a4){
        void (EncryptedNetworkPeer::*rv)(std::string const&, int \/*enum enum NetworkPeer::Reliability*\/, int, unsigned short, int \/*enum enum Compressibility*\/);
        *((void**)&rv) = dlsym("?sendPacket@EncryptedNetworkPeer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Reliability@NetworkPeer@@HGW4Compressibility@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<int \/*enum enum NetworkPeer::Reliability*\/>(a1), std::forward<int>(a2), std::forward<unsigned short>(a3), std::forward<int \/*enum enum Compressibility*\/>(a4));
    }
    */
    MCAPI void enableEncryption(std::string const&);

protected:

private:
};