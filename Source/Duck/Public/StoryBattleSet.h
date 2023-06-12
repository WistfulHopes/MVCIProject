#pragma once
#include "DuckModule.h"
#include "StorySetType.h"
#include "StoryBattleSet.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FStoryBattleSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStorySetType> SetType;
    
    FStoryBattleSet();
};

