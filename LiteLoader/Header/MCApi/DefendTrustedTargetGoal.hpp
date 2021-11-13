// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "NearestAttackableTargetGoal.hpp"
class DefendTrustedTargetGoal : public NearestAttackableTargetGoal {
public:
    virtual ~DefendTrustedTargetGoal();
    virtual bool canUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void unk_vfn_5();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

private:
    MCAPI struct ActorUniqueID _findTrustedTarget(class TrustComponent const&);
};