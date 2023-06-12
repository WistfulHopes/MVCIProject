#include "DuckModule.h"
#include "GameLoadManager.h"

void UGameLoadManager::UnloadUnnecessaryLoadPack() {
}

void UGameLoadManager::UnloadTemporaryAssetAll() {
}

void UGameLoadManager::UnloadTemporaryAsset(ULoadAssets* pLoadAsset) {
}

void UGameLoadManager::UnloadProfCardCharaCos(int32 CharaNo, int32 CostumeNo) {
}

void UGameLoadManager::UnloadProfCardCharaCmn(int32 CharaNo) {
}

void UGameLoadManager::UnloadProfCardCharaAll() {
}

void UGameLoadManager::UnloadPermanentAsset(EPermanentAssetType Type) {
}

void UGameLoadManager::UnloadBtlLoadPackAll() {
}

void UGameLoadManager::ResetCarryOverAll() {
}

ULoadAssets* UGameLoadManager::RequestLoadBtlStageAsset(int32 CharaNo, int32 stageNo) {
    return NULL;
}

ULoadAssets* UGameLoadManager::RequestLoadBtlCosColorAsset(int32 CharaNo, int32 CostumeNo, int32 ColorNo) {
    return NULL;
}

ULoadAssets* UGameLoadManager::RequestLoadBtlCmnVersionAsset(int32 Version) {
    return NULL;
}

ULoadAssets* UGameLoadManager::RequestLoadBtlCharaVersionAsset(int32 CharaNo, int32 Version) {
    return NULL;
}

ULoadAssets* UGameLoadManager::RequestLoadBtlCharaAsset(int32 CharaNo) {
    return NULL;
}

void UGameLoadManager::ReleaseStockPermanentPackage() {
}

ULoadAssets* UGameLoadManager::LoadTemporaryAsset(const FString& PATH) {
    return NULL;
}

void UGameLoadManager::LoadStockPermanentPackage() {
}

ULoadAssets* UGameLoadManager::LoadStageAsset(int32 stageNo) {
    return NULL;
}

ULoadProfCardCharaAssets* UGameLoadManager::LoadProfCardCharaCos(int32 index, int32 CharaNo, int32 CostumeNo, bool bLoadStartManual) {
    return NULL;
}

ULoadProfCardCharaAssets* UGameLoadManager::LoadProfCardCharaCmn(int32 index, int32 CharaNo, bool bLoadStartManual) {
    return NULL;
}

void UGameLoadManager::LoadPermanentAsset(EPermanentAssetType Type) {
}

bool UGameLoadManager::IsLoadEndTemporaryAssetAll() const {
    return false;
}

bool UGameLoadManager::IsLoadEndProfCardCharaCos(int32 CharaNo, int32 CostumeNo) const {
    return false;
}

bool UGameLoadManager::IsLoadEndProfCardCharaCore(int32 CharaNo, int32 CostumeNo) const {
    return false;
}

bool UGameLoadManager::IsLoadEndProfCardCharaCmn(int32 CharaNo) const {
    return false;
}

bool UGameLoadManager::IsLoadEndProfCardCharaAll() const {
    return false;
}

bool UGameLoadManager::IsLoadEndPermanentAssetAll() const {
    return false;
}

bool UGameLoadManager::IsLoadEndPermanentAsset(EPermanentAssetType Type) const {
    return false;
}

bool UGameLoadManager::IsLoadEndBtlLoadPackAll() const {
    return false;
}

bool UGameLoadManager::IsAsyncLoadAnyType() const {
    return false;
}

FString UGameLoadManager::GetProfCardCharaCosPath(int32 CharaNo, int32 CostumeNo) const {
    return TEXT("");
}

FString UGameLoadManager::GetProfCardCharaCmnPath(int32 CharaNo) const {
    return TEXT("");
}

UGameLoadManager* UGameLoadManager::GetInstance() {
    return NULL;
}

FString UGameLoadManager::GetCharaBtlCosColorPath(int32 CharaNo, int32 CostumeNo, int32 ColorNo) const {
    return TEXT("");
}

FString UGameLoadManager::GetCharaBtlCmnPath(int32 CharaNo) const {
    return TEXT("");
}

void UGameLoadManager::ConsoleOutput(const FString& Msg) {
}

void UGameLoadManager::CheckAndMarkSameStage(int32 stageNo) {
}

void UGameLoadManager::CheckAndMarkSameChara(int32 CharaNo, int32 CostumeNo, int32 ColorNo, int32 stageNo, int32 Version) {
}

void UGameLoadManager::AsyncLoadAllBattlePackage() {
}

UGameLoadManager::UGameLoadManager() {
    this->mpBtlCmnVersionAsset = NULL;
    this->mpStageLoadAsset = NULL;
    this->mpRichPresenceMsgData = NULL;
    this->mpSystemMsgData = NULL;
    this->mpErrorMsgData = NULL;
}


