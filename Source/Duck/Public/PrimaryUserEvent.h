#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PrimaryUserEvent.generated.h"

class UPrimaryUserEvent;

UCLASS(Blueprintable)
class DUCK_API UPrimaryUserEvent : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPrimarySignOut);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPrimaryControllerChange, bool, flag, bool, isPrimary);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPrimaryChange);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimarySignOut PrimeSignOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryChange PrimeChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryControllerChange PrimeControllerChange;
    
    UPrimaryUserEvent();
    UFUNCTION(BlueprintCallable)
    static UPrimaryUserEvent* SetUpPrimaryUserEvent();
    
};

