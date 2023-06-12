#pragma once
#include "DuckModule.h"
#include "ECharacterAssetTargetCharaType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetTargetCharaType : uint8 {
    RIVAL,
    RIVAL_PARTNER,
    RIVAL_TEAM,
    OWNER,
    OWNER_PARTNER,
    OWNER_TEAM,
    HIT_TARGET,
    LOCK_TARGET,
    ANYONE,
};

