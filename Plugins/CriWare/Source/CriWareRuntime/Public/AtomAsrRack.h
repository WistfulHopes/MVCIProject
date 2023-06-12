#pragma once
#include "Engine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AtomAsrRack.generated.h"

class UAtomAsrRack;

UCLASS(Blueprintable)
class UAtomAsrRack : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RackId;
    
    UAtomAsrRack();
    UFUNCTION(BlueprintCallable)
    void SetBusVolumeByName(const FString& BusName, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelByName(const FString& SourceBusName, const FString& DestBusName, float Level);
    
    UFUNCTION(BlueprintCallable)
    static UAtomAsrRack* GetDefaultAsrRack();
    
    UFUNCTION(BlueprintCallable)
    static UAtomAsrRack* GetAsrRack(int32 AsrRackId);
    
    UFUNCTION(BlueprintCallable)
    void DetachDspBusSetting();
    
    UFUNCTION(BlueprintCallable)
    void AttachDspBusSetting(const FString& SettingName);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds);
    
};

