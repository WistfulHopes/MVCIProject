#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SoundBattleSEDataAsset.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable)
class DUCK_API USoundBattleSEDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CommonSEAsset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueID[65];
    
    USoundBattleSEDataAsset();
};

