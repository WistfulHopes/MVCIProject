#pragma once
#include "DuckModule.h"
#include "ECharacterAssetSwitchJump.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetSwitchJump : uint8 {
    JUMP_ST_NONE,
    JUMP_ST_NORMAL,
    JUMP_ST_SJUMP_UP,
    JUMP_ST_SJUMP_DOWN,
};

