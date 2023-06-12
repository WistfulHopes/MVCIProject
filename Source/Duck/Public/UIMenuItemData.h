#pragma once
#include "DuckModule.h"
#include "UIMenuItemData.generated.h"

class UUIMenuItemDataAsset;

USTRUCT(BlueprintType)
struct DUCK_API FUIMenuItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIMenuItemDataAsset* ItemData;
    
    FUIMenuItemData();
};

