#pragma once
#include "DuckModule.h"
#include "ECharacterAssetAssistType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetAssistType : uint8 {
    ASSIST_A,
    ASSIST_B,
    ASSIST_C,
    ASSIST_MAX UMETA(Hidden),
};

