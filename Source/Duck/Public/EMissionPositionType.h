#pragma once
#include "DuckModule.h"
#include "EMissionPositionType.generated.h"

UENUM(BlueprintType)
enum class EMissionPositionType : uint8 {
    NONE,
    CENTER_ONLY,
    ENEMY_EOS_ONLY,
    PLAYER_EOS_ONLY,
};

