#pragma once
#include "DuckModule.h"
#include "StoryCharaInfo.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FStoryCharaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharaNo;
    
    FStoryCharaInfo();
};

