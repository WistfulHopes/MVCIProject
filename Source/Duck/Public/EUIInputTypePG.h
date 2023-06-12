#pragma once
#include "DuckModule.h"
#include "EUIInputTypePG.generated.h"

UENUM(BlueprintType)
enum class EUIInputTypePG : uint8 {
    Left,
    Right,
    Up,
    Down,
    Decide,
    Cancel,
};

