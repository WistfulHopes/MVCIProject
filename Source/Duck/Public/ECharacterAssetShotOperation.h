#pragma once
#include "DuckModule.h"
#include "ECharacterAssetShotOperation.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetShotOperation : uint8 {
    SPAWN,
    CANCEL,
    DELETE_,
};

