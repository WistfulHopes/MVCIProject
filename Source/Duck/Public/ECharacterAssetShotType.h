#pragma once
#include "DuckModule.h"
#include "ECharacterAssetShotType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetShotType : uint8 {
    NORMAL,
    BEAM,
    MODEL,
    DOUBLE,
    OUROBOROS,
    REALITY_GEM,
    REALITY_BEAM,
    REALITY_SURGE,
    PARTNER,
};

