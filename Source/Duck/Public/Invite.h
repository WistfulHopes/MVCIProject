#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EInviteProcessResult.h"
#include "Invite.generated.h"

class UInvite;
class UUserWidget;

UCLASS(Blueprintable)
class DUCK_API UInvite : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInviteJoinComplete);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInviteAccept);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInviteAccept OnInviteAccept;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInviteJoinComplete OnInviteJoinComplete;
    
    UInvite();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInviteBP();
    
    UFUNCTION(BlueprintCallable)
    static UInvite* SetUpInviteDelegate(UInvite* inviteObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UInvite* SetUpInvite();
    
    UFUNCTION(BlueprintCallable)
    static void SetGameInviteReady(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRewardWidgetActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInviteAccepted();
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* GetRewardWidgetFromWorld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EInviteProcessResult GetInviteProcessResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGameInviteReady();
    
};

