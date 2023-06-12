#pragma once
#include "DuckModule.h"
#include "ECharacterAssetEventTargetType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetEventTargetType : uint8 {
    OWNER,
    OWNER_MASTER,
    RIVAL_MASTER,
    HIT_TARGET,
    LOCK_TARGET,
};

