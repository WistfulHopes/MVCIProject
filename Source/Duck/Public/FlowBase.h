#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EDuckLoadPrio.h"
#include "FlowBase.generated.h"

class ULoadAssets;

UCLASS(Blueprintable)
class DUCK_API AFlowBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadAssets*> mArrLoadAssets;
    
public:
    AFlowBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMouse(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnfocusWindow(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupWithTitleUpdate();
    
    UFUNCTION(BlueprintCallable)
    void SetMouseWaitTime(float Time);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestUnloadAssets(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    int32 RequestLoadAssets(const TArray<FString>& AssetNames, bool IsTravel, EDuckLoadPrio Prio);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseByGrabWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnFromShop();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWindowActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadAssetsEnd(int32 ID) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseWaitTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPlayByInterruptTravel();
    
};

