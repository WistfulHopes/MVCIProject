#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EventFunction.generated.h"

class ADuckCharaVisualManager;

UCLASS(Blueprintable)
class DUCK_API UEventFunction : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADuckCharaVisualManager* Visual;
    
public:
    UEventFunction();
    UFUNCTION(BlueprintCallable)
    void Withdrawal(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void UniqueDummy(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SystemDummy(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StorySuperArmor(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryStatsStun(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryStatsPoison(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StorySpeedUp(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryRegenVital(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryRegenHyper(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryRecoverVital(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryRecoverHyper(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryGainHyper(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryGainGem(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryEffect(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryDurability(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryDummy(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryDefenseUp(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void StoryAttackUp(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SoundDummy(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void ShotDummy(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldPosition(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldOtherEnd(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldOtherBegin(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldNormalEnd(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldNormalBegin(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldDemoEnd(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldDemoBegin(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetUnLock(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetSuperArmor(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetSubHitNo(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetStyleTimer(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetSpWait(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedUp(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenVib(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenPosition(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetRuthlessWall(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetOrbitParam(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetOrbitAngle(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetOffsetTarget(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetOffsetSelf(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetOffsetRival(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetOffsetParent(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetOffsetLockTarget(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetNiceBottle(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetLock(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetLanding(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetJointUnLock(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetJointLock(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreVib(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetHoseiSHC(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetHoseiGEM(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldDamage(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetHitMark(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeValue(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetFreeMoveZ(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetFlyStart(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetFlyEnd(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawVector(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetDefenseCorrection(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageResist(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageAbsorb(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetDamage(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetCreateLight(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPosition(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraOffset(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFlag(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackOutFlip(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackOut(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackCorrection(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetAtckWait(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetAnotherWorldEnd(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetAnotherWorldBegin(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void SetAdjustRotY(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void ResetCommandPrecede(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void ResetClothing(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void ResetChargeBuffer(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void OwnerDummy(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void NobiUpdate(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void NobiInit(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void HudDummy(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void FieldDummy(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void EraseByShotCategory(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void DropItem(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void CharaDummy(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void CameraDummy(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void CalcUTimer(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void CalcUParam(const TArray<int32>& _Values);
    
    UFUNCTION(BlueprintCallable)
    void CalcStoryGauge(const TArray<int32>& _Values);
    
};

