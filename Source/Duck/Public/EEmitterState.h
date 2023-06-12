#pragma once
#include "DuckModule.h"
#include "EEmitterState.generated.h"

UENUM(BlueprintType)
enum class EEmitterState : uint8 {
    SPAWNING,
    CANCELING,
    DELETELING,
    KILL,
    RESTORING,
};

