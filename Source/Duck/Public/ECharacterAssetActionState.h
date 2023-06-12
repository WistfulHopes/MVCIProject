#pragma once
#include "DuckModule.h"
#include "ECharacterAssetActionState.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetActionState : uint8 {
    STAND,
    CROUCH,
    AIR,
    DOWN,
    BOUND,
};

