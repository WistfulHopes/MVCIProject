#pragma once
#include "DuckModule.h"
#include "EParticleType.generated.h"

UENUM(BlueprintType)
enum class EParticleType : uint8 {
    NORMAL_PARTICLE,
    DEATH_PARTICLE,
    GEM_PARTICLE,
};

