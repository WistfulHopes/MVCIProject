#pragma once
#include "DuckModule.h"
#include "ECharacterAssetCondType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetCondType : uint8 {
    NONE,
    INCLUSIVE,
    EXCLUSIVE,
    PARALLEL,
    EQUAL,
};

