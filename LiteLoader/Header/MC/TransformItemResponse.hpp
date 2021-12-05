// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_TRANSFORMITEMRESPONSE
#include "Extra/TransformItemResponseAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRANSFORMITEMRESPONSE
class TransformItemResponse {
#include "Extra/TransformItemResponseAPI.hpp"
public:
    /*0*/ virtual ~TransformItemResponse();
    /*1*/ virtual std::string const& getName() const;
    /*2*/ virtual void executeAction(class RenderParams&) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection> >&, class Factory<class EventResponse> const&) const;
    /*
    inline void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection> >& a0, class Factory<class EventResponse> const& a1) const{
        void (TransformItemResponse::*rv)(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection> >&, class Factory<class EventResponse> const&) const;
        *((void**)&rv) = dlsym("?buildSchema@TransformItemResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z");
        return (this->*rv)(std::forward<class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection> >&>(a0), std::forward<class Factory<class EventResponse> const&>(a1));
    }
    inline void executeAction(class RenderParams& a0) const{
        void (TransformItemResponse::*rv)(class RenderParams&) const;
        *((void**)&rv) = dlsym("?executeAction@TransformItemResponse@@UEBAXAEAVRenderParams@@@Z");
        return (this->*rv)(std::forward<class RenderParams&>(a0));
    }
    inline std::string const& getName() const{
        std::string const& (TransformItemResponse::*rv)() const;
        *((void**)&rv) = dlsym("?getName@TransformItemResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static std::string const NameID;

protected:

private:
};