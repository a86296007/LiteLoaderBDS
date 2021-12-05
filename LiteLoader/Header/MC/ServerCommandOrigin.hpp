// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "CommandOrigin.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_SERVERCOMMANDORIGIN
#include "Extra/ServerCommandOriginAPI.hpp"
#undef EXTRA_INCLUDE_PART_SERVERCOMMANDORIGIN
class ServerCommandOrigin : public CommandOrigin {
#include "Extra/ServerCommandOriginAPI.hpp"
public:
    /*0*/ virtual ~ServerCommandOrigin();
    /*1*/ virtual std::string const& getRequestId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual class BlockPos getBlockPosition() const;
    /*4*/ virtual class Vec3 getWorldPosition() const;
    /*5*/ virtual class Level* getLevel() const;
    /*6*/ virtual class Dimension* getDimension() const;
    /*7*/ virtual class Actor* getEntity() const;
    /*8*/ virtual int /*enum enum CommandPermissionLevel*/ getPermissionsLevel() const;
    /*9*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*10*/ virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /*11*/ virtual class std::optional<class Vec3> getCursorHitPos() const;
    /*12*/ virtual bool canUseAbility(int /*enum enum AbilitiesIndex*/) const;
    /*13*/ virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /*14*/ virtual bool isSelectorExpansionAllowed() const;
    /*15*/ virtual unsigned char getSourceSubId() const;
    /*16*/ virtual void __unk_vfn_0();
    /*17*/ virtual void __unk_vfn_1();
    /*18*/ virtual void __unk_vfn_2();
    /*19*/ virtual void handleCommandOutputCallback(class Json::Value&&) const;
    /*20*/ virtual class CompoundTag serialize() const;
    /*21*/ virtual bool isValid() const;
    /*
    inline class Actor* getEntity() const{
        class Actor* (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getEntity@ServerCommandOrigin@@UEBAPEAVActor@@XZ");
        return (this->*rv)();
    }
    inline bool isSelectorExpansionAllowed() const{
        bool (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?isSelectorExpansionAllowed@ServerCommandOrigin@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canUseCommandsWithoutCheatsEnabled() const{
        bool (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?canUseCommandsWithoutCheatsEnabled@ServerCommandOrigin@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isValid() const{
        bool (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?isValid@ServerCommandOrigin@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline std::string const& getRequestId() const{
        std::string const& (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getRequestId@ServerCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline int \/*enum enum CommandOriginType*\/ getOriginType() const{
        int \/*enum enum CommandOriginType*\/ (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getOriginType@ServerCommandOrigin@@UEBA?AW4CommandOriginType@@XZ");
        return (this->*rv)();
    }
    inline int \/*enum enum CommandPermissionLevel*\/ getPermissionsLevel() const{
        int \/*enum enum CommandPermissionLevel*\/ (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getPermissionsLevel@ServerCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ");
        return (this->*rv)();
    }
    inline class Level* getLevel() const{
        class Level* (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getLevel@ServerCommandOrigin@@UEBAPEAVLevel@@XZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class CommandOrigin> clone() const{
        std::unique_ptr<class CommandOrigin> (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?clone@ServerCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline class BlockPos getBlockPosition() const{
        class BlockPos (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getBlockPosition@ServerCommandOrigin@@UEBA?AVBlockPos@@XZ");
        return (this->*rv)();
    }
    inline class Dimension* getDimension() const{
        class Dimension* (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getDimension@ServerCommandOrigin@@UEBAPEAVDimension@@XZ");
        return (this->*rv)();
    }
    inline std::string getName() const{
        std::string (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getName@ServerCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline class Vec3 getWorldPosition() const{
        class Vec3 (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getWorldPosition@ServerCommandOrigin@@UEBA?AVVec3@@XZ");
        return (this->*rv)();
    }
    inline class CompoundTag serialize() const{
        class CompoundTag (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?serialize@ServerCommandOrigin@@UEBA?AVCompoundTag@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static std::unique_ptr<class ServerCommandOrigin> load(class CompoundTag const&, class ServerLevel&);

protected:

private:
};