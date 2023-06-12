#pragma once
#include "DuckModule.h"
#include "ECharacterAssetRangeList.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetRangeList : uint8 {
    Nearest,
    Near,
    Middle,
    Far,
    Farthest,
};

