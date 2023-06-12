#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DuckVfxMaterialColorSetting.h"
#include "DuckVfxMaterialSetting.generated.h"

UCLASS(Blueprintable)
class DUCK_API UDuckVfxMaterialSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckVfxMaterialColorSetting> MaterialSettings;
    
    UDuckVfxMaterialSetting();
};

