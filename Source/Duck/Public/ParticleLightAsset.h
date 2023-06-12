#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LightActor.h"
#include "ParticleLightAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UParticleLightAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLightActor> LightArray;
    
    UParticleLightAsset();
};

