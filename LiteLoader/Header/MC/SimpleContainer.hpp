// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Container.hpp"
#define EXTRA_INCLUDE_PART_SIMPLECONTAINER
#include "Extra/SimpleContainerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SIMPLECONTAINER
class SimpleContainer : public Container {
#include "Extra/SimpleContainerAPI.hpp"
public:
    /*0*/ virtual ~SimpleContainer();
    /*1*/ virtual void init();
    /*2*/ virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const&)>);
    /*3*/ virtual class ItemStack const& getItem(int) const;
    /*4*/ virtual void setItem(int, class ItemStack const&);
    /*5*/ virtual void __unk_vfn_0();
    /*6*/ virtual int getMaxStackSize() const;
    /*7*/ virtual void startOpen(class Player&);
    /*8*/ virtual void stopOpen(class Player&);
    /*9*/ virtual void __unk_vfn_1();
    /*10*/ virtual void __unk_vfn_2();
    /*11*/ virtual void __unk_vfn_3();
    /*
    inline void stopOpen(class Player& a0){
        void (SimpleContainer::*rv)(class Player&);
        *((void**)&rv) = dlsym("?stopOpen@SimpleContainer@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0));
    }
    inline void startOpen(class Player& a0){
        void (SimpleContainer::*rv)(class Player&);
        *((void**)&rv) = dlsym("?startOpen@SimpleContainer@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0));
    }
    inline int getMaxStackSize() const{
        int (SimpleContainer::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxStackSize@SimpleContainer@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getContainerSize() const{
        int (SimpleContainer::*rv)() const;
        *((void**)&rv) = dlsym("?getContainerSize@SimpleContainer@@UEBAHXZ");
        return (this->*rv)();
    }
    inline class ItemStack const& getItem(int a0) const{
        class ItemStack const& (SimpleContainer::*rv)(int) const;
        *((void**)&rv) = dlsym("?getItem@SimpleContainer@@UEBAAEBVItemStack@@H@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline void serverInitItemStackIds(int a0, int a1, class std::function<void (int, class ItemStack const&)> a2){
        void (SimpleContainer::*rv)(int, int, class std::function<void (int, class ItemStack const&)>);
        *((void**)&rv) = dlsym("?serverInitItemStackIds@SimpleContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1), std::forward<class std::function<void (int, class ItemStack const&)>>(a2));
    }
    inline void setItem(int a0, class ItemStack const& a1){
        void (SimpleContainer::*rv)(int, class ItemStack const&);
        *((void**)&rv) = dlsym("?setItem@SimpleContainer@@UEAAXHAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const&>(a1));
    }
    */

protected:

private:
};