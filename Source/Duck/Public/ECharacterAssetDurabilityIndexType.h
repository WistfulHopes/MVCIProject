#pragma once
#include "DuckModule.h"
#include "ECharacterAssetDurabilityIndexType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetDurabilityIndexType : uint8 {
    PARAM_0,
    PARAM_1,
    PARAM_2,
    PARAM_MAX UMETA(Hidden),
};

