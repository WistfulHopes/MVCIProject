#pragma once
#include "DuckModule.h"
#include "EWallOpeType.generated.h"

UENUM(BlueprintType)
enum class EWallOpeType : uint8 {
    OPE_NONE,
    SET_LEFT,
    SET_RIGHT,
    SET_CEIL,
    REMOVE_LEFT,
    REMOVE_RIGHT,
    REMOVE_CEIL,
};

