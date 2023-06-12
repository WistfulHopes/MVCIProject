#pragma once
#include "DuckModule.h"
#include "EPlayerRoutine1Type.generated.h"

UENUM(BlueprintType)
enum class EPlayerRoutine1Type : uint8 {
    PL_NORM,
    PL_CATCH,
    PL_HOLD,
    PL_DAMAGE,
    PL_MAX UMETA(Hidden),
};

