#pragma once
#include "DuckModule.h"
#include "ECharacterAssetSoundType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetSoundType : uint8 {
    SYSTEM,
    COMMON,
    CHARA_SE,
    CHARA_VOICE,
    FOOT,
};

