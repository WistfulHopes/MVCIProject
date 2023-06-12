#pragma once
#include "DuckModule.h"
#include "EPlatform.generated.h"

UENUM(BlueprintType)
enum class EPlatform : uint8 {
    PS4,
    Steam,
    XBoxOne,
    UWP64,
};

