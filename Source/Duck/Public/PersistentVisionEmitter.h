#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "PersistentVisionEmitter.generated.h"

class ADuckCharaMotion;
class UDuckMaterialChangeAsset;
class UDuckSkeletalMeshComponent;

UCLASS(Blueprintable)
class DUCK_API APersistentVisionEmitter : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDuckSkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDuckSkeletalMeshComponent*> SkeletalMeshComponentParts;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADuckCharaMotion* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDuckMaterialChangeAsset* ChangeMaterialAsset;
    
public:
    APersistentVisionEmitter();
};

