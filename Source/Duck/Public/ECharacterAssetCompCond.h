#pragma once
#include "DuckModule.h"
#include "ECharacterAssetCompCond.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetCompCond : uint8 {
    EQ,
    NE,
    LT,
    LE,
    GT,
    GE,
};

