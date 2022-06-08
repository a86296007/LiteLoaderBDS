// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PackError.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PackDiscoveryError : public PackError {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKDISCOVERYERROR
public:
    class PackDiscoveryError& operator=(class PackDiscoveryError const &) = delete;
    PackDiscoveryError(class PackDiscoveryError const &) = delete;
    PackDiscoveryError() = delete;
#endif

public:
    /*0*/ virtual ~PackDiscoveryError();
    /*2*/ virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const & getLocErrorMessageMap() const;
    /*3*/ virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const & getEventErrorMessageMap() const;
    MCAPI PackDiscoveryError(enum PackParseErrorType, std::vector<std::string> const &);

protected:

private:

};