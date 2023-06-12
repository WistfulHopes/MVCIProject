#pragma once
#include "DuckModule.h"
#include "EEasyCommandType.generated.h"

UENUM(BlueprintType)
enum class EEasyCommandType : uint8 {
    AR_U,
    AR_D,
    AR_L,
    AR_R,
    TYPE_MAX UMETA(Hidden),
};

