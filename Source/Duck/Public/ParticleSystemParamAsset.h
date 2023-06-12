#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ColorParam.h"
#include "FloatParam.h"
#include "ParticleSystemParamAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UParticleSystemParamAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorParam> ColorParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloatParam> FloatParam;
    
    UParticleSystemParamAsset();
};

