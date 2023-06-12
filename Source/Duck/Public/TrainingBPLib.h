#pragma once
#include "DuckModule.h"
#include "EConfigBreakFall.h"
#include "EConfigChoice3.h"
#include "EConfigDifficultyType.h"
#include "EConfigDummyAction.h"
#include "EConfigGMGaugeType.h"
#include "EConfigGuardType.h"
#include "EConfigInitLayout.h"
#include "EConfigLatencyType.h"
#include "EConfigRecoveryType.h"
#include "EConfigVTGaugeType.h"
#include "EGemKind.h"
#include "ERecordState.h"
#include "ETrainingShortcutType.h"
#include "TrainingData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TrainingBPLib.generated.h"

UCLASS(Blueprintable)
class DUCK_API UTrainingBPLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTrainingBPLib();
    UFUNCTION(BlueprintCallable)
    static void SetVitalGaugeType(int32 teamNo, EConfigVTGaugeType GaugeType);
    
    UFUNCTION(BlueprintCallable)
    static void SetupTraining();
    
    UFUNCTION(BlueprintCallable)
    static void SetupOnlineTraining();
    
    UFUNCTION(BlueprintCallable)
    static void SetThrowEscape(EConfigChoice3 Choice3);
    
    UFUNCTION(BlueprintCallable)
    static void SetReverseSide(bool Flg);
    
    UFUNCTION(BlueprintCallable)
    static void SetRecoveryType(EConfigRecoveryType RecoveryType);
    
    UFUNCTION(BlueprintCallable)
    static void SetRecordSelectSlotNum(int32 SlotNum);
    
    UFUNCTION(BlueprintCallable)
    static void SetLatencyType(EConfigLatencyType LatencyType);
    
    UFUNCTION(BlueprintCallable)
    static void SetInitLayout(EConfigInitLayout InitLayout);
    
    UFUNCTION(BlueprintCallable)
    static void SetHyperGaugeType(int32 teamNo, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void SetGuardType(EConfigGuardType GuardType);
    
    UFUNCTION(BlueprintCallable)
    static void SetGemType(int32 teamNo, EGemKind GaugeType);
    
    UFUNCTION(BlueprintCallable)
    static void SetGemGaugeType(int32 teamNo, EConfigGMGaugeType GaugeType);
    
    UFUNCTION(BlueprintCallable)
    static void SetEasyHC(bool Flg);
    
    UFUNCTION(BlueprintCallable)
    static void SetDummyControl(bool Flg);
    
    UFUNCTION(BlueprintCallable)
    static void SetDummyAction(EConfigDummyAction Action);
    
    UFUNCTION(BlueprintCallable)
    static void SetDifficultyType(EConfigDifficultyType DifficultyType);
    
    UFUNCTION(BlueprintCallable)
    static void SetCounterHit(EConfigChoice3 Choice3);
    
    UFUNCTION(BlueprintCallable)
    static void SetBreakFall(EConfigBreakFall BreakFall);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoSJ(bool Flg);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoCombo(bool Flg);
    
    UFUNCTION(BlueprintCallable)
    static void SetADVGuardType(EConfigGuardType GuardType);
    
    UFUNCTION(BlueprintCallable)
    static void ReStart();
    
    UFUNCTION(BlueprintCallable)
    static void ReflectionTrainingData(FTrainingData Data, EGemKind gemTypePlayer, EGemKind gemTypeDummy, bool IsOnline);
    
    UFUNCTION(BlueprintCallable)
    static void RecordStop();
    
    UFUNCTION(BlueprintCallable)
    static void RecordStart();
    
    UFUNCTION(BlueprintCallable)
    static void RecordPlayRandom();
    
    UFUNCTION(BlueprintCallable)
    static void RecordPlay();
    
    UFUNCTION(BlueprintCallable)
    static void RecordDelete(int32 SlotNum);
    
    UFUNCTION(BlueprintCallable)
    static ETrainingShortcutType GetShortcutTraining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRecordTime(int32 SlotNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERecordState GetRecordState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecordSelectSlotNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRecordPlayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsReStartFlg();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGemKind GetGemType(int32 teamNo);
    
    UFUNCTION(BlueprintCallable)
    static void DoGaugeReset();
    
    UFUNCTION(BlueprintCallable)
    static void ClearReStart();
    
};

