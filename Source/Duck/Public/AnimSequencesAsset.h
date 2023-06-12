#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AnimSequenceList.h"
#include "AnimSequencesAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UAnimSequencesAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimSequenceList> AnimSeqContainerWithID;
    
    UAnimSequencesAsset();
};

