#pragma once
#include "DuckModule.h"
#include "CharacterAssetKeyDetails.h"
#include "CharacterAssetSoundKey.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetSoundKey : public FCharacterAssetKeyDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    FCharacterAssetSoundKey();
};

