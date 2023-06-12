#pragma once
#include "DuckModule.h"
#include "ECharacterAssetUParamIndexType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetUParamIndexType : uint8 {
    PARAM_0,
    PARAM_1,
    PARAM_2,
    PARAM_3,
    PARAM_MAX UMETA(Hidden),
};

