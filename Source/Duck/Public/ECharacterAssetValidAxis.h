#pragma once
#include "DuckModule.h"
#include "ECharacterAssetValidAxis.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetValidAxis : uint8 {
    NONE,
    X,
    Y,
    XY,
    Z,
    XZ,
    YZ,
    XYZ,
};

