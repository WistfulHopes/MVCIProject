#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EPlatform.h"
#include "DuckBlueprintFunctions.generated.h"

class AActor;
class ALevelScriptActor;
class UCommandListAsset;
class UDuckGameInstance;
class UDuckGameSingleton;
class UObject;

UCLASS(Blueprintable)
class DUCK_API UDuckBlueprintFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDuckBlueprintFunctions();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool WasInputKeyPressedForUI(UObject* WorldContextObject, int32 padNo, FKey Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorSpecifiedLevelFromPath(UObject* WorldContextObject, const FString& PATH, const FString& LevelName, const FTransform& trans);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorSpecifiedLevel(UObject* WorldContextObject, UClass* pCls, const FString& LevelName, const FTransform& trans);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorFromPathFind(UObject* WorldContextObject, const FString& PATH, const FTransform& trans);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorFromPath(UObject* WorldContextObject, const FString& PATH, const FTransform& trans);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkipPostLoadDeferredObjects(bool bSkip);
    
    UFUNCTION(BlueprintCallable)
    static UCommandListAsset* LoadCommandListAsset(int32 PlType);
    
    UFUNCTION(BlueprintCallable)
    static UClass* LoadClassDirect(const FString& PATH, bool IsFind, bool IsFullPath);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadAssetDirect(UClass* pCls, const FString& PATH, bool IsFind, bool IsFullPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRegionNorthAmerica();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRegionJapanese(bool IsLanguage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRegionEuropeanUnion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayGoComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpeningMovieSkip();
    
    UFUNCTION(BlueprintCallable)
    static bool IsOButtonBehavior();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInitLogInOff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoRetryFight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAgingDebug();
    
    UFUNCTION(BlueprintCallable)
    static bool GetWindowsResolution(FIntPoint& resolution);
    
    UFUNCTION(BlueprintCallable)
    static ALevelScriptActor* GetSpecifiedLevelScriptActor(AActor* Actor, const FString& LevelName);
    
    UFUNCTION(BlueprintCallable)
    static ALevelScriptActor* GetRunOnAnyThread(AActor* Actor, bool Flg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRandomCharaCostumeNo(int32 CharaNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayGoProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPlatform GetPlatform();
    
    UFUNCTION(BlueprintCallable)
    static UDuckGameSingleton* GetDuckGameSingleton();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDuckGameInstance* GetDuckGameInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UObject* FindAssetDirect(UClass* pCls, const FString& PATH);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CollectGarbageBP(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void CheckAndBreakIfSelectInvalidData();
    
};

