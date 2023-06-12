#pragma once
#include "DuckModule.h"
#include "ECharacterAssetMirrorAxisSetting.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetMirrorAxisSetting : uint8 {
    NONE,
    X_YZ,
    Y_ZX,
    Z_XY,
};

