// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_LEVELDBWRITABLEFILE
#include "Extra/LevelDbWritableFileAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEVELDBWRITABLEFILE
class LevelDbWritableFile {
#include "Extra/LevelDbWritableFileAPI.hpp"
public:
    /*0*/ virtual ~LevelDbWritableFile();
    /*1*/ virtual class leveldb::Status Append(class leveldb::Slice const&);
    /*2*/ virtual class leveldb::Status Close();
    /*3*/ virtual class leveldb::Status Flush();
    /*4*/ virtual class leveldb::Status Sync();
    /*
    inline class leveldb::Status Append(class leveldb::Slice const& a0){
        class leveldb::Status (LevelDbWritableFile::*rv)(class leveldb::Slice const&);
        *((void**)&rv) = dlsym("?Append@LevelDbWritableFile@@UEAA?AVStatus@leveldb@@AEBVSlice@3@@Z");
        return (this->*rv)(std::forward<class leveldb::Slice const&>(a0));
    }
    inline class leveldb::Status Close(){
        class leveldb::Status (LevelDbWritableFile::*rv)();
        *((void**)&rv) = dlsym("?Close@LevelDbWritableFile@@UEAA?AVStatus@leveldb@@XZ");
        return (this->*rv)();
    }
    inline class leveldb::Status Flush(){
        class leveldb::Status (LevelDbWritableFile::*rv)();
        *((void**)&rv) = dlsym("?Flush@LevelDbWritableFile@@UEAA?AVStatus@leveldb@@XZ");
        return (this->*rv)();
    }
    inline class leveldb::Status Sync(){
        class leveldb::Status (LevelDbWritableFile::*rv)();
        *((void**)&rv) = dlsym("?Sync@LevelDbWritableFile@@UEAA?AVStatus@leveldb@@XZ");
        return (this->*rv)();
    }
    */

protected:

private:
};