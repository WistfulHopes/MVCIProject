#include "DuckModule.h"
#include "NotifyEffectEditorManager.h"

void UNotifyEffectEditorManager::UpdateEffect() {
}

void UNotifyEffectEditorManager::StopAllCue() {
}

void UNotifyEffectEditorManager::PlayCue(FName Message, USoundAtomCue* pCue) {
}

void UNotifyEffectEditorManager::KillEffect(bool AllEffectKill, FName Message, int32 KillType) {
}

UNotifyEffectEditorManager* UNotifyEffectEditorManager::GetInstance() {
    return NULL;
}

void UNotifyEffectEditorManager::CreateEffect(USceneComponent* pTargetScene, FName Message, UParticleSystemComponent* pPSComponent, bool FromStart, int32 OldEffectKillType) {
}

void UNotifyEffectEditorManager::ClearEmitter(int32 KillType, const FString& Message) {
}

void UNotifyEffectEditorManager::ClearAllEmitter(int32 KillType) {
}

bool UNotifyEffectEditorManager::CheckMessage(FName Message) {
    return false;
}

UNotifyEffectEditorManager::UNotifyEffectEditorManager() {
}


