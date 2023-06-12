#pragma once
#include "DuckModule.h"
#include "FollowBoneData.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FFollowBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartsID;
    
    FFollowBoneData();
};

