#pragma once
#include "Engine.h"
#include "EAtomComponentStatus.generated.h"

UENUM(BlueprintType)
enum class EAtomComponentStatus : uint8 {
    Stop,
    Prep,
    Playing,
    PlayEnd,
    Error,
};

