#pragma once
#include "DuckModule.h"
#include "EMatParamCollectType.generated.h"

UENUM(BlueprintType)
enum class EMatParamCollectType : uint8 {
    MPC_GLOBAL,
    MPC_MAX_NUM,
    MPC_MAX UMETA(Hidden),
};

