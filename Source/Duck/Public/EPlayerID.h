#pragma once
#include "DuckModule.h"
#include "EPlayerID.generated.h"

UENUM(BlueprintType)
enum class EPlayerID : uint8 {
    Player1,
    Player2,
    Player3,
    Player4,
    PlayerIDNum,
};

