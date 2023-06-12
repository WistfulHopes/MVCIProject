#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ChangeMaterialSetting.h"
#include "DuckMaterialChangeAsset.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class DUCK_API UDuckMaterialChangeAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChangeMaterialSetting> ChangeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OtherSetting;
    
    UDuckMaterialChangeAsset();
};

