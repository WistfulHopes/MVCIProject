#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "EMatParamCollectType.h"
#include "EPlatformMsgType.h"
#include "EWorkRateTypeDef.h"
#include "DuckGameInstance.generated.h"

class UDuckMediaControl;
class UObject;
class URecordDataAsset;
class UUIInputManager;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class DUCK_API UDuckGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsPauseTypeLongPress;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ArrRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpUserInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveStaticButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* StaticButtonAttachTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ArrFocusIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIInputManager* UIInputManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URecordDataAsset* mpRecordAssetData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* mpSerialDispWidgetPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpSerialDispWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* mpSessionSettingDispWidgetPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpSessionSettingDispWidget;
    
    UDuckGameInstance();
    UFUNCTION(BlueprintCallable)
    void TestTickWorkRate(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void TestLoadMatParamCollect(EMatParamCollectType Type);
    
    UFUNCTION(BlueprintCallable)
    void TestClearWorkRate();
    
    UFUNCTION(BlueprintCallable)
    void TestClearAllMatParamCollect();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* SpawnUserInfo(int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetWorkRate(EWorkRateTypeDef Type, float rate);
    
    UFUNCTION(BlueprintCallable)
    void SetupRewardWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetRecordAssetData(URecordDataAsset* pRecordAssetData);
    
    UFUNCTION(BlueprintCallable)
    void SetPadType(int32 PadNum, int32 PadType);
    
    UFUNCTION(BlueprintCallable)
    void SetMatParamCollectScalarParam(EMatParamCollectType Type, FName ParamName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMainMenuFocusIndex(TArray<int32> NewArrFocusIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetGarbageCollectDisable(bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SetDuckGamePause(bool flgPauseOn);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleInputNone_Self(bool bInputNone);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveStaticButton(UUserWidget* StaticButton);
    
    UFUNCTION(BlueprintCallable)
    void RewardGet(TArray<FText>& Text);
    
    UFUNCTION(BlueprintCallable)
    void RewardAdd(FText Text);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseRewardWidget();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseMainMenuFocusIndex();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseActiveStaticButton();
    
    UFUNCTION(BlueprintCallable)
    bool IsStaticButton();
    
    UFUNCTION(BlueprintCallable)
    bool IsShowDip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuckGamePause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDispHUD() const;
    
    UFUNCTION(BlueprintCallable)
    void HideSessionSettings();
    
    UFUNCTION(BlueprintCallable)
    void HideSerial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWorkRate(EWorkRateTypeDef Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetUserInfo() const;
    
    UFUNCTION(BlueprintCallable)
    UUIInputManager* GetUIInputManager();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetRewardWidget();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRewardNum();
    
    UFUNCTION(BlueprintCallable)
    URecordDataAsset* GetRecordAssetData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlatformMsg(EPlatformMsgType Type) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPadType(int32 PadNum, int32& PadType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDuckMediaControl* GetMediaControl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxTeamNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPartnerNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMainMenuFocusIndex(TArray<int32>& Result);
    
    UFUNCTION(BlueprintCallable)
    bool GetBattleInputNone_Self();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetActiveStaticButton();
    
    UFUNCTION(BlueprintCallable)
    void DestroyUserInfo();
    
    UFUNCTION(BlueprintCallable)
    bool DecodeSerial(FString& decoded_string);
    
    UFUNCTION(BlueprintCallable)
    void CaptureForResultTexture(int32 teamNo);
    
};

