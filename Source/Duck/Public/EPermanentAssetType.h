#pragma once
#include "DuckModule.h"
#include "EPermanentAssetType.generated.h"

UENUM(BlueprintType)
enum class EPermanentAssetType : uint8 {
    PER_SYSTEM_CMN,
    PER_SYSTEM_FONT,
    PER_GAME_CMN,
    PER_GAME_FONT,
    PER_BATTLE_CMN,
    PER_BATTLE_FONT,
    PER_PLATFORM,
    PER_TYPE_MAX UMETA(Hidden),
    PER_MAX UMETA(Hidden),
};

