#pragma once
#include "DuckModule.h"
#include "EUIInputUserTypePG.generated.h"

UENUM(BlueprintType)
enum class EUIInputUserTypePG : uint8 {
    DialogNormal,
    DialogError,
    Reward,
    Etc,
};

