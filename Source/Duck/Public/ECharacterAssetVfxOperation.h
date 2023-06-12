#pragma once
#include "DuckModule.h"
#include "ECharacterAssetVfxOperation.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetVfxOperation : uint8 {
    Spawn,
    Cancel,
    Delete,
    Reset,
};

