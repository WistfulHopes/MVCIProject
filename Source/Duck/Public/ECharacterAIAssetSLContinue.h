#pragma once
#include "DuckModule.h"
#include "ECharacterAIAssetSLContinue.generated.h"

UENUM(BlueprintType)
enum class ECharacterAIAssetSLContinue : uint8 {
    SLC_ALL,
    SLC_HIT_GUARD,
    SLC_HIT_ONLY,
    SLC_MAX UMETA(Hidden),
};

