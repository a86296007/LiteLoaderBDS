// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IronGolem : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IRONGOLEM
public:
    class IronGolem& operator=(class IronGolem const &) = delete;
    IronGolem(class IronGolem const &) = delete;
    IronGolem() = delete;
#endif

public:
    /*14*/ virtual ~IronGolem();
    /*40*/ virtual void __unk_vfn_40();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*251*/ virtual void die(class ActorDamageSource const &);
    /*259*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*261*/ virtual void __unk_vfn_261();
    /*267*/ virtual void _playStepSound(class BlockPos const &, class Block const &);
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*288*/ virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /*294*/ virtual void aiStep();
    /*307*/ virtual void __unk_vfn_307();
    /*310*/ virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    /*311*/ virtual void __unk_vfn_311();
    /*345*/ virtual void __unk_vfn_345();
    /*359*/ virtual void __unk_vfn_359();
    /*
    inline bool useNewAi() const{
        bool (IronGolem::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@IronGolem@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI IronGolem(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI int getOfferFlowerTick() const;
    MCAPI void offerFlower(bool);

protected:

private:

};