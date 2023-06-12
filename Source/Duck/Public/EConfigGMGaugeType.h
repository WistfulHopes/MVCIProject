#pragma once
#include "DuckModule.h"
#include "EConfigGMGaugeType.generated.h"

UENUM(BlueprintType)
enum class EConfigGMGaugeType : uint8 {
    NOT_SPECIFIED,
    GAUGE_000,
    GAUGE_010,
    GAUGE_020,
    GAUGE_030,
    GAUGE_040,
    GAUGE_050,
    GAUGE_060,
    GAUGE_070,
    GAUGE_080,
    GAUGE_090,
    GAUGE_100,
    RECOVER,
};

