#pragma once
#include "DuckModule.h"
#include "ECharacterAssetMergeTarget.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetMergeTarget : uint8 {
    OBJECT,
    CAMERA,
    FACIAL,
};

