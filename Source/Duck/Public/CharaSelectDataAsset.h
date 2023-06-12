#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CharaSelectData.h"
#include "CharaSelectDataAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UCharaSelectDataAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaSelectData Data[36];
    
    UCharaSelectDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharaSelectData GetData(int32 ID);
    
};

