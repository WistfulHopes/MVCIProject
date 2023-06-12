#pragma once
#include "DuckModule.h"
#include "ECollectSoundRetType.generated.h"

UENUM(BlueprintType)
enum class ECollectSoundRetType : uint8 {
    VALID,
    INVALID,
    NO_STORY_CLEAR,
    DLC_VOICE,
};

