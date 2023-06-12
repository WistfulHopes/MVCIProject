#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ParticleList.h"
#include "ParticleAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UParticleAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParticleList> ParticleContainerWithID;
    
    UParticleAsset();
};

