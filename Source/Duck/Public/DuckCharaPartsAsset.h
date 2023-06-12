#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PartsVisible.h"
#include "DuckCharaPartsAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UDuckCharaPartsAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartsVisible> VisibleArray;
    
    UDuckCharaPartsAsset();
};

