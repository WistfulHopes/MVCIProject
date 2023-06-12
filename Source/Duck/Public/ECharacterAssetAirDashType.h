#pragma once
#include "DuckModule.h"
#include "ECharacterAssetAirDashType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetAirDashType : uint8 {
    AIR_DASH_U,
    AIR_DASH_BU,
    AIR_DASH_B,
    AIR_DASH_BD,
    AIR_DASH_D,
    AIR_DASH_FD,
    AIR_DASH_F,
    AIR_DASH_FU,
    AIR_DASH_MAX UMETA(Hidden),
};

