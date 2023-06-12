#pragma once
#include "DuckModule.h"
#include "EHistoryType.generated.h"

UENUM(BlueprintType)
enum class EHistoryType : uint8 {
    NONE,
    ARCADE_CLEAR,
    ARCADE_ALL,
    MISSION_CHARA,
    MISSION_CLEAR,
    MISSION_ALL,
    RANK_WINSTREAK,
    WINSTREAK,
    RANK_WIN,
    LOBBY_WIN,
    CASUAL_WIN,
    ROOKIES_WIN,
    GET_HONOR,
    RANKUP,
    RANKDOWN,
    PLAY,
    RANK_01,
    RANK_02,
    RANK_03,
    RANK_04,
    RANK_05,
    RANK_06,
    RANK_07,
    RANK_08,
    RANK_09,
    RANK_10,
    RANK_11,
    RANK_12,
    RANK_13,
    RANK_14,
    RANK_15,
    RANK_16,
    RANK_17,
};

