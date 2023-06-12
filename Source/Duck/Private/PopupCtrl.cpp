#include "DuckModule.h"
#include "PopupCtrl.h"

UUserWidget* UPopupCtrl::SpawnPopupMiniDialog(FMiniDialogInfo Info) {
    return NULL;
}

UUserWidget* UPopupCtrl::SpawnPopupDialog(EDialogKind Kind) {
    return NULL;
}

void UPopupCtrl::SetSuppressMiniDialog(bool FlgOn) {
}

void UPopupCtrl::ReleaseWidget() {
}

bool UPopupCtrl::IsSpawnedMiniDialog() const {
    return false;
}

bool UPopupCtrl::IsSpawnedDialog() const {
    return false;
}

UPopupCtrl* UPopupCtrl::GetInstance() {
    return NULL;
}

UMsgDataTbl* UPopupCtrl::GetErrorMsgTbl() {
    return NULL;
}

FText UPopupCtrl::GetErrorMsg(int32 ErrId) {
    return FText::GetEmpty();
}

bool UPopupCtrl::GetActiveDialog(UUserWidget*& OutWidget, EDialogKind& OutKind) {
    return false;
}

void UPopupCtrl::DestroyPopupMiniDialog(bool& nextExist, FMiniDialogInfo& nextInfo) {
}

void UPopupCtrl::DestroyPopupDialog(UUserWidget* pWidget) {
}

void UPopupCtrl::ClearPopupMiniDialogCueue() {
}

UPopupCtrl::UPopupCtrl() {
    this->mpActiveDialogWidget = NULL;
    this->mpActiveMiniDialog = NULL;
    this->mpErrorMsgTbl = NULL;
    this->mpRewardWidget = NULL;
    this->mpBaseCanvasWidget = NULL;
    this->mpBaseCanvasPanel = NULL;
}


