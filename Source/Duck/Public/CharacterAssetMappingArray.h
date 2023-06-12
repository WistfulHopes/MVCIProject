#pragma once
#include "DuckModule.h"
#include "CharacterAssetMapping.h"
#include "CharacterAssetMappingArray.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetMappingArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetMapping> Element;
    
    FCharacterAssetMappingArray();
};

