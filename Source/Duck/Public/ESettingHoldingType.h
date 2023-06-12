#pragma once
#include "DuckModule.h"
#include "ESettingHoldingType.generated.h"

UENUM(BlueprintType)
enum class ESettingHoldingType : uint8 {
    ESettingHoldingType_CMN,
    ESettingHoldingType_BATTLE,
};

