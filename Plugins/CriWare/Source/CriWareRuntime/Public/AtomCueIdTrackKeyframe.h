#pragma once
#include "Engine.h"
#include "AtomCueIdTrackKeyframe.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueIdTrackKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueID;
    
    CRIWARERUNTIME_API FAtomCueIdTrackKeyframe();
};

