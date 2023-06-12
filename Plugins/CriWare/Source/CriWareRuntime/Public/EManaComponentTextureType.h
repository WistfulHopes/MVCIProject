#pragma once
#include "Engine.h"
#include "EManaComponentTextureType.generated.h"

UENUM(BlueprintType)
enum EManaComponentTextureType {
    Texture_Y,
    Texture_U,
    Texture_V,
    Texture_A,
    Texture_MAX UMETA(Hidden),
};

