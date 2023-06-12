#pragma once
#include "DuckModule.h"
#include "DuckBaseSystem.h"
#include "EDialogKind.h"
#include "MiniDialogInfo.h"
#include "PopupCtrl.generated.h"

class UCanvasPanel;
class UMsgDataTbl;
class UPopupCtrl;
class UUserWidget;

UCLASS(Blueprintable)
class DUCK_API UPopupCtrl : public UDuckBaseSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpActiveDialogWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpActiveMiniDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMsgDataTbl* mpErrorMsgTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpRewardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpBaseCanvasWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCanvasPanel* mpBaseCanvasPanel;
    
public:
    UPopupCtrl();
    UFUNCTION(BlueprintCallable)
    UUserWidget* SpawnPopupMiniDialog(FMiniDialogInfo Info);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* SpawnPopupDialog(EDialogKind Kind);
    
    UFUNCTION(BlueprintCallable)
    void SetSuppressMiniDialog(bool FlgOn);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReleaseWidget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnedMiniDialog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnedDialog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPopupCtrl* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMsgDataTbl* GetErrorMsgTbl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetErrorMsg(int32 ErrId);
    
    UFUNCTION(BlueprintCallable)
    bool GetActiveDialog(UUserWidget*& OutWidget, EDialogKind& OutKind);
    
    UFUNCTION(BlueprintCallable)
    void DestroyPopupMiniDialog(bool& nextExist, FMiniDialogInfo& nextInfo);
    
    UFUNCTION(BlueprintCallable)
    void DestroyPopupDialog(UUserWidget* pWidget);
    
    UFUNCTION(BlueprintCallable)
    void ClearPopupMiniDialogCueue();
    
};

