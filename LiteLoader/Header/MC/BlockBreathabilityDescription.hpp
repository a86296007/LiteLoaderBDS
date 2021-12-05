// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_BLOCKBREATHABILITYDESCRIPTION
#include "Extra/BlockBreathabilityDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKBREATHABILITYDESCRIPTION
class BlockBreathabilityDescription {
#include "Extra/BlockBreathabilityDescriptionAPI.hpp"
public:
    /*0*/ virtual ~BlockBreathabilityDescription();
    /*1*/ virtual std::string const& getName() const;
    /*2*/ virtual void initializeComponent(class EntityContext&) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription> >&, class BlockComponentFactory const&) const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);
    /*
    inline bool isNetworkComponent() const{
        bool (BlockBreathabilityDescription::*rv)() const;
        *((void**)&rv) = dlsym("?isNetworkComponent@BlockBreathabilityDescription@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class CompoundTag> buildNetworkTag() const{
        std::unique_ptr<class CompoundTag> (BlockBreathabilityDescription::*rv)() const;
        *((void**)&rv) = dlsym("?buildNetworkTag@BlockBreathabilityDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription> >& a0, class BlockComponentFactory const& a1) const{
        void (BlockBreathabilityDescription::*rv)(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription> >&, class BlockComponentFactory const&) const;
        *((void**)&rv) = dlsym("?buildSchema@BlockBreathabilityDescription@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z");
        return (this->*rv)(std::forward<class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription> >&>(a0), std::forward<class BlockComponentFactory const&>(a1));
    }
    inline std::string const& getName() const{
        std::string const& (BlockBreathabilityDescription::*rv)() const;
        *((void**)&rv) = dlsym("?getName@BlockBreathabilityDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline void initializeComponent(class EntityContext& a0) const{
        void (BlockBreathabilityDescription::*rv)(class EntityContext&) const;
        *((void**)&rv) = dlsym("?initializeComponent@BlockBreathabilityDescription@@UEBAXAEAVEntityContext@@@Z");
        return (this->*rv)(std::forward<class EntityContext&>(a0));
    }
    inline void initializeFromNetwork(class CompoundTag const& a0){
        void (BlockBreathabilityDescription::*rv)(class CompoundTag const&);
        *((void**)&rv) = dlsym("?initializeFromNetwork@BlockBreathabilityDescription@@UEAAXAEBVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0));
    }
    */
    MCAPI static std::string const NameID;

protected:

private:
};