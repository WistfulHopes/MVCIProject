#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundManager.generated.h"

class USoundAtomCueSheet;
class USoundPlayer;

UCLASS(Blueprintable)
class DUCK_API USoundManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USoundAtomCueSheet*> CueSheetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundPlayer*> SoundPlayerArray;
    
public:
    USoundManager();
    UFUNCTION(BlueprintCallable)
    bool UnInitialize();
    
    UFUNCTION(BlueprintCallable)
    int32 RegistSoundPlayer(USoundPlayer* _Player);
    
};

