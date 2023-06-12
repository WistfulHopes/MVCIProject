#pragma once
#include "DuckModule.h"
#include "ECharacterAssetEyeOffsetType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetEyeOffsetType : uint8 {
    LEFT,
    RIGHT,
    BOTH,
};

