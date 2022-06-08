// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WrittenBookItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WRITTENBOOKITEM
public:
    class WrittenBookItem& operator=(class WrittenBookItem const &) = delete;
    WrittenBookItem(class WrittenBookItem const &) = delete;
    WrittenBookItem() = delete;
#endif

public:
    /*0*/ virtual ~WrittenBookItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*46*/ virtual bool isGlint(class ItemStackBase const &) const;
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*55*/ virtual bool requiresInteract() const;
    /*56*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*62*/ virtual void __unk_vfn_62();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*91*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*110*/ virtual std::string getInteractText(class Player const &) const;
    MCAPI WrittenBookItem(std::string const &, int);
    MCAPI static int const MAX_GENERATION;
    MCAPI static int const MAX_PAGES;
    MCAPI static int const MAX_PAGE_LENGTH;
    MCAPI static int const MAX_TITLE_LENGTH;
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_AUTHOR;
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_GENERATION;
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_ID;
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGES;
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGE_PHOTO_NAME;
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGE_TEXT;
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_RESOLVED;
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_TITLE;
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_XUID;
    MCAPI static bool canBeCopied(class CompoundTag const *);
    MCAPI static int getGeneration(class CompoundTag const *);
    MCAPI static int getPageCount(class ItemStack const &);
    MCAPI static std::vector<struct PageContent> getPages(class ItemStack const &);

protected:

private:

};