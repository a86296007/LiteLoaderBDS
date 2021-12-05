// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_STRUCTUREPOOLELEMENT
#include "Extra/StructurePoolElementAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRUCTUREPOOLELEMENT
class StructurePoolElement {
#include "Extra/StructurePoolElementAPI.hpp"
public:
    /*0*/ virtual class BlockPos getSize(int /*enum enum Rotation*/) const;
    /*1*/ virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos, int /*enum enum Rotation*/) const;
    /*2*/ virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos, class LegacyStructureSettings&, class BlockSource*) const;
    /*3*/ virtual class BoundingBox getBoundingBox(class BlockPos, int /*enum enum Rotation*/) const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual bool place(class BlockSource&, class BlockPos, int /*enum enum Rotation*/, class BoundingBox, class Random&, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier> > > >&, class BlockPos) const;
    /*8*/ virtual void placeActors(class BlockSource&, class BlockPos, int /*enum enum Rotation*/, class Random&) const;
    /*9*/ virtual void handleJigsawBlock(class BlockSource&, class JigsawBlockInfo&, class LegacyStructureSettings&) const;
    /*10*/ virtual void handleDataMarker(class BlockSource&, class BlockPos, std::string, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier> > > >&) const;
    /*11*/ virtual void __unk_vfn_3();
    /*12*/ virtual ~StructurePoolElement();
    /*
    inline bool isValid() const{
        bool (StructurePoolElement::*rv)() const;
        *((void**)&rv) = dlsym("?isValid@StructurePoolElement@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline int \/*enum enum Projection*\/ getProjection() const{
        int \/*enum enum Projection*\/ (StructurePoolElement::*rv)() const;
        *((void**)&rv) = dlsym("?getProjection@StructurePoolElement@@UEBA?AW4Projection@@XZ");
        return (this->*rv)();
    }
    inline void setProjection(int \/*enum enum Projection*\/ a0){
        void (StructurePoolElement::*rv)(int \/*enum enum Projection*\/);
        *((void**)&rv) = dlsym("?setProjection@StructurePoolElement@@UEAAXW4Projection@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Projection*\/>(a0));
    }
    inline int \/*enum enum PostProcessSettings*\/ getPostProcessSettings() const{
        int \/*enum enum PostProcessSettings*\/ (StructurePoolElement::*rv)() const;
        *((void**)&rv) = dlsym("?getPostProcessSettings@StructurePoolElement@@UEBA?AW4PostProcessSettings@@XZ");
        return (this->*rv)();
    }
    inline class BoundingBox getBoundingBox(class BlockPos a0, int \/*enum enum Rotation*\/ a1) const{
        class BoundingBox (StructurePoolElement::*rv)(class BlockPos, int \/*enum enum Rotation*\/) const;
        *((void**)&rv) = dlsym("?getBoundingBox@StructurePoolElement@@UEBA?AVBoundingBox@@VBlockPos@@W4Rotation@@@Z");
        return (this->*rv)(std::forward<class BlockPos>(a0), std::forward<int \/*enum enum Rotation*\/>(a1));
    }
    inline std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos a0, class LegacyStructureSettings& a1, class BlockSource* a2) const{
        std::vector<class JigsawBlockInfo> (StructurePoolElement::*rv)(class BlockPos, class LegacyStructureSettings&, class BlockSource*) const;
        *((void**)&rv) = dlsym("?getJigsawMarkers@StructurePoolElement@@UEBA?AV?$vector@VJigsawBlockInfo@@V?$allocator@VJigsawBlockInfo@@@std@@@std@@VBlockPos@@AEAVLegacyStructureSettings@@PEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockPos>(a0), std::forward<class LegacyStructureSettings&>(a1), std::forward<class BlockSource*>(a2));
    }
    inline std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos a0, int \/*enum enum Rotation*\/ a1) const{
        std::vector<class JigsawBlockInfo> (StructurePoolElement::*rv)(class BlockPos, int \/*enum enum Rotation*\/) const;
        *((void**)&rv) = dlsym("?getJigsawMarkers@StructurePoolElement@@UEBA?AV?$vector@VJigsawBlockInfo@@V?$allocator@VJigsawBlockInfo@@@std@@@std@@VBlockPos@@W4Rotation@@@Z");
        return (this->*rv)(std::forward<class BlockPos>(a0), std::forward<int \/*enum enum Rotation*\/>(a1));
    }
    inline class BlockPos getSize(int \/*enum enum Rotation*\/ a0) const{
        class BlockPos (StructurePoolElement::*rv)(int \/*enum enum Rotation*\/) const;
        *((void**)&rv) = dlsym("?getSize@StructurePoolElement@@UEBA?AVBlockPos@@W4Rotation@@@Z");
        return (this->*rv)(std::forward<int \/*enum enum Rotation*\/>(a0));
    }
    inline void handleDataMarker(class BlockSource& a0, class BlockPos a1, std::string a2, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier> > > >& a3) const{
        void (StructurePoolElement::*rv)(class BlockSource&, class BlockPos, std::string, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier> > > >&) const;
        *((void**)&rv) = dlsym("?handleDataMarker@StructurePoolElement@@UEBAXAEAVBlockSource@@VBlockPos@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$unordered_map@VBlockPos@@V?$optional@UActorDefinitionIdentifier@@@std@@U?$hash@VBlockPos@@@3@U?$equal_to@VBlockPos@@@3@V?$allocator@U?$pair@$$CBVBlockPos@@V?$optional@UActorDefinitionIdentifier@@@std@@@std@@@3@@5@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos>(a1), std::forward<std::string>(a2), std::forward<class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier> > > >&>(a3));
    }
    inline void handleJigsawBlock(class BlockSource& a0, class JigsawBlockInfo& a1, class LegacyStructureSettings& a2) const{
        void (StructurePoolElement::*rv)(class BlockSource&, class JigsawBlockInfo&, class LegacyStructureSettings&) const;
        *((void**)&rv) = dlsym("?handleJigsawBlock@StructurePoolElement@@UEBAXAEAVBlockSource@@AEAVJigsawBlockInfo@@AEAVLegacyStructureSettings@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class JigsawBlockInfo&>(a1), std::forward<class LegacyStructureSettings&>(a2));
    }
    inline bool place(class BlockSource& a0, class BlockPos a1, int \/*enum enum Rotation*\/ a2, class BoundingBox a3, class Random& a4, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier> > > >& a5, class BlockPos a6) const{
        bool (StructurePoolElement::*rv)(class BlockSource&, class BlockPos, int \/*enum enum Rotation*\/, class BoundingBox, class Random&, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier> > > >&, class BlockPos) const;
        *((void**)&rv) = dlsym("?place@StructurePoolElement@@UEBA_NAEAVBlockSource@@VBlockPos@@W4Rotation@@VBoundingBox@@AEAVRandom@@AEAV?$unordered_map@VBlockPos@@V?$optional@UActorDefinitionIdentifier@@@std@@U?$hash@VBlockPos@@@3@U?$equal_to@VBlockPos@@@3@V?$allocator@U?$pair@$$CBVBlockPos@@V?$optional@UActorDefinitionIdentifier@@@std@@@std@@@3@@std@@1@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos>(a1), std::forward<int \/*enum enum Rotation*\/>(a2), std::forward<class BoundingBox>(a3), std::forward<class Random&>(a4), std::forward<class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier> > > >&>(a5), std::forward<class BlockPos>(a6));
    }
    inline void placeActors(class BlockSource& a0, class BlockPos a1, int \/*enum enum Rotation*\/ a2, class Random& a3) const{
        void (StructurePoolElement::*rv)(class BlockSource&, class BlockPos, int \/*enum enum Rotation*\/, class Random&) const;
        *((void**)&rv) = dlsym("?placeActors@StructurePoolElement@@UEBAXAEAVBlockSource@@VBlockPos@@W4Rotation@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos>(a1), std::forward<int \/*enum enum Rotation*\/>(a2), std::forward<class Random&>(a3));
    }
    */

protected:

private:
    MCAPI class StructurePoolElement::LazyTemplate const& _getTemplate() const;
};