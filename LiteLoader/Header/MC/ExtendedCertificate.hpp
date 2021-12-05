// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_EXTENDEDCERTIFICATE
#include "Extra/ExtendedCertificateAPI.hpp"
#undef EXTRA_INCLUDE_PART_EXTENDEDCERTIFICATE
class ExtendedCertificate {
#include "Extra/ExtendedCertificateAPI.hpp"
public:
    MCAPI static class mce::UUID getIdentity(class Certificate const&);
    MCAPI static std::string getIdentityName(class Certificate const&);
    MCAPI static std::string getXuid(class Certificate const&);
    MCAPI static std::string getXuid(class Certificate const*);

protected:

private:
};