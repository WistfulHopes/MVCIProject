#pragma once
#include "DuckModule.h"
#include "ECharacterAssetBranchKeyActionSP.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetBranchKeyActionSP : uint8 {
    NONE,
    SUPER_JUMP,
    SUPER_JUMP_AIR,
    NORMAL_JUMP,
    NORMAL_JUMP_AIR,
};

