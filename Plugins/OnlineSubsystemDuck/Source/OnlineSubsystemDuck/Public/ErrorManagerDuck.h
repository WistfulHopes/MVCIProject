#pragma once
#include "Engine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ErrorManagerDuck.generated.h"

class UErrorManagerDuck;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMDUCK_API UErrorManagerDuck : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCauseNetworkError, int32, ErrId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCauseFatalNetworkError, int32, ErrId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCauseNetworkError CauseNetworkError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCauseFatalNetworkError CauseFatalNetworkError;
    
    UErrorManagerDuck();
    UFUNCTION(BlueprintCallable)
    static UErrorManagerDuck* SetUpNetworkErrorManager();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDispErrorDialog();
    
    UFUNCTION(BlueprintCallable)
    static void DispUGCErrorDialog();
    
};

