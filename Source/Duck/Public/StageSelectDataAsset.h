#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StageSelectData.h"
#include "StageSelectDataAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UStageSelectDataAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageSelectData Data[16];
    
    UStageSelectDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStageSelectData GetData(int32 ID);
    
};

