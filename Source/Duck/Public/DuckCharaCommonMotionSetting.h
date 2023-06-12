#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FollowRotationSetting.h"
#include "DuckCharaCommonMotionSetting.generated.h"

UCLASS(Blueprintable)
class DUCK_API UDuckCharaCommonMotionSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFollowRotationSetting> follow_rotate_setting;
    
    UDuckCharaCommonMotionSetting();
};

