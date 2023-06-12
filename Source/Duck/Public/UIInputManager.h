#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EUIInputKey.h"
#include "EUIInputKeyType.h"
#include "EUIInputLastDecideType.h"
#include "GameButtonType.h"
#include "UIInputManager.generated.h"

UCLASS(Blueprintable)
class DUCK_API UUIInputManager : public UObject {
    GENERATED_BODY()
public:
    UUIInputManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTriggerKey(int32 Num, EUIInputKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRepeatKey(int32 Num, EUIInputKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleaseKey(int32 Num, EUIInputKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressKey(int32 Num, EUIInputKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPauseCall(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastInputType(EUIInputLastDecideType Type, GameButtonType ButtonType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUIInputKey IsKeyVariable(int32 Num, float _Threshold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyThroughPrimaryCheck(int32 Num, EUIInputKey Key, EUIInputKeyType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeycon(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyAnyPad(EUIInputKey Key, EUIInputKeyType Type, bool isThroughPrimaryCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKey(int32 Num, EUIInputKey Key, EUIInputKeyType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecideLastInputType(EUIInputLastDecideType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnect(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyKey_Result(int32 Num, EUIInputKeyType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyKey(int32 Num, EUIInputKeyType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUIInputLastDecideType GetLastInputType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUIInputKey GetKeyconKey(int32 Num);
    
};

