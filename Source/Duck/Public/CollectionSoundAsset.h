#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CollectionSound.h"
#include "CollectionSoundAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UCollectionSoundAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectionSound Data;
    
    UCollectionSoundAsset();
};

