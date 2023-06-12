#pragma once
#include "DuckModule.h"
#include "EGaugeKind.generated.h"

UENUM(BlueprintType)
enum class EGaugeKind : uint8 {
    NONE,
    VITAL,
    HYPER_COMBO,
    TWO_PLATOON,
    GEM,
};

