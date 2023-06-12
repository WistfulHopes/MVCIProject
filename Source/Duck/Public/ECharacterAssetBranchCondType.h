#pragma once
#include "DuckModule.h"
#include "ECharacterAssetBranchCondType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetBranchCondType : uint8 {
    EQUAL,
    NOT_EQUAL,
    LESS_THAN,
    GREATER_THAN,
};

