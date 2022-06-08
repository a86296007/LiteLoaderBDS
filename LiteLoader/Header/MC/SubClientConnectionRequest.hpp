// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "persona.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SubClientConnectionRequest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCLIENTCONNECTIONREQUEST
public:
    class SubClientConnectionRequest& operator=(class SubClientConnectionRequest const &) = delete;
    SubClientConnectionRequest() = delete;
#endif

public:
    MCAPI SubClientConnectionRequest(class SubClientConnectionRequest const &);
    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const;
    MCAPI std::string getArmSize() const;
    MCAPI std::vector<unsigned char> getCapeData() const;
    MCAPI std::string getCapeId() const;
    MCAPI unsigned short getCapeImageHeight() const;
    MCAPI unsigned short getCapeImageWidth() const;
    MCAPI class Certificate const * getCertificate() const;
    MCAPI unsigned __int64 getClientRandomId() const;
    MCAPI std::string getDeviceId() const;
    MCAPI enum BuildPlatform getDeviceOS() const;
    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const;
    MCAPI class std::unordered_map<enum persona::PieceType, class TintMapColor, struct std::hash<enum persona::PieceType>, struct std::equal_to<enum persona::PieceType>, class std::allocator<struct std::pair<enum persona::PieceType const, class TintMapColor>>> getPieceTintColors() const;
    MCAPI std::string getPlatformId() const;
    MCAPI std::string getPlatformOfflineId() const;
    MCAPI std::string getPlatformOnlineId() const;
    MCAPI std::string getPlayFabId() const;
    MCAPI std::string getSelfSignedId() const;
    MCAPI std::string getSkinAnimationData() const;
    MCAPI class mce::Color getSkinColor() const;
    MCAPI std::vector<unsigned char> getSkinData() const;
    MCAPI std::string getSkinGeometry() const;
    MCAPI class SemVersion getSkinGeometryEngineVersion() const;
    MCAPI std::string getSkinId() const;
    MCAPI unsigned short getSkinImageHeight() const;
    MCAPI unsigned short getSkinImageWidth() const;
    MCAPI std::string getSkinResourcePatch() const;
    MCAPI std::string getThirdPartyName() const;
    MCAPI bool isCapeOnClassicSkin() const;
    MCAPI bool isPersonaSkin() const;
    MCAPI bool isPremiumSkin() const;
    MCAPI bool isPrimaryUser() const;
    MCAPI bool isThirdPartyNameOnly() const;
    MCAPI std::string toString();
    MCAPI bool verify(std::vector<std::string> const &, __int64);
    MCAPI bool verifySelfSigned();
    MCAPI ~SubClientConnectionRequest();
    MCAPI static class SubClientConnectionRequest fromString(std::string const &);

protected:

private:
    MCAPI SubClientConnectionRequest(std::unique_ptr<class WebToken>, std::string const &);
    MCAPI std::unique_ptr<class Certificate> validate(std::unique_ptr<class Certificate>, __int64) const;

};