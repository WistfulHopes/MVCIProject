#pragma once
#include "Engine.h"
#include "ELobby_Style.generated.h"

UENUM(BlueprintType)
enum class ELobby_Style : uint8 {
    ANY,
    BATTLE,
    TRAINING,
    ELobby_MAX UMETA(Hidden),
};

