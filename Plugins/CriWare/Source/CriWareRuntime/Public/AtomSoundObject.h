#pragma once
#include "Engine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AtomSoundObject.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAtomSoundObject : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableVoiceLimitScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCategoryCueLimitScope;
    
    UAtomSoundObject();
};

