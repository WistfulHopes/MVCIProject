#pragma once
#include "DuckModule.h"
#include "ECharacterAssetFacialType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetFacialType : uint8 {
    FACIAL_MOTION,
    EYE_UV_OFFSET,
    SOUND_FACIAL,
};

