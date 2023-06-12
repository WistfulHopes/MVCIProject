#pragma once
#include "DuckModule.h"
#include "DemoMotionUpdateInf.h"
#include "DemoPartsInf.h"
#include "DuckCharacter.h"
#include "EFacialSetting.h"
#include "MotionBlendParameter.h"
#include "DuckSimpleCharacter.generated.h"

class ASimpleEffectEmitter;
class UAnimSequencesAsset;
class UDuckCharaAnimInstance;
class UGimmickVfxAsset;
class UParticleAsset;
class USkeletalMesh;
class UTexture;

UCLASS(Blueprintable)
class DUCK_API ADuckSimpleCharacter : public ADuckCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDuckCharaAnimInstance* anim_inst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDuckCharaAnimInstance*> anim_inst_parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_auto_update_motion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_auto_loop_motion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_mirroring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_apply_physics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_apply_cloth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_zero_move_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacialSetting facial_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDemoMotionUpdateInf motion_inf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDemoMotionUpdateInf facial_inf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionBlendParameter blend_inf_body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionBlendParameter blend_inf_facial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 style_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDemoPartsInf> parts_attach_inf_mirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDemoPartsInf> parts_attach_inf_default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDemoPartsInf> parts_attach_inf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickVfxAsset* GimmickVfxAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleAsset* ParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float particle_dilation_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 particle_tick_num;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASimpleEffectEmitter*> EffectEmitters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> TranslateIDMapGimmickVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseNoIDCharaMesh;
    
public:
    ADuckSimpleCharacter();
    UFUNCTION(BlueprintCallable)
    void SpawnGimmickVfx(int32 _GimmickVfxID);
    
    UFUNCTION(BlueprintCallable)
    void SetupMotionInf(const FDemoMotionUpdateInf& inf);
    
    UFUNCTION(BlueprintCallable)
    void SetupFacialInf(const FDemoMotionUpdateInf& inf);
    
    UFUNCTION(BlueprintCallable)
    void SetupFacialBlendInf(int32 Frame);
    
    UFUNCTION(BlueprintCallable)
    void SetupBodyBlendInf(int32 Frame);
    
    UFUNCTION(BlueprintCallable)
    void Setup(int32 InCharaID, int32 InColorMaterialID, int32 InCostumeID);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(int32 Style);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMeshNoIDChara(USkeletalMesh* _Mesh);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleTickNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleDilationTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleAsset(UParticleAsset* _ParticleAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionAsset(UAnimSequencesAsset* _MotionAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialTextureParameter(int32 PartsIndex, int32 MatIndex, FName ParameterName, UTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialScalarParameterAll(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialScalarParameter(int32 PartsIndex, int32 MatIndex, FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLightingChannel(bool _Channel0, bool _Channel1, bool _Channel2);
    
    UFUNCTION(BlueprintCallable)
    void SetIsZeroMoveValue(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMirroring(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsApplyPhysics(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsApplyCloth(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetGimmickVfxAsset(UGimmickVfxAsset* _GimmickVfxAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetFacialSetting(EFacialSetting setting);
    
    UFUNCTION(BlueprintCallable)
    void SetDuckEnableClothPhysics(int32 InCharaID, int32 InCostumeID);
    
    UFUNCTION(BlueprintCallable)
    void RemovePartsInf(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void KillGimmickVfx(int32 _GimmickVfxID);
    
    UFUNCTION(BlueprintCallable)
    void KillAllGimmickVfx();
    
    UFUNCTION(BlueprintCallable)
    void DisableIndirectLightingCache();
    
    UFUNCTION(BlueprintCallable)
    void AddPartsInf(int32 index, FDemoPartsInf inf);
    
};

