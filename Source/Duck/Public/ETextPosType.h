#pragma once
#include "DuckModule.h"
#include "ETextPosType.generated.h"

UENUM(BlueprintType)
enum class ETextPosType : uint8 {
    POS_HEIGHT_00,
    POS_HEIGHT_01,
    POS_HEIGHT_02,
    POS_HEIGHT_03,
    POS_HEIGHT_04,
    POS_HEIGHT_05,
    POS_HEIGHT_06,
    POS_HEIGHT_07,
    POS_HEIGHT_08,
    POS_HEIGHT_MAX UMETA(Hidden),
};

