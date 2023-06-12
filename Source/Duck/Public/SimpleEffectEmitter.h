#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SimpleEffectEmitter.generated.h"

class UDuckParticleSystemComponent;

UCLASS(Blueprintable)
class DUCK_API ASimpleEffectEmitter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDuckParticleSystemComponent* ParticleComponent;
    
    ASimpleEffectEmitter();
};

