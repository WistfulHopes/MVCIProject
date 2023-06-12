#pragma once
#include "DuckModule.h"
#include "ESettingAssistType.generated.h"

UENUM(BlueprintType)
enum class ESettingAssistType : uint8 {
    ASSIST_A,
    ASSIST_B,
    ASSIST_C,
    ASSIST_MAX UMETA(Hidden),
};

