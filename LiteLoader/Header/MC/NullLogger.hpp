// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_NULLLOGGER
#include "Extra/NullLoggerAPI.hpp"
#undef EXTRA_INCLUDE_PART_NULLLOGGER
class NullLogger {
#include "Extra/NullLoggerAPI.hpp"
public:
    /*0*/ virtual ~NullLogger();
    /*
    inline void Logv(char const* a0, char* a1){
        void (NullLogger::*rv)(char const*, char*);
        *((void**)&rv) = dlsym("?Logv@NullLogger@@UEAAXPEBDPEAD@Z");
        return (this->*rv)(std::forward<char const*>(a0), std::forward<char*>(a1));
    }
    */
    MCAPI static class NullLogger instance;

protected:

private:
};