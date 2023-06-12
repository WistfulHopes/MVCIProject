#pragma once
#include "DuckModule.h"
#include "ECharacterAssetCondType.h"
#include "CharacterAssetTriggerLevBut.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetTriggerLevBut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Release;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Direct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Press;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAssetCondType Condition;
    
    FCharacterAssetTriggerLevBut();
};

