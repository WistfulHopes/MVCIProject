#pragma once
#include "DuckModule.h"
#include "ECharacterAssetTriggerCondType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetTriggerCondType : uint8 {
    NONE,
    LESS_THAN,
    GREATER_THAN,
};

