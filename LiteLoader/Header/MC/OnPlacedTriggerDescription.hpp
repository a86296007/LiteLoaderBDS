// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Types.hpp"
#define EXTRA_INCLUDE_PART_ONPLACEDTRIGGERDESCRIPTION
#include "Extra/OnPlacedTriggerDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_ONPLACEDTRIGGERDESCRIPTION
class OnPlacedTriggerDescription : public BlockTriggerDescription<struct OnPlacedTrigger> {
#include "Extra/OnPlacedTriggerDescriptionAPI.hpp"
public:
    /*0*/ virtual ~OnPlacedTriggerDescription();
    /*1*/ virtual std::string const& getName() const;
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual void unk_vfn_6();
    /*7*/ virtual ~OnPlacedTriggerDescription();
    /*8*/ virtual void unk_vfn_8();

public:
    MCAPI static std::string const NameID;
};