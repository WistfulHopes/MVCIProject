#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "DuckParticleSystemComponent.generated.h"

class AActor;
class ULightComponentBase;
class ULightControlComponent;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DUCK_API UDuckParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TickType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TickComponentDisable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> NormalMirrorMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> OldTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LightActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULightControlComponent* LightControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULightComponentBase* LightComponent;
    
public:
    UDuckParticleSystemComponent();
    UFUNCTION(BlueprintCallable)
    void StopEmitParticle(bool isOverrideLastTick);
    
    UFUNCTION(BlueprintCallable)
    void StartEmitParticle(bool isOverrideLastTick);
    
    UFUNCTION(BlueprintCallable)
    void SetupForStageEffect();
    
    UFUNCTION(BlueprintCallable)
    void KillAllParticle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWasCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHultSpawn() const;
    
};

