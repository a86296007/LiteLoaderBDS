// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_APPPLATFORMLISTENER
#include "Extra/AppPlatformListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_APPPLATFORMLISTENER
class AppPlatformListener {
#include "Extra/AppPlatformListenerAPI.hpp"
public:
    /*0*/ virtual ~AppPlatformListener();
    /*
    inline void onResizeEnd(){
        void (AppPlatformListener::*rv)();
        *((void**)&rv) = dlsym("?onResizeEnd@AppPlatformListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onAppPreSuspended(){
        void (AppPlatformListener::*rv)();
        *((void**)&rv) = dlsym("?onAppPreSuspended@AppPlatformListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onResizeBegin(){
        void (AppPlatformListener::*rv)();
        *((void**)&rv) = dlsym("?onResizeBegin@AppPlatformListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onAppFocusGained(){
        void (AppPlatformListener::*rv)();
        *((void**)&rv) = dlsym("?onAppFocusGained@AppPlatformListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onAppPaused(){
        void (AppPlatformListener::*rv)();
        *((void**)&rv) = dlsym("?onAppPaused@AppPlatformListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onAppUnpaused(){
        void (AppPlatformListener::*rv)();
        *((void**)&rv) = dlsym("?onAppUnpaused@AppPlatformListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onOperationModeChanged(int \/*enum enum OperationMode*\/ a0){
        void (AppPlatformListener::*rv)(int \/*enum enum OperationMode*\/);
        *((void**)&rv) = dlsym("?onOperationModeChanged@AppPlatformListener@@UEAAXW4OperationMode@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum OperationMode*\/>(a0));
    }
    inline void onAppFocusLost(){
        void (AppPlatformListener::*rv)();
        *((void**)&rv) = dlsym("?onAppFocusLost@AppPlatformListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onPushNotificationReceived(class PushNotificationMessage const& a0){
        void (AppPlatformListener::*rv)(class PushNotificationMessage const&);
        *((void**)&rv) = dlsym("?onPushNotificationReceived@AppPlatformListener@@UEAAXAEBVPushNotificationMessage@@@Z");
        return (this->*rv)(std::forward<class PushNotificationMessage const&>(a0));
    }
    inline void onPerformanceModeChanged(bool a0){
        void (AppPlatformListener::*rv)(bool);
        *((void**)&rv) = dlsym("?onPerformanceModeChanged@AppPlatformListener@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline void onAppSuspended(){
        void (AppPlatformListener::*rv)();
        *((void**)&rv) = dlsym("?onAppSuspended@AppPlatformListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onLowMemory(){
        void (AppPlatformListener::*rv)();
        *((void**)&rv) = dlsym("?onLowMemory@AppPlatformListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onDeviceLost(){
        void (AppPlatformListener::*rv)();
        *((void**)&rv) = dlsym("?onDeviceLost@AppPlatformListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onAppTerminated(){
        void (AppPlatformListener::*rv)();
        *((void**)&rv) = dlsym("?onAppTerminated@AppPlatformListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onAppResumed(){
        void (AppPlatformListener::*rv)();
        *((void**)&rv) = dlsym("?onAppResumed@AppPlatformListener@@UEAAXXZ");
        return (this->*rv)();
    }
    */
    MCAPI void initListener(float);
    MCAPI void terminate();

protected:

private:
};