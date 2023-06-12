#pragma once
#include "DuckModule.h"
#include "ECommandAssetType.generated.h"

UENUM(BlueprintType)
enum class ECommandAssetType : uint8 {
    NORMAL,
    CHARGE,
    ROTATE,
    RAPID,
};

