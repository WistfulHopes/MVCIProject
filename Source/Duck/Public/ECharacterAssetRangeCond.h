#pragma once
#include "DuckModule.h"
#include "ECharacterAssetRangeCond.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetRangeCond : uint8 {
    NONE,
    X_GE,
    X_LE,
    Y_GE,
    Y_LE,
    Z_GE,
    Z_LE,
};

