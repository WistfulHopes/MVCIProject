#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DuckMatColorType.h"
#include "DuckCharaMaterialAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UDuckCharaMaterialAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckMatColorType> ColorTypeSetting;
    
    UDuckCharaMaterialAsset();
};

