#pragma once
#include "DuckModule.h"
#include "ECharacterAssetSteerOpeType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetSteerOpeType : uint8 {
    NOP,
    SET,
    ADD,
    MULTIPLY,
    SET_SIGN,
    ADD_SIGN,
    SET_NEGATIVE_X,
    SET_NEGATIVE_Y,
    SET_NEGATIVE_Z,
    SET_LIMIT_MIN,
    SET_LIMIT_MAX UMETA(Hidden),
    SET_IGNORE,
    SET_INHERIT,
    SET_TARGET,
    HOMING_VALUE,
    HOMING_TIME,
};

