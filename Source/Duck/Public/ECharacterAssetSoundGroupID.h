#pragma once
#include "DuckModule.h"
#include "ECharacterAssetSoundGroupID.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetSoundGroupID : uint8 {
    DEFAULT,
    CHANGESTATE,
    CHANGEACTION,
    STUN,
};

