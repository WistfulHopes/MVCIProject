#pragma once
#include "DuckModule.h"
#include "EClothApply.h"
#include "ClothSetting.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FClothSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClothApply ClothApply;
    
    FClothSetting();
};

