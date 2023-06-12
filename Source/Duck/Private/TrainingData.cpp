#include "DuckModule.h"
#include "TrainingData.h"

FTrainingData::FTrainingData() {
    this->IsKeyLog = false;
    this->IsAttackData = false;
    this->IsSideChange = false;
    this->StartPosition = 0;
    this->NetworkSimu = 0;
    this->Shortcut = 0;
    this->PlayerVitalgauge = 0;
    this->PlayerHCGauge = 0;
    this->PlayerGemGauge = 0;
    this->DummyVitalGauge = 0;
    this->DummyHCGauge = 0;
    this->DummyGemGauge = 0;
    this->Action = 0;
    this->Guard = 0;
    this->AdvancingGuard = 0;
    this->Passive = 0;
    this->AirPassive = 0;
    this->GruppeDefense = 0;
    this->CounterHit = 0;
    this->CPU_Level = 0;
    this->RecordSlotNum = 0;
}


