#pragma once
#include "DuckModule.h"
#include "ECharacterAssetSteerValType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetSteerValType : uint8 {
    VELOCITY_X,
    VELOCITY_Y,
    VELOCITY_Z,
    ACCELERATION_X,
    ACCELERATION_Y,
    ACCELERATION_Z,
};

