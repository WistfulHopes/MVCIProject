#pragma once
#include "DuckModule.h"
#include "EFloorHit.generated.h"

UENUM(BlueprintType)
enum class EFloorHit : uint8 {
    NOT_SPECIFIED,
    FLOOR_L,
    FLOOR_M,
    FLOOR_H,
    FLOOR_NONE,
};

