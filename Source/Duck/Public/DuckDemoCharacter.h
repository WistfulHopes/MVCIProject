#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AttachChildActor.h"
#include "DemoParticleInfo.h"
#include "DuckCharacter.h"
#include "NouseBodyPhysicsParts.h"
#include "OriginalMaterialParts.h"
#include "PhysicsBlendSet.h"
#include "SoundSetupParam.h"
#include "DuckDemoCharacter.generated.h"

class ASoundSequencerObj;
class UDuckPlayerColorMaterialAsset;
class UDuckSkeletalMeshComponent;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class DUCK_API ADuckDemoCharacter : public ADuckCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDuckSkeletalMeshComponent* FacialMeshComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldTickViewPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool is_mirroring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool isUseFacialComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendAlphaMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendAlphaFacial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NouseBodyPhysicsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNouseBodyPhysicsParts> NouseBodyPhysicsParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NouseClothPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NouseClothPhysicsParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool FlgTeleportOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachChildActor> AttachChildActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> ParticleSystemComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDemoParticleInfo> DemoParticlInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bDuckVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDemoMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPhysicsBlendDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetupBattleLightChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetupLightChannel0;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundSetupParam> ArrSoundSetupParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASoundSequencerObj*> ArrSoundObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlaySoundId_00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlaySoundId_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlaySoundId_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlaySoundId_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlaySoundId_04;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDuckPlayerColorMaterialAsset* OriginalMaterialAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOriginalMaterialParts> OriginalMaterialAssetParts;
    
public:
    ADuckDemoCharacter();
    UFUNCTION(BlueprintCallable)
    void SetupDemoChara(int32 CharaNo, int32 CostumeNo, int32 StyleNo);
    
    UFUNCTION(BlueprintCallable)
    void Setup(int32 InCharaID, int32 InColorMaterialID, int32 InCostumeID);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsBlendSet(int32 PartsID, const TArray<FPhysicsBlendSet>& Set);
    
    UFUNCTION(BlueprintCallable)
    void SetPartsVFXAttach(int32 PartsID, const FString& ParentBoneName, USceneComponent* pComp);
    
    UFUNCTION(BlueprintCallable)
    void SetPartsDuckVisible(int32 PartsID, bool VisibleOn);
    
    UFUNCTION(BlueprintCallable)
    void SetPartsAttach(int32 PartsID, const FString& ParentBoneName, const FString& PartsBoneName, const FVector& OfsLocate, const FVector& OfsRotate);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleAutoActivate(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMirroring(bool flag);
    
};

