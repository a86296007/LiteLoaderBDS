// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "CommandOrigin.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_CLIENTAUTOMATIONCOMMANDORIGIN
#include "Extra/ClientAutomationCommandOriginAPI.hpp"
#undef EXTRA_INCLUDE_PART_CLIENTAUTOMATIONCOMMANDORIGIN
class ClientAutomationCommandOrigin : public CommandOrigin {
#include "Extra/ClientAutomationCommandOriginAPI.hpp"
public:
    /*0*/ virtual ~ClientAutomationCommandOrigin();
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
    /*18*/ virtual struct CommandOriginData toCommandOriginData() const;
    /*19*/ virtual void __unk_vfn_2();
    /*20*/ virtual void handleCommandOutputCallback(class Json::Value&&) const;
    /*21*/ virtual class CompoundTag serialize() const;
    /*22*/ virtual bool isValid() const;
    /*
    inline class Level* getLevel() const{
        class Level* (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getLevel@ClientAutomationCommandOrigin@@UEBAPEAVLevel@@XZ");
        return (this->*rv)();
    }
    inline class Actor* getEntity() const{
        class Actor* (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getEntity@ClientAutomationCommandOrigin@@UEBAPEAVActor@@XZ");
        return (this->*rv)();
    }
    inline class Dimension* getDimension() const{
        class Dimension* (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getDimension@ClientAutomationCommandOrigin@@UEBAPEAVDimension@@XZ");
        return (this->*rv)();
    }
    inline bool canUseCommandsWithoutCheatsEnabled() const{
        bool (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?canUseCommandsWithoutCheatsEnabled@ClientAutomationCommandOrigin@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isSelectorExpansionAllowed() const{
        bool (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?isSelectorExpansionAllowed@ClientAutomationCommandOrigin@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline int \/*enum enum CommandPermissionLevel*\/ getPermissionsLevel() const{
        int \/*enum enum CommandPermissionLevel*\/ (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getPermissionsLevel@ClientAutomationCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ");
        return (this->*rv)();
    }
    inline int \/*enum enum CommandOriginType*\/ getOriginType() const{
        int \/*enum enum CommandOriginType*\/ (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getOriginType@ClientAutomationCommandOrigin@@UEBA?AW4CommandOriginType@@XZ");
        return (this->*rv)();
    }
    inline std::string const& getRequestId() const{
        std::string const& (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getRequestId@ClientAutomationCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class CommandOrigin> clone() const{
        std::unique_ptr<class CommandOrigin> (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?clone@ClientAutomationCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline class BlockPos getBlockPosition() const{
        class BlockPos (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getBlockPosition@ClientAutomationCommandOrigin@@UEBA?AVBlockPos@@XZ");
        return (this->*rv)();
    }
    inline std::string getName() const{
        std::string (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getName@ClientAutomationCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline class Vec3 getWorldPosition() const{
        class Vec3 (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getWorldPosition@ClientAutomationCommandOrigin@@UEBA?AVVec3@@XZ");
        return (this->*rv)();
    }
    inline bool isValid() const{
        bool (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?isValid@ClientAutomationCommandOrigin@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline class CompoundTag serialize() const{
        class CompoundTag (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?serialize@ClientAutomationCommandOrigin@@UEBA?AVCompoundTag@@XZ");
        return (this->*rv)();
    }
    inline struct CommandOriginData toCommandOriginData() const{
        struct CommandOriginData (ClientAutomationCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?toCommandOriginData@ClientAutomationCommandOrigin@@UEBA?AUCommandOriginData@@XZ");
        return (this->*rv)();
    }
    */

protected:

private:
};