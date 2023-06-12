#pragma once
#include "DuckModule.h"
#include "ECharacterAssetPersistentType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetPersistentType : uint8 {
    UNIQUE,
    COMMON,
};

