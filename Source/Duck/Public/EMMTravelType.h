#pragma once
#include "DuckModule.h"
#include "EMMTravelType.generated.h"

UENUM(BlueprintType)
enum class EMMTravelType : uint8 {
    MAIN_MENU,
    TITLE,
    STORY,
    VERSUS_2P,
    VERSUS_CPU,
    RANKED_MATCH,
    PLAYER_MATCH,
    ROOKIE_LEAGUE,
    TRAINING,
    ONLINE_TRAINING,
    ARCARD,
    MISSION,
    REPLAY,
    PROFILE_CARD,
    LOBBY,
    RANKING,
    TEAM_EDIT,
    COLLECTION,
};

