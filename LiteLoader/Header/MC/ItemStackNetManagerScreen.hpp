// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackNetManagerScreen {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKNETMANAGERSCREEN
public:
    class ItemStackNetManagerScreen& operator=(class ItemStackNetManagerScreen const &) = delete;
    ItemStackNetManagerScreen(class ItemStackNetManagerScreen const &) = delete;
    ItemStackNetManagerScreen() = delete;
#endif

public:
    MCAPI ItemStackNetManagerScreen(class EntityRegistry &);
    MCAPI class EntityContext & getEntity();
    MCAPI class EntityContext const & getEntity() const;

protected:

private:

};