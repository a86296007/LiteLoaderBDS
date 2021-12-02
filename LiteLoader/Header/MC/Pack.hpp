// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_PACK
#include "Extra/PackAPI.hpp"
#undef EXTRA_INCLUDE_PART_PACK
class Pack {
#include "Extra/PackAPI.hpp"
public:
    /*0*/ virtual ~Pack();

public:
    MCAPI class PackManifest const& getManifest() const;
    MCAPI void move(class Pack&&);
    MCAPI void notifyDeleted();

    MCAPI static std::unique_ptr<class Pack> createPack(class ResourceLocation const&, enum PackType, enum PackOrigin, class IPackManifestFactory&, class IContentKeyProvider const&, class PackSourceReport*);
    MCAPI static std::unique_ptr<class PackMetadata> createPackMetadata(enum PackType, class PackManifest&, class PackAccessStrategy const&, class PackReport&);

private:
    MCAPI void _loadLocalizationFiles();

    MCAPI static class Core::PathBuffer<std::string> const EDUCATION_METADATA_FILE;
};