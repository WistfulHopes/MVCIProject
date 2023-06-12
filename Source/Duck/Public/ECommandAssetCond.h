#pragma once
#include "DuckModule.h"
#include "ECommandAssetCond.generated.h"

UENUM(BlueprintType)
enum class ECommandAssetCond : uint8 {
    NONE,
    INCLUSIVE,
    EXCLUSIVE,
    PARALLEL,
    EQUAL,
};

