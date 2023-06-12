#include "DuckModule.h"
#include "StyleData.h"

FStyleData::FStyleData() {
    this->IntActionExit = 0;
    this->IntStyleExit = 0;
    this->IntActionInit = 0;
    this->IntStyleInit = 0;
    this->IntActionRvk = 0;
    this->IntStyleRvk = 0;
    this->IntActionTime = 0;
    this->IntStyleTime = 0;
    this->LimitCancelST1 = 0;
    this->LimitCancelST0 = 0;
    this->TimeLimit = 0;
    this->EndActST1 = 0;
    this->EndActST0 = 0;
    this->EndAction = 0;
    this->EndStyle = 0;
    this->CantTouch = false;
    this->CantAirGuard = false;
    this->CantCrouchGuard = false;
    this->CantStandGuard = false;
    this->CantAirJump = false;
    this->CantTriangleJump = false;
    this->CantJump = false;
    this->CantCrouch = false;
    this->CantTurn = false;
    this->CantWalk = false;
    this->Immortal = false;
    this->AttackResist = false;
    this->DamageResist = false;
    this->SuperArmor = false;
    this->GainRatioHC = 0;
    this->GemGaugeAdd = 0;
    this->VitalAddAndSub = 0;
    this->MoveSpeedAdjust = 0;
    this->DefensiveAdjust = 0;
    this->OffensiveAdjust = 0;
    this->BaseStyleNo = 0;
}


