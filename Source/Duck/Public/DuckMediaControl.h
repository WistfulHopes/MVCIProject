#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DuckMediaControl.generated.h"

class UDuckMediaControl;

UCLASS(Blueprintable)
class DUCK_API UDuckMediaControl : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDuckMediaControl();
    UFUNCTION(BlueprintCallable)
    void setMediaControl(bool bScreenShot, bool bMovieCapture, bool bLiveStreaming, bool bSharePlaying, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDuckMediaControl* GetInstance();
    
};

