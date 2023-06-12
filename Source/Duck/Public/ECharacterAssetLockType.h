#pragma once
#include "DuckModule.h"
#include "ECharacterAssetLockType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetLockType : uint8 {
    NORMAL,
    JOINT,
};

