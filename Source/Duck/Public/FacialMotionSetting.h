#pragma once
#include "DuckModule.h"
#include "FacialMotionSetting.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FFacialMotionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppearSoundFacialBlendFrame;
    
    FFacialMotionSetting();
};

