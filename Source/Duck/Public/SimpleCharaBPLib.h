#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DemoMotionUpdateInf.h"
#include "SimpleCharaBPLib.generated.h"

class ADuckSimpleCharacter;
class UProfCardPoseData;

UCLASS(Blueprintable)
class DUCK_API USimpleCharaBPLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USimpleCharaBPLib();
    UFUNCTION(BlueprintCallable)
    static void SetupProfileParticle(ADuckSimpleCharacter* _Actor, int32 _CharaId);
    
    UFUNCTION(BlueprintCallable)
    static void SetupProfileMotion(ADuckSimpleCharacter* _Actor, int32 _CharaId);
    
    UFUNCTION(BlueprintCallable)
    static void SetupProfileGimmick(ADuckSimpleCharacter* _Actor, int32 _CharaId, int32 _Color, int32 _Costume);
    
    UFUNCTION(BlueprintCallable)
    static void SetupProfileData(ADuckSimpleCharacter* _Actor, int32 _CharaId, int32 _Color, int32 _Costume);
    
    UFUNCTION(BlueprintCallable)
    static void SetupBattleParticle(ADuckSimpleCharacter* _Actor, int32 _CharaId);
    
    UFUNCTION(BlueprintCallable)
    static void SetupBattleMotion(ADuckSimpleCharacter* _Actor, int32 _CharaId);
    
    UFUNCTION(BlueprintCallable)
    static void SetupBattleGimmick(ADuckSimpleCharacter* _Actor, int32 _CharaId);
    
    UFUNCTION(BlueprintCallable)
    static void SetupBattleData(ADuckSimpleCharacter* _Actor, int32 _CharaId, int32 _Color, int32 _Costume);
    
    UFUNCTION(BlueprintCallable)
    static void SetPauseData(ADuckSimpleCharacter* _Actor, UProfCardPoseData* _PoseData, int32 _PosNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UProfCardPoseData* LoadPauseData(int32 _CharaId, bool _CollectionOnly);
    
    UFUNCTION(BlueprintCallable)
    static FDemoMotionUpdateInf GetMotionInf(UProfCardPoseData* _ProfData, int32 _PosNo);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetCameraZVector(FTransform _CameraTransform);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetCameraYVector(FTransform _CameraTransform);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetCameraXVector(FTransform _CameraTransform);
    
    UFUNCTION(BlueprintCallable)
    static void Finalize(ADuckSimpleCharacter* _Actor);
    
};

