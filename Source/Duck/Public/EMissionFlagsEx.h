#pragma once
#include "DuckModule.h"
#include "EMissionFlagsEx.generated.h"

UENUM(BlueprintType)
enum class EMissionFlagsEx : uint8 {
    NO_DISP,
    CHK_PNT,
    REFLECT,
    TCH_GND,
    TCH_AIR,
    INF_STM,
    STYLE,
};

