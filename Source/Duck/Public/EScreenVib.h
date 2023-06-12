#pragma once
#include "DuckModule.h"
#include "EScreenVib.generated.h"

UENUM(BlueprintType)
enum class EScreenVib : uint8 {
    NOT_SPECIFIED,
    SMALL,
    MIDDLE,
    BIG,
};

