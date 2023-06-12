#pragma once
#include "DuckModule.h"
#include "GameKeyboardConfigItems.generated.h"

UENUM(BlueprintType)
enum class GameKeyboardConfigItems : uint8 {
    Up,
    Down,
    Left,
    Right,
    Punch1,
    Punch2,
    Kick1,
    Kick2,
    Stone,
    Change,
    Punch1_Punch2,
    Kick1_Kick2,
    Punch1_Kick1,
    Punch2_Kick2,
    StoneBurst,
    Record,
    Play,
    Taunt,
    DummyControl,
    _ConfigItemMax,
    _Invalid,
};

