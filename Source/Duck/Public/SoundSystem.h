#pragma once
#include "DuckModule.h"
#include "DuckBaseSystem.h"
#include "ESoundCategory.h"
#include "ESoundModeCtrlType.h"
#include "SoundSystem.generated.h"

class USoundModeCtrlBase;
class USoundSystem;

UCLASS(Blueprintable)
class DUCK_API USoundSystem : public UDuckBaseSystem {
    GENERATED_BODY()
public:
    USoundSystem();
    UFUNCTION(BlueprintCallable)
    void SetCategoryVolume(ESoundCategory Type, float VolumeRate);
    
    UFUNCTION(BlueprintCallable)
    void SetCategoryBattleStageAmbientVolume(float VolumeRate);
    
    UFUNCTION(BlueprintCallable)
    void ResetCategoryVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundModeCtrlBase* GetSoundModeCtrl(ESoundModeCtrlType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USoundSystem* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    void DestroySoundModeCtrlSpecifiedType(ESoundModeCtrlType Type);
    
    UFUNCTION(BlueprintCallable)
    USoundModeCtrlBase* CreateSoundModeCtrl(ESoundModeCtrlType Type);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLanguage();
    
    UFUNCTION(BlueprintCallable)
    void ApplySoundSettingAll(int32 padNo);
    
};

