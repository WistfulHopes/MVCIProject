#pragma once
#include "DuckModule.h"
#include "ECharacterAssetPlaceAddPosAxis.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetPlaceAddPosAxis : uint8 {
    NONE,
    X,
    Y,
    Z,
    XY,
    YZ,
    XZ,
    XYZ,
};

