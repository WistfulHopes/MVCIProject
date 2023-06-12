#pragma once
#include "DuckModule.h"
#include "ECamTargetType.generated.h"

UENUM(BlueprintType)
enum class ECamTargetType : uint8 {
    NONE,
    OWNER,
    OPPONENT,
    WORLD,
    BATTLE_CAMERA,
};

