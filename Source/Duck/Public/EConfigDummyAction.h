#pragma once
#include "DuckModule.h"
#include "EConfigDummyAction.generated.h"

UENUM(BlueprintType)
enum class EConfigDummyAction : uint8 {
    STAND,
    CROUCH,
    JUMP,
    SUPER_JUMP,
    WALK_FORWARD,
    RECORD,
    PLAYER,
    ENEMY,
};

