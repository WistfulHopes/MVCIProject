#pragma once
#include "DuckModule.h"
#include "ECharacterAssetVfxConditionFlag.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetVfxConditionFlag : uint8 {
    ONE_SHOT,
    LOOP,
};

