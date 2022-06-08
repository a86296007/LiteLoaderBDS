// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PackError {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKERROR
public:
    class PackError& operator=(class PackError const &) = delete;
    PackError() = delete;
#endif

public:
    /*0*/ virtual ~PackError();
    /*1*/ virtual std::string getLocErrorMessage() const;
    /*2*/ virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const & getLocErrorMessageMap() const = 0;
    /*3*/ virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const & getEventErrorMessageMap() const = 0;
    MCAPI PackError(enum PackErrorType, std::vector<std::string> const &);
    MCAPI PackError(class PackError const &);
    MCAPI std::vector<std::string> const & getErrorParameters() const;
    MCAPI std::string getEventErrorMessage() const;
    MCAPI void serialize(class Json::Value &);

protected:

private:

};