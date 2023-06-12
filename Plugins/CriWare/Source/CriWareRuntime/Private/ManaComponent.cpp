#include "ManaComponent.h"

void UManaComponent::StopAndWaitCompletion() {
}

void UManaComponent::Stop() {
}

void UManaComponent::SetVolume(float Volume) {
}

void UManaComponent::SetTexture(UManaTexture* Texture) {
}

void UManaComponent::SetCachedData(const TArray<uint8>& DataArray) {
}

void UManaComponent::SeekToPosition(int32 FrameNumber) {
}

void UManaComponent::ResetCachedData() {
}

void UManaComponent::Prepare() {
}

void UManaComponent::Play() {
}

void UManaComponent::Pause(bool bPause) {
}

bool UManaComponent::IsPaused() {
    return false;
}

float UManaComponent::GetVolume() {
    return 0.0f;
}

float UManaComponent::GetTime() {
    return 0.0f;
}

UTexture* UManaComponent::GetTexture() {
    return NULL;
}

EManaComponentStatus UManaComponent::GetStatus() {
    return EManaComponentStatus::Stop;
}

int32 UManaComponent::GetFrameNumber() {
    return 0;
}

UManaComponent::UManaComponent() {
    this->Movie = NULL;
    this->bLoop = false;
    this->mManaPlayTimeMS = -1;
}

