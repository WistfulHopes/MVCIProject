#pragma once
#include "DuckModule.h"
#include "ECharacterAssetGimmickTargetBone.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetGimmickTargetBone : uint8 {
    OWNER,
    TARGET,
    HIT_TARGET,
};

