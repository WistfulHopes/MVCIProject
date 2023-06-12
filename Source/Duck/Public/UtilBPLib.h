#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=MemberInfo -FallbackName=MemberInfo
#include "TEAM_SETTING.h"
#include "UtilBPLib.generated.h"

class UObject;
class UTextBlock;

UCLASS(Blueprintable)
class DUCK_API UUtilBPLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilBPLib();
    UFUNCTION(BlueprintCallable)
    static void TrimUserNameForTextBlock(UTextBlock* Target, const FString& UserName, const FString& Suffix, float XSize, FString& OutText, bool& IsTrimed);
    
    UFUNCTION(BlueprintCallable)
    static void SetDemoShadowMaxResolution(bool isEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ReverseOrder_ArrStr(TArray<FString> In, TArray<FString>& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidStageNo(int32 stageNo, bool IsOpenCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidPlayableCharaNo(int32 CharaNo, bool IsOpenCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidCostumeNo(int32 CharaNo, int32 CostumeNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidCostumeData(int32 CharaNo, int32 CostumeNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidCharaNo_Purchase(int32 CharaNo, bool IsPlayable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidCharaNo(int32 CharaNo, bool IsOpenCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidArrangeCostume(int32 CharaNo);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSaveDataMigration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDuckPrintOn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCultureItaly();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharaTypePlayer(int32 CharaNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharaTypeNPC(int32 CharaNo, bool IncludeDemoChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharaTypeMarvel(int32 CharaNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharaTypeDLC(int32 CharaNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharaTypeCapcom(int32 CharaNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildVerValidSpFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildShirogumi();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildShipping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildSDCC_Press();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildRegionChina();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildPresstour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildMarvelCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildE3();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildDeliveryTrial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAssetExist(const FString& PATH);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsArabicString(const FString& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetValidCostumeNum(int32 CharaNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetValidColorNum(int32 CharaNo, int32 CostumeNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalCostumeNum(int32 CharaNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalColorNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPostProcessAAQualityValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsSuccessTryResizeView();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsFullscreenUWP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDuckShadowBias();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDefaultFeatureAntiAliasingValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDataStringByInt(int32 Year, int32 Month, int32 Day);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDataStringByChar(const FString& Year, const FString& Month, const FString& Day);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharaMaxNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FrameToTime(int32 _Frame, int32& _Hour, int32& _Minutes, int32& _Seconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DuckQuitGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString ConvertIntToString(const FString& StrFormat, int32 Number);
    
    UFUNCTION(BlueprintCallable)
    static FString ConvertDecimalToHexString(int32 Number);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ClassAssetId_IsNull(UClass* Object);
    
    UFUNCTION(BlueprintCallable)
    static FTEAM_SETTING CheckValidTeamSetting(int32 DataNo, bool IsPurchaseCheck, bool IsPlayGoCheck, int32 MainDefPlType, int32 SubDefPlType);
    
    UFUNCTION(BlueprintCallable)
    static void CheckValidCharaAndCostumeAll(const FMemberInfo& InMemberInfo, int32 MainDefPlType, int32 SubDefPlType, int32& OutMainCharaNo, int32& OutMainCostumeNo, int32& OutMainColorNo, int32& OutSubCharaNo, int32& OutSubCostumeNo, int32& OutSubColorNo);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckValidCharaAndCostume(int32 InCharaNo, int32 InCostumeNo, int32 InColorNo, bool IsPurchaseCheck, bool IsPlayGoCheck, int32& OutCostumeNo, int32& OutColorNo);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeFixedFrameRate(bool Is60fps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitShiftRightPure(int32 Value, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static int32 BitShiftRight(int32 Value, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitShiftLeftPure(int32 Value, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static int32 BitShiftLeft(int32 Value, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitReverse(int32 Value);
    
};

