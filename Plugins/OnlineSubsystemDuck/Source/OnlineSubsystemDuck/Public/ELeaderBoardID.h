#pragma once
#include "Engine.h"
#include "ELeaderBoardID.generated.h"

UENUM(BlueprintType)
enum class ELeaderBoardID : uint8 {
    BOARD_RANK_WORLD,
    BOARD_VICTORY_WORLD,
    BOARD_STREAK_WORLD,
    BOARD_RANK_USA,
    BOARD_VICTORY_USA,
    BOARD_STREAK_USA,
    BOARD_RANK_EU,
    BOARD_VICTORY_EU,
    BOARD_STREAK_EU,
    BOARD_RANK_ASIA,
    BOARD_VICTORY_ASIA,
    BOARD_STREAK_ASIA,
    BOARD_REPLAY,
    BOARD_PROFILE,
    BOARD_GAMEPROGRESS,
    _BOARD_MAX UMETA(Hidden),
};

