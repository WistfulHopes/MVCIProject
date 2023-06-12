#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CharacterAssetStyle.h"
#include "CharacterVfxKeyAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UCharacterVfxKeyAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAssetStyle> StyleList;
    
    UCharacterVfxKeyAsset();
};

