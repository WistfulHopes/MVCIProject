#include "DuckModule.h"
#include "DuckBlueprintFunctions.h"

bool UDuckBlueprintFunctions::WasInputKeyPressedForUI(UObject* WorldContextObject, int32 padNo, FKey Key) {
    return false;
}

AActor* UDuckBlueprintFunctions::SpawnActorSpecifiedLevelFromPath(UObject* WorldContextObject, const FString& PATH, const FString& LevelName, const FTransform& trans) {
    return NULL;
}

AActor* UDuckBlueprintFunctions::SpawnActorSpecifiedLevel(UObject* WorldContextObject, UClass* pCls, const FString& LevelName, const FTransform& trans) {
    return NULL;
}

AActor* UDuckBlueprintFunctions::SpawnActorFromPathFind(UObject* WorldContextObject, const FString& PATH, const FTransform& trans) {
    return NULL;
}

AActor* UDuckBlueprintFunctions::SpawnActorFromPath(UObject* WorldContextObject, const FString& PATH, const FTransform& trans) {
    return NULL;
}

void UDuckBlueprintFunctions::SetSkipPostLoadDeferredObjects(bool bSkip) {
}

UCommandListAsset* UDuckBlueprintFunctions::LoadCommandListAsset(int32 PlType) {
    return NULL;
}

UClass* UDuckBlueprintFunctions::LoadClassDirect(const FString& PATH, bool IsFind, bool IsFullPath) {
    return NULL;
}

UObject* UDuckBlueprintFunctions::LoadAssetDirect(UClass* pCls, const FString& PATH, bool IsFind, bool IsFullPath) {
    return NULL;
}

bool UDuckBlueprintFunctions::IsRegionNorthAmerica() {
    return false;
}

bool UDuckBlueprintFunctions::IsRegionJapanese(bool IsLanguage) {
    return false;
}

bool UDuckBlueprintFunctions::IsRegionEuropeanUnion() {
    return false;
}

bool UDuckBlueprintFunctions::IsPlayGoComplete() {
    return false;
}

bool UDuckBlueprintFunctions::IsPC() {
    return false;
}

bool UDuckBlueprintFunctions::IsOpeningMovieSkip() {
    return false;
}

bool UDuckBlueprintFunctions::IsOButtonBehavior() {
    return false;
}

bool UDuckBlueprintFunctions::IsInitLogInOff() {
    return false;
}

bool UDuckBlueprintFunctions::IsAutoRetryFight() {
    return false;
}

bool UDuckBlueprintFunctions::IsAgingDebug() {
    return false;
}

bool UDuckBlueprintFunctions::GetWindowsResolution(FIntPoint& resolution) {
    return false;
}

ALevelScriptActor* UDuckBlueprintFunctions::GetSpecifiedLevelScriptActor(AActor* Actor, const FString& LevelName) {
    return NULL;
}

ALevelScriptActor* UDuckBlueprintFunctions::GetRunOnAnyThread(AActor* Actor, bool Flg) {
    return NULL;
}

int32 UDuckBlueprintFunctions::GetRandomCharaCostumeNo(int32 CharaNo) {
    return 0;
}

float UDuckBlueprintFunctions::GetPlayGoProgress() {
    return 0.0f;
}

EPlatform UDuckBlueprintFunctions::GetPlatform() {
    return EPlatform::PS4;
}

UDuckGameSingleton* UDuckBlueprintFunctions::GetDuckGameSingleton() {
    return NULL;
}

UDuckGameInstance* UDuckBlueprintFunctions::GetDuckGameInstance(UObject* WorldContextObject) {
    return NULL;
}

UObject* UDuckBlueprintFunctions::FindAssetDirect(UClass* pCls, const FString& PATH) {
    return NULL;
}

void UDuckBlueprintFunctions::CollectGarbageBP(UObject* WorldContextObject) {
}

void UDuckBlueprintFunctions::CheckAndBreakIfSelectInvalidData() {
}

UDuckBlueprintFunctions::UDuckBlueprintFunctions() {
}


