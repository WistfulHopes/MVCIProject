#pragma once
#include "DuckModule.h"
#include "ParticleParam.h"
#include "RollBackParameterEffectEmitter.h"
#include "RollBackParameterEffect.generated.h"

class AEffectEmitter;

USTRUCT(BlueprintType)
struct DUCK_API FRollBackParameterEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRollBackParameterEffectEmitter> EmitterParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParticleParam> ParameterNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEffectEmitter*> RyuhaiEmitter;
    
    FRollBackParameterEffect();
};

