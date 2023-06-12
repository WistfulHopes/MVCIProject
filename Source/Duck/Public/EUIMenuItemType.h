#pragma once
#include "DuckModule.h"
#include "EUIMenuItemType.generated.h"

UENUM(BlueprintType)
enum class EUIMenuItemType : uint8 {
    None,
    CheckBox,
    PressBtn,
    Slider,
    SpinGrph,
    SpinText,
    Spacer,
    SpacerHalf,
    RadioBtn,
    NUM,
};

