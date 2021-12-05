// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Tag.hpp"
#define EXTRA_INCLUDE_PART_INT64TAG
#include "Extra/Int64TagAPI.hpp"
#undef EXTRA_INCLUDE_PART_INT64TAG
class Int64Tag : public Tag {
#include "Extra/Int64TagAPI.hpp"
public:
    /*0*/ virtual ~Int64Tag();
    /*1*/ virtual void deleteChildren();
    /*2*/ virtual void write(class IDataOutput&) const;
    /*3*/ virtual void load(class IDataInput&);
    /*4*/ virtual std::string toString() const;
    /*5*/ virtual void __unk_vfn_0();
    /*6*/ virtual bool equals(class Tag const&) const;
    /*7*/ virtual std::unique_ptr<class Tag> copy() const;
    /*8*/ virtual unsigned __int64 hash() const;
    /*
    inline int \/*enum enum Tag::Type*\/ getId() const{
        int \/*enum enum Tag::Type*\/ (Int64Tag::*rv)() const;
        *((void**)&rv) = dlsym("?getId@Int64Tag@@UEBA?AW4Type@Tag@@XZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class Tag> copy() const{
        std::unique_ptr<class Tag> (Int64Tag::*rv)() const;
        *((void**)&rv) = dlsym("?copy@Int64Tag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline bool equals(class Tag const& a0) const{
        bool (Int64Tag::*rv)(class Tag const&) const;
        *((void**)&rv) = dlsym("?equals@Int64Tag@@UEBA_NAEBVTag@@@Z");
        return (this->*rv)(std::forward<class Tag const&>(a0));
    }
    inline unsigned __int64 hash() const{
        unsigned __int64 (Int64Tag::*rv)() const;
        *((void**)&rv) = dlsym("?hash@Int64Tag@@UEBA_KXZ");
        return (this->*rv)();
    }
    inline void load(class IDataInput& a0){
        void (Int64Tag::*rv)(class IDataInput&);
        *((void**)&rv) = dlsym("?load@Int64Tag@@UEAAXAEAVIDataInput@@@Z");
        return (this->*rv)(std::forward<class IDataInput&>(a0));
    }
    inline std::string toString() const{
        std::string (Int64Tag::*rv)() const;
        *((void**)&rv) = dlsym("?toString@Int64Tag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline void write(class IDataOutput& a0) const{
        void (Int64Tag::*rv)(class IDataOutput&) const;
        *((void**)&rv) = dlsym("?write@Int64Tag@@UEBAXAEAVIDataOutput@@@Z");
        return (this->*rv)(std::forward<class IDataOutput&>(a0));
    }
    */

protected:

private:
};