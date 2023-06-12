#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CharacterAssetStyle.h"
#include "CharacterSoundKeyAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UCharacterSoundKeyAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetStyle> StyleList;
    
    UCharacterSoundKeyAsset();
};

