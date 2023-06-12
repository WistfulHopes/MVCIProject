#pragma once
#include "DuckModule.h"
#include "ECharacterAssetSoundOpeType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetSoundOpeType : uint8 {
    PLAYCUE,
    STOPCUE,
    VOLUMECONTROL,
    PITCHCONTROL,
    AISACCONTROL,
};

