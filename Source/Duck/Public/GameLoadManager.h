#pragma once
#include "DuckModule.h"
#include "DuckBaseSystem.h"
#include "EPermanentAssetType.h"
#include "GameLoadManager.generated.h"

class UDataTable;
class UGameLoadManager;
class ULoadAssets;
class ULoadBtlCharaAssets;
class ULoadBtlCharaStageAssets;
class ULoadBtlCharaVersionAssets;
class ULoadBtlCmnVersionAssets;
class ULoadBtlCosColAssets;
class ULoadProfCardCharaAssets;
class ULoadStageAssets;
class UMsgDataTbl;
class UObject;

UCLASS(Blueprintable)
class DUCK_API UGameLoadManager : public UDuckBaseSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadAssets*> mArrPermanentAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> mArrStockPermanentPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadBtlCharaAssets*> mArrBtlCharaAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadBtlCosColAssets*> mArrBtlCosColAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadBtlCharaStageAssets*> mArrBtlStageAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoadBtlCmnVersionAssets* mpBtlCmnVersionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadBtlCharaVersionAssets*> mArrBtlCharaVersionAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoadStageAssets* mpStageLoadAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadProfCardCharaAssets*> mArrProfCardCharaAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadAssets*> mArrTemporaryAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMsgDataTbl* mpRichPresenceMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMsgDataTbl* mpSystemMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMsgDataTbl* mpErrorMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> mArrHonorMsgData;
    
public:
    UGameLoadManager();
    UFUNCTION(BlueprintCallable)
    void UnloadUnnecessaryLoadPack();
    
    UFUNCTION(BlueprintCallable)
    void UnloadTemporaryAssetAll();
    
    UFUNCTION(BlueprintCallable)
    void UnloadTemporaryAsset(ULoadAssets* pLoadAsset);
    
    UFUNCTION(BlueprintCallable)
    void UnloadProfCardCharaCos(int32 CharaNo, int32 CostumeNo);
    
    UFUNCTION(BlueprintCallable)
    void UnloadProfCardCharaCmn(int32 CharaNo);
    
    UFUNCTION(BlueprintCallable)
    void UnloadProfCardCharaAll();
    
    UFUNCTION(BlueprintCallable)
    void UnloadPermanentAsset(EPermanentAssetType Type);
    
    UFUNCTION(BlueprintCallable)
    void UnloadBtlLoadPackAll();
    
    UFUNCTION(BlueprintCallable)
    void ResetCarryOverAll();
    
    UFUNCTION(BlueprintCallable)
    ULoadAssets* RequestLoadBtlStageAsset(int32 CharaNo, int32 stageNo);
    
    UFUNCTION(BlueprintCallable)
    ULoadAssets* RequestLoadBtlCosColorAsset(int32 CharaNo, int32 CostumeNo, int32 ColorNo);
    
    UFUNCTION(BlueprintCallable)
    ULoadAssets* RequestLoadBtlCmnVersionAsset(int32 Version);
    
    UFUNCTION(BlueprintCallable)
    ULoadAssets* RequestLoadBtlCharaVersionAsset(int32 CharaNo, int32 Version);
    
    UFUNCTION(BlueprintCallable)
    ULoadAssets* RequestLoadBtlCharaAsset(int32 CharaNo);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseStockPermanentPackage();
    
    UFUNCTION(BlueprintCallable)
    ULoadAssets* LoadTemporaryAsset(const FString& PATH);
    
    UFUNCTION(BlueprintCallable)
    void LoadStockPermanentPackage();
    
    UFUNCTION(BlueprintCallable)
    ULoadAssets* LoadStageAsset(int32 stageNo);
    
    UFUNCTION(BlueprintCallable)
    ULoadProfCardCharaAssets* LoadProfCardCharaCos(int32 index, int32 CharaNo, int32 CostumeNo, bool bLoadStartManual);
    
    UFUNCTION(BlueprintCallable)
    ULoadProfCardCharaAssets* LoadProfCardCharaCmn(int32 index, int32 CharaNo, bool bLoadStartManual);
    
    UFUNCTION(BlueprintCallable)
    void LoadPermanentAsset(EPermanentAssetType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadEndTemporaryAssetAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadEndProfCardCharaCos(int32 CharaNo, int32 CostumeNo) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadEndProfCardCharaCore(int32 CharaNo, int32 CostumeNo) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadEndProfCardCharaCmn(int32 CharaNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadEndProfCardCharaAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadEndPermanentAssetAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadEndPermanentAsset(EPermanentAssetType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadEndBtlLoadPackAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAsyncLoadAnyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProfCardCharaCosPath(int32 CharaNo, int32 CostumeNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProfCardCharaCmnPath(int32 CharaNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameLoadManager* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharaBtlCosColorPath(int32 CharaNo, int32 CostumeNo, int32 ColorNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharaBtlCmnPath(int32 CharaNo) const;
    
    UFUNCTION(BlueprintCallable)
    static void ConsoleOutput(const FString& Msg);
    
    UFUNCTION(BlueprintCallable)
    void CheckAndMarkSameStage(int32 stageNo);
    
    UFUNCTION(BlueprintCallable)
    void CheckAndMarkSameChara(int32 CharaNo, int32 CostumeNo, int32 ColorNo, int32 stageNo, int32 Version);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAllBattlePackage();
    
};

