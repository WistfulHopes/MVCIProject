#pragma once
#include "DuckModule.h"
#include "ECameraFlag.generated.h"

UENUM(BlueprintType)
enum class ECameraFlag : uint8 {
    DEF,
    FIX,
    DAMAGE,
    NO_TOUCH,
    FIX_BATTLE_CAM,
};

