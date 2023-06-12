#pragma once
#include "DuckModule.h"
#include "EMissionCheckTypeEx.generated.h"

UENUM(BlueprintType)
enum class EMissionCheckTypeEx : uint8 {
    CMB,
    ACT,
    TRG,
    TCH,
};

