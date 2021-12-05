// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BlockSourceListener.hpp"
#define EXTRA_INCLUDE_PART_MINECRAFTGAMETEST
#include "Extra/MinecraftGameTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_MINECRAFTGAMETEST
class MinecraftGameTest : public BlockSourceListener {
#include "Extra/MinecraftGameTestAPI.hpp"
public:
    /*0*/ virtual ~MinecraftGameTest();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void onSourceDestroyed(class BlockSource&);
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual void __unk_vfn_3();
    /*6*/ virtual void __unk_vfn_4();
    /*7*/ virtual void __unk_vfn_5();
    /*8*/ virtual void __unk_vfn_6();
    /*9*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_8();
    /*11*/ virtual void __unk_vfn_9();
    /*12*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_12();
    /*15*/ virtual void __unk_vfn_13();
    /*16*/ virtual void __unk_vfn_14();
    /*17*/ virtual void __unk_vfn_15();
    /*18*/ virtual void __unk_vfn_16();
    /*19*/ virtual void __unk_vfn_17();
    /*20*/ virtual void __unk_vfn_18();
    /*21*/ virtual void __unk_vfn_19();
    /*22*/ virtual void __unk_vfn_20();
    /*23*/ virtual void __unk_vfn_21();
    /*24*/ virtual void __unk_vfn_22();
    /*25*/ virtual void onLevelDestruction(std::string const&);
    /*
    inline void onLevelDestruction(std::string const& a0){
        void (MinecraftGameTest::*rv)(std::string const&);
        *((void**)&rv) = dlsym("?onLevelDestruction@MinecraftGameTest@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0));
    }
    */
    MCAPI void clearAllTests(class BlockSource&);
    MCAPI class gametest::GameTestRegistry& getRegistry();
    MCAPI class gametest::GameTestTicker& getTicker();
    MCAPI void loadExistingTests(class Level&);
    MCAPI void registerDefaultGameBatches(class Level&);
    MCAPI void registerNativeGameTests();
    MCAPI std::string runTest(std::string const&, class Dimension&, struct gametest::TestParameters const&);
    MCAPI std::string runTestAt(class BlockSource&, class BlockPos const&, class std::optional<enum Rotation>);
    MCAPI std::vector<class std::shared_ptr<class gametest::BaseGameTestInstance>> const& runTests(class Dimension&, struct gametest::TestParameters&&);

protected:

private:
    MCAPI void _runTestPreparation(class gametest::BaseGameTestFunction const&);
};