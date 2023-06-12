#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "UIMenuDataAsset.generated.h"

class UUIMenuItemDataAsset;

UCLASS(Blueprintable)
class DUCK_API UUIMenuDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUIMenuItemDataAsset*> ArrItem;
    
    UUIMenuDataAsset();
};

