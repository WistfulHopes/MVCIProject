#pragma once
#include "DuckModule.h"
#include "EChargeAssetCond.generated.h"

UENUM(BlueprintType)
enum class EChargeAssetCond : uint8 {
    NONE,
    INCLUSIVE,
    EXCLUSIVE,
    PARALLEL,
    EQUAL,
};

