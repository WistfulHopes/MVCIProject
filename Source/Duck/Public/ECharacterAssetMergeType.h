#pragma once
#include "DuckModule.h"
#include "ECharacterAssetMergeType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetMergeType : uint8 {
    PREVIOUS,
    NEXT,
    STARTSTATE,
    ENDSTATE,
    SMOOTH,
};

