#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EGemKind.h"
#include "TrainingData.h"
#include "NetworkTraining.generated.h"

class UNetworkTraining;

UCLASS(Blueprintable)
class DUCK_API UNetworkTraining : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRestart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnKeyLogEnable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnKeyLogDisable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnJumpLobby);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnJumpCharaSelect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttackDataEnable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttackDataDisable);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRestart OnRestart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpCharaSelect OnJumpCharaSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpLobby OnJumpLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyLogEnable OnKeyLogEnable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyLogDisable OnKeyLogDisable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackDataEnable OnAttackDataEnable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackDataDisable OnAttackDataDisable;
    
    UNetworkTraining();
    UFUNCTION(BlueprintCallable)
    void SetupTrainingSetting(FTrainingData Data, EGemKind gemTypeHost, EGemKind gemTypeGuest);
    
    UFUNCTION(BlueprintCallable)
    static UNetworkTraining* SetupNetworkTraining();
    
    UFUNCTION(BlueprintCallable)
    void JumpLobby();
    
    UFUNCTION(BlueprintCallable)
    void JumpCharaSelect();
    
};

