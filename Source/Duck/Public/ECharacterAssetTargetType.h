#pragma once
#include "DuckModule.h"
#include "ECharacterAssetTargetType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetTargetType : uint8 {
    OWNER,
    RIVAL,
    HIT_TARGET,
    PARENT,
};

