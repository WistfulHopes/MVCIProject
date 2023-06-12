#pragma once
#include "DuckModule.h"
#include "ECharacterAssetCollisionType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetCollisionType : uint8 {
    NONE,
    HEAD,
    BODY,
    LEG,
    ATTACK,
    CATCH,
    CAUGHT,
    PUSH,
    ATEMI,
};

