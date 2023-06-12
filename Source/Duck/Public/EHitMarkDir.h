#pragma once
#include "DuckModule.h"
#include "EHitMarkDir.generated.h"

UENUM(BlueprintType)
enum class EHitMarkDir : uint8 {
    MARK_DIR_0000,
    MARK_DIR_0225,
    MARK_DIR_0450,
    MARK_DIR_0675,
    MARK_DIR_0900,
    MARK_DIR_3375,
    MARK_DIR_3150,
    MARK_DIR_2925,
    MARK_DIR_2700,
    MARK_DIR_0000_R,
    MARK_DIR_0225_R,
    MARK_DIR_0450_R,
    MARK_DIR_0675_R,
    MARK_DIR_0900_R,
    MARK_DIR_3375_R,
    MARK_DIR_3150_R,
    MARK_DIR_2925_R,
    MARK_DIR_2700_R,
    MARK_DIR_MAX UMETA(Hidden),
};

