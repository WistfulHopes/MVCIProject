#pragma once
#include "DuckModule.h"
#include "ECharacterAssetMotOperation.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetMotOperation : uint8 {
    SOURCE_MOTION,
    BLEND_MOTION,
};

