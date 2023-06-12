#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "DuckCharaPartsAnimInstance.generated.h"

class UDuckCharaAnimInstance;

UCLASS(Blueprintable, NonTransient)
class DUCK_API UDuckCharaPartsAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDuckCharaAnimInstance* ParentInstance;
    
    UDuckCharaPartsAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTransform> GetParentPose();
    
};

