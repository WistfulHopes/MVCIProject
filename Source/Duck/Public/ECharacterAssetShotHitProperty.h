#pragma once
#include "DuckModule.h"
#include "ECharacterAssetShotHitProperty.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetShotHitProperty : uint8 {
    HIT_ENERGY,
    HIT_OBJECT,
    HIT_MAN,
};

