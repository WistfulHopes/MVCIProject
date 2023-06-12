#pragma once
#include "DuckModule.h"
#include "EItemDropDirection.generated.h"

UENUM(BlueprintType)
enum class EItemDropDirection : uint8 {
    THIS_SIDE,
    OTHER_SIDE,
};

