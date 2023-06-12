#pragma once
#include "DuckModule.h"
#include "EItemDropType.generated.h"

UENUM(BlueprintType)
enum class EItemDropType : uint8 {
    FOOD_1,
    FOOD_2,
    POINT_1,
    POINT_2,
    EXTRA,
};

