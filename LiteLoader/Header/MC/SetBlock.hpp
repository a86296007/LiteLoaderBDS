// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_SETBLOCK
#include "Extra/SetBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_SETBLOCK
class SetBlock {
#include "Extra/SetBlockAPI.hpp"
public:
    /*0*/ virtual ~SetBlock();
    /*1*/ virtual std::string const& getName() const;
    /*2*/ virtual void executeAction(class RenderParams&) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection> >&, class Factory<class EventResponse> const&) const;
    /*
    inline void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection> >& a0, class Factory<class EventResponse> const& a1) const{
        void (SetBlock::*rv)(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection> >&, class Factory<class EventResponse> const&) const;
        *((void**)&rv) = dlsym("?buildSchema@SetBlock@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z");
        return (this->*rv)(std::forward<class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection> >&>(a0), std::forward<class Factory<class EventResponse> const&>(a1));
    }
    inline void executeAction(class RenderParams& a0) const{
        void (SetBlock::*rv)(class RenderParams&) const;
        *((void**)&rv) = dlsym("?executeAction@SetBlock@@UEBAXAEAVRenderParams@@@Z");
        return (this->*rv)(std::forward<class RenderParams&>(a0));
    }
    inline std::string const& getName() const{
        std::string const& (SetBlock::*rv)() const;
        *((void**)&rv) = dlsym("?getName@SetBlock@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static std::string const NameID;

protected:

private:
};