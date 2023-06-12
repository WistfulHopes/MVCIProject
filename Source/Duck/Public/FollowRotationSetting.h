#pragma once
#include "DuckModule.h"
#include "FollowRotationSetting.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FFollowRotationSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bone_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 follow_bone_id;
    
    FFollowRotationSetting();
};

