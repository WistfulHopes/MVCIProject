#pragma once
#include "DuckModule.h"
#include "ECharacterAssetBranchSideType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetBranchSideType : uint8 {
    UNKNOWN,
    THIS_SIDE,
    OTHER_SIDE,
    LEFT_SIDE,
    RIGHT_SIDE,
};

