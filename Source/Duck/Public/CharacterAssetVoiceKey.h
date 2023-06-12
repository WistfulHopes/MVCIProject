#pragma once
#include "DuckModule.h"
#include "CharacterAssetKeyDetails.h"
#include "ECharacterAssetSoundAisacType.h"
#include "ECharacterAssetSoundGroupID.h"
#include "ECharacterAssetSoundOpeType.h"
#include "ECharacterAssetSoundType.h"
#include "CharacterAssetVoiceKey.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetVoiceKey : public FCharacterAssetKeyDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAssetSoundAisacType AISACType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAssetSoundGroupID GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAssetSoundType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAssetSoundOpeType OperationType;
    
    FCharacterAssetVoiceKey();
};

