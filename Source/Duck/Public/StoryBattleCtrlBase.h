#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "StoryBattleCtrlBase.generated.h"

UCLASS(Blueprintable)
class DUCK_API AStoryBattleCtrlBase : public AActor {
    GENERATED_BODY()
public:
    AStoryBattleCtrlBase();
    UFUNCTION(BlueprintCallable)
    bool SetCharaAction(int32 PlWorkNo, int32 ActionNo, float& OutActionFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaActionEnd(int32 PlWorkNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharaActionNo(int32 PlWorkNo) const;
    
};

