#pragma once
#include "DuckModule.h"
#include "ECharacterAssetBranchKeyLandingSound.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetBranchKeyLandingSound : uint8 {
    NOT_SPECIFIED,
    SHOT,
    BULLET,
    PLAYER,
    NO_SOUND,
};

