#pragma once
#include "DuckModule.h"
#include "EChargeAssetType.generated.h"

UENUM(BlueprintType)
enum class EChargeAssetType : uint8 {
    NORMAL,
    CHARGE,
    ROTATE,
    RAPID,
};

