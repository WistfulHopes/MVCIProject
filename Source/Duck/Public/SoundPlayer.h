#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESound_CMN.h"
#include "ESound_SYS.h"
#include "SoundPlayer.generated.h"

class USoundAtomCueSheet;
class USoundManager;

UCLASS(Blueprintable)
class DUCK_API USoundPlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundManager* SoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CueSheetFilePath;
    
public:
    USoundPlayer();
    UFUNCTION(BlueprintCallable)
    bool UnInitialize();
    
    UFUNCTION(BlueprintCallable)
    bool Stop(bool _IsImmediate);
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float _InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetSelector(const FString& Selector, const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    bool SetCueSheet(const FString& _CueSheetFilePath);
    
    UFUNCTION(BlueprintCallable)
    bool Play_Sys(const ESound_SYS _SysID, const int32 _StartTime);
    
    UFUNCTION(BlueprintCallable)
    bool Play_CueSheet(USoundAtomCueSheet* _CueSheet, const int32 _CueID, const int32 _StartTime);
    
    UFUNCTION(BlueprintCallable)
    bool Play_Cmn(const ESound_CMN _CmnID, const int32 _StartTime);
    
    UFUNCTION(BlueprintCallable)
    bool Play(const int32 _CueID, const int32 _StartTime);
    
    UFUNCTION(BlueprintCallable)
    bool Pause(const bool _IsPause);
    
    UFUNCTION(BlueprintCallable)
    void OutputSelectorNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPause() const;
    
    UFUNCTION(BlueprintCallable)
    bool Initialize(USoundManager* _SoundManager);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelector();
    
};

