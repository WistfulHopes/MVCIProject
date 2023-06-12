#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EUIInputKey.h"
#include "GameButtonState.h"
#include "GameButtonType.h"
#include "GameConfigItems.h"
#include "GameKeyboardConfigItems.h"
#include "GamePadInput.generated.h"

class APlayerCameraManager;
class APlayerController;

UCLASS(Blueprintable)
class DUCK_API UGamePadInput : public UObject {
    GENERATED_BODY()
public:
    UGamePadInput();
    UFUNCTION(BlueprintCallable)
    static void UpdateKeyboardConfigDataFromSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void UpdateConfigDataFromSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void UpdateConfigDataForPressTour(int32 teamNo, bool IsPad);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ShowAccountPicker(UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 padNo);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerUsePadNumbers(const TArray<int32>& PadNumbers);
    
    UFUNCTION(BlueprintCallable)
    static void SetPadConnectPlayer(int32 PadNum, int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable)
    static void SetLobbyIDInputFlg(bool Flg);
    
    UFUNCTION(BlueprintCallable)
    static void SetLastInputKeyboardFlag(bool inputFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultPadNumAllPlayer();
    
    UFUNCTION(BlueprintCallable)
    static void SetControllerSelectSetting(int32 teamNo, int32 padNo);
    
    UFUNCTION(BlueprintCallable)
    static void SetActiveUser(int32 padNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressDummyCtrlInTraining(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyboardPressAnyKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConnectPad_FromPadNum(int32 PadNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConnectPad(int32 padNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsButtonPressed_FromPlayerNum(int32 PlayerNum, GameButtonType checkButtonType, bool useConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsButtonPressed_FromPadNum(int32 PadNum, GameButtonType checkButtonType, bool useConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsButtonAnyPressed_FromPlayerNum(int32 PlayerNum, bool useConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsButtonAnyPressed_FromPadNum(int32 PadNum, bool useConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattleKeyboardPressTrigger(GameKeyboardConfigItems Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattleKeyboardPressAnyKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattleKeyboardPress(GameKeyboardConfigItems Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAppActive();
    
    UFUNCTION(BlueprintCallable)
    static void GetRightAnalogKeyState_FromPlayerNum(int32 PlayerNum, float& outX, float& outY);
    
    UFUNCTION(BlueprintCallable)
    static void GetRightAnalogKeyState_FromPadNum(int32 PadNum, float& outX, float& outY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUIInputKey GetRecordButton(const int32 PlayerNum, bool& IsSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPrimaryUserId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPrimaryUser_FromPadNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetPlayerController_FromPlayerNum(UObject* WorldContextObject, int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerCameraManager* GetPlayerCameraManager_FromPlayerNum(UObject* WorldContextObject, int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUIInputKey GetPlayBackButton(const int32 PlayerNum, bool& IsSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPickResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetPCBattleKeyData(GameKeyboardConfigItems ItemIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetManagePlayerMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUIInputKey GetLowPunchButton(const int32 PlayerNum, bool& IsSetting);
    
    UFUNCTION(BlueprintCallable)
    static void GetLeftAnalogKeyState_FromPlayerNum(int32 PlayerNum, float& outX, float& outY);
    
    UFUNCTION(BlueprintCallable)
    static void GetLeftAnalogKeyState_FromPadNum(int32 PadNum, float& outX, float& outY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLastInputKeyboardFlag();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsPicked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDipDummyControlEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FKey> GetDefaultKeyboardConfig_Move();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FKey> GetDefaultKeyboardConfig_Attack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetControllerSelectSetting(int32 teamNo, bool& isCPU, int32& padNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetConnectPlayerNum_FromPadNum(int32 PadNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetConnectPadNo(TArray<int32>& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetConnectPadArray(TArray<int32>& Pads);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static GameButtonState GetButtonState_FromPlayerNum(int32 PlayerNum, GameButtonType checkButtonType, bool useConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static GameButtonState GetButtonState_FromPadNum(int32 PadNum, GameButtonType checkButtonType, bool useConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUIInputKey GetBindButton(const int32 PlayerNum, const GameConfigItems Action, bool& IsSetting);
    
    UFUNCTION(BlueprintCallable)
    static EUIInputKey GetAShiftButton(const int32 PlayerNum, bool& IsSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EngagementPrompt_Decide();
    
    UFUNCTION(BlueprintCallable)
    static void Decide2PSidePlayer();
    
};

