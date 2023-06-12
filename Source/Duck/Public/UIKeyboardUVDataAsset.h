#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "UIKeyboardUVData.h"
#include "UIKeyboardUVDataAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UUIKeyboardUVDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIKeyboardUVData> ArrItem;
    
    UUIKeyboardUVDataAsset();
};

