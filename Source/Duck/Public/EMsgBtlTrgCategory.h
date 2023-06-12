#pragma once
#include "DuckModule.h"
#include "EMsgBtlTrgCategory.generated.h"

UENUM(BlueprintType)
enum class EMsgBtlTrgCategory : uint8 {
    MSG_BTL_TRG_CAT_CMN,
    MSG_BTL_TRG_CAT_OPPONENT_GROUP,
    MSG_BTL_TRG_CAT_OPPONENT_PERSON,
    MSG_BTL_TRG_CAT_PARTNER_GROUP,
    MSG_BTL_TRG_CAT_PARTNER_PERSON,
    MSG_BTL_TRG_CAT_NONE,
    MSG_BTL_TRG_CAT_MAX UMETA(Hidden),
};

