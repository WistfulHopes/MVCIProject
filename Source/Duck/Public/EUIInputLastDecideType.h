#pragma once
#include "DuckModule.h"
#include "EUIInputLastDecideType.generated.h"

UENUM(BlueprintType)
enum class EUIInputLastDecideType : uint8 {
    Invalid,
    Pad,
    Keyboard_Mouse,
    Num,
};

