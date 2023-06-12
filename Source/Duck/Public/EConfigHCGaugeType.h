#pragma once
#include "DuckModule.h"
#include "EConfigHCGaugeType.generated.h"

UENUM(BlueprintType)
enum class EConfigHCGaugeType : uint8 {
    NOT_SPECIFIED,
    LEVEL_00,
    LEVEL_01,
    LEVEL_02,
    LEVEL_03,
    LEVEL_04,
    LEVEL_05,
    LEVEL_06,
    LEVEL_07,
    LEVEL_08,
    LEVEL_09,
    LEVEL_10,
    RECOVER,
};

