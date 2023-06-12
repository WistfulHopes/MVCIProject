#pragma once
#include "DuckModule.h"
#include "ECharacterAssetValidPlane.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetValidPlane : uint8 {
    NONE,
    XY,
    YZ,
    ZX,
};

