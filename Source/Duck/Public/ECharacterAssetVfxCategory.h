#pragma once
#include "DuckModule.h"
#include "ECharacterAssetVfxCategory.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetVfxCategory : uint8 {
    COMMON,
    FIELD,
    CHARA,
    FIELD_COMMON,
};

