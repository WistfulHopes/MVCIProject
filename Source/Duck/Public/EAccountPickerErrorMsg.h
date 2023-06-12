#pragma once
#include "DuckModule.h"
#include "EAccountPickerErrorMsg.generated.h"

UENUM(BlueprintType)
enum class EAccountPickerErrorMsg : uint8 {
    ACCOUNT_PICKER_ERROR_NO_PRIMARY,
    ACCOUNT_PICKER_ERROR_SIGN_OUT,
    ACCOUNT_PICKER_ERROR_DISCONNECT,
    ACCOUNT_PICKER_ERROR_GUESTACCOUNT,
    ACCOUNT_PICKER_ERROR_CHANGE,
    ACCOUNT_PICKER_ERROR_PAD_MAP,
    ACCOUNT_PICKER_ERROR_MAX UMETA(Hidden),
};

