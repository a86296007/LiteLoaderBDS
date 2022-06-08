// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SimpleRandom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLERANDOM
public:
    class SimpleRandom& operator=(class SimpleRandom const &) = delete;
    SimpleRandom(class SimpleRandom const &) = delete;
    SimpleRandom() = delete;
#endif

public:
    /*0*/ virtual ~SimpleRandom();
    /*1*/ virtual int nextInt();
    /*2*/ virtual int nextInt(int);
    /*3*/ virtual __int64 nextLong();
    /*4*/ virtual bool nextBoolean();
    /*5*/ virtual float nextFloat();
    /*6*/ virtual double nextDouble();
    /*7*/ virtual double nextGaussianDouble();
    /*8*/ virtual void consumeCount(unsigned int);
    /*9*/ virtual std::unique_ptr<class IRandom> fork();
    /*10*/ virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();

protected:

private:

};