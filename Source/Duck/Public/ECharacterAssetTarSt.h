#pragma once
#include "DuckModule.h"
#include "ECharacterAssetTarSt.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetTarSt : uint8 {
    Stand,
    Crouch,
    Air,
    Down,
    Hit,
    Guard,
    Attack,
};

