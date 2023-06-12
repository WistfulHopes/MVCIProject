#pragma once
#include "DuckModule.h"
#include "ChangeMaterialSetting.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct DUCK_API FChangeMaterialSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OriginalMatrial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ChangeMatrial;
    
    FChangeMaterialSetting();
};

