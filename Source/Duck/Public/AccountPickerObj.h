#pragma once
#include "DuckModule.h"
#include "EAccountPickerErrorMsg.h"
#include "GameFramework/Actor.h"
#include "AccountPickerObj.generated.h"

UCLASS(Blueprintable)
class DUCK_API AAccountPickerObj : public AActor {
    GENERATED_BODY()
public:
    AAccountPickerObj();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAccountPickerWithDialog(EAccountPickerErrorMsg MsgType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryUserSignOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryUserChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisconnectController(bool bPrimary);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConnectController(bool bPrimary);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeProfile();
    
};

