#pragma once
#include "DuckModule.h"
#include "ECharacterAssetPhysicsOverride.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetPhysicsOverride : uint8 {
    DEFAULT,
    FORCE_APPLY,
    FORCE_NON_APPLY,
};

