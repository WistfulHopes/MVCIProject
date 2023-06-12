#pragma once
#include "DuckModule.h"
#include "ECharacterAssetVfxType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetVfxType : uint8 {
    PARTICLE,
    PERSISTENT_VISION,
};

