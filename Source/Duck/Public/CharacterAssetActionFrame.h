#pragma once
#include "DuckModule.h"
#include "CharacterAssetActionFrame.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetActionFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarginFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FollowFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainFrame;
    
    FCharacterAssetActionFrame();
};

