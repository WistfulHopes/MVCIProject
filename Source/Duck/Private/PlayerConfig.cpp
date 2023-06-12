#include "DuckModule.h"
#include "PlayerConfig.h"

FPlayerConfig::FPlayerConfig() {
    this->InitPosX = 0;
    this->bNoDeath = false;
    this->bDummyControl = false;
    this->DummyAction = 0;
    this->GuardType = 0;
    this->ADVGuardType = 0;
    this->ThrowEscape = 0;
    this->CounterHit = 0;
    this->RecoveryType = 0;
    this->BreakFall = 0;
    this->DifficultyType = 0;
    this->HandicapType = 0;
    this->VitalGaugeType = 0;
    this->HyperGaugeType = 0;
    this->GemGaugeType = 0;
    this->GemTypeBit = 0;
    this->LatencyType = 0;
    this->bHealing = false;
    this->bHCRecover = false;
    this->bGMRecover = false;
    this->bAutoCombo = false;
    this->bEasyHC = false;
    this->bAutoSJ = false;
}


