#pragma once
#include "DuckModule.h"
#include "ECharacterAssetExGaugeOpeType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetExGaugeOpeType : uint8 {
    NOP,
    SET,
    ADD,
    MULTIPLY,
};

