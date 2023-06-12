#pragma once
#include "DuckModule.h"
#include "ECharacterAssetBranchHeightType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetBranchHeightType : uint8 {
    OWNER_IMMIDIATE,
    TARGET_IMMIDIATE,
    TARGET_OFFSET,
};

