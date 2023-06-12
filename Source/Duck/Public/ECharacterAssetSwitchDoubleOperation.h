#pragma once
#include "DuckModule.h"
#include "ECharacterAssetSwitchDoubleOperation.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetSwitchDoubleOperation : uint8 {
    OPE_NONE,
    DELETE_,
    DISP_ON,
    DISP_OFF,
};

