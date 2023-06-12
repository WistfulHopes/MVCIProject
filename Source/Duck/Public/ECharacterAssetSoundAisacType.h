#pragma once
#include "DuckModule.h"
#include "ECharacterAssetSoundAisacType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetSoundAisacType : uint8 {
    PAN,
    PITCH,
    VOLUME,
    PAN3D,
    EQUALIZER,
    REVERB,
    PAN_HUD,
};

