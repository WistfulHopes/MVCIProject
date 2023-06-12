#pragma once
#include "DuckModule.h"
#include "ELobbyBattleResultType.generated.h"

UENUM(BlueprintType)
enum class ELobbyBattleResultType : uint8 {
    WIN,
    LOSE,
    DRAW,
};

