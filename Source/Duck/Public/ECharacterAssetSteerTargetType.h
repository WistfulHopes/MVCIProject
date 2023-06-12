#pragma once
#include "DuckModule.h"
#include "ECharacterAssetSteerTargetType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetSteerTargetType : uint8 {
    SELF,
    PARENT,
    RIVAL,
    SCREEN,
    NEAR_SHOT,
    HIT_TARGET,
    LOCK_TARGET,
    WORLD,
    RIVAL_COLLISION,
    RIVAL_MASTER,
    RIVAL_PARTNER,
    OWNER_MASTER,
    OWNER_PARTNER,
    WORLD_MIRROR,
    HIT_TARGET_COLLISION,
};

