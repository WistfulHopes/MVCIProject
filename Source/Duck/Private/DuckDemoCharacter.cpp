#include "DuckModule.h"
#include "DuckDemoCharacter.h"
#include "DuckDemoSkeletalMeshComponent.h"

void ADuckDemoCharacter::SetupDemoChara(int32 CharaNo, int32 CostumeNo, int32 StyleNo) {
}

void ADuckDemoCharacter::Setup(int32 InCharaID, int32 InColorMaterialID, int32 InCostumeID) {
}

void ADuckDemoCharacter::SetPhysicsBlendSet(int32 PartsID, const TArray<FPhysicsBlendSet>& Set) {
}

void ADuckDemoCharacter::SetPartsVFXAttach(int32 PartsID, const FString& ParentBoneName, USceneComponent* pComp) {
}

void ADuckDemoCharacter::SetPartsDuckVisible(int32 PartsID, bool VisibleOn) {
}

void ADuckDemoCharacter::SetPartsAttach(int32 PartsID, const FString& ParentBoneName, const FString& PartsBoneName, const FVector& OfsLocate, const FVector& OfsRotate) {
}

void ADuckDemoCharacter::SetParticleAutoActivate(int32 ID) {
}

void ADuckDemoCharacter::SetIsMirroring(bool flag) {
}

ADuckDemoCharacter::ADuckDemoCharacter() {
    this->FacialMeshComponent = CreateDefaultSubobject<UDuckDemoSkeletalMeshComponent>(TEXT("FacialComponent"));
    this->ShouldTickViewPort = true;
    this->is_mirroring = false;
    this->isUseFacialComponent = false;
    this->BlendAlphaMotion = 1.00f;
    this->BlendAlphaFacial = 1.00f;
    this->NouseClothPhysics = false;
    this->FlgTeleportOn = false;
    this->ParticleSystemComp.AddDefaulted(20);
    this->bDuckVisible = true;
    this->bUseDemoMesh = true;
    this->bPhysicsBlendDisable = false;
    this->bSetupBattleLightChannel = false;
    this->bSetupLightChannel0 = false;
    this->PlaySoundId_00 = -1.00f;
    this->PlaySoundId_01 = -1.00f;
    this->PlaySoundId_02 = -1.00f;
    this->PlaySoundId_03 = -1.00f;
    this->PlaySoundId_04 = -1.00f;
    this->OriginalMaterialAsset = NULL;
}


