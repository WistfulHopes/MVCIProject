#pragma once
#include "DuckModule.h"
#include "CharacterAssetAction.h"
#include "StyleData.h"
#include "CharacterAssetStyle.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStyleData StyleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetAction> ActionList;
    
    FCharacterAssetStyle();
};

