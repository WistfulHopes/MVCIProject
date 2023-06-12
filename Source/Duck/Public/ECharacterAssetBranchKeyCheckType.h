#pragma once
#include "DuckModule.h"
#include "ECharacterAssetBranchKeyCheckType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetBranchKeyCheckType : uint8 {
    DIRECT_OFF,
    DIRECT,
    PRESS,
    RELEASE,
    DIRECT_EXCLUSIVE,
    PRESS_EXCLUSIVE,
    RELEASE_EXCLUSIVE,
    UNKNOWN,
};

