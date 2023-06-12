#pragma once
#include "DuckModule.h"
#include "EMissionFlags.generated.h"

UENUM(BlueprintType)
enum class EMissionFlags : uint8 {
    NO_DISP,
    CHECK_POINT,
    ADV_REFLECT,
    TOUCH_GROUND,
    TOUCH_AIR,
    INFINITY_STORM,
    STYLE_CHECK,
};

