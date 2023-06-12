#pragma once
#include "DuckModule.h"
#include "EPartsAssetMatUpdateType.generated.h"

UENUM(BlueprintType)
enum class EPartsAssetMatUpdateType : uint8 {
    ALL_UPDATE,
    ONLY_COMMON,
    ONLY_GIMMICK,
    NON_UPDATE,
};

