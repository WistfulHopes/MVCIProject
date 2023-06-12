#include "DuckModule.h"
#include "PlayerInfo.h"

FPlayerInfo::FPlayerInfo() {
    this->TeamID = 0;
    this->PlayerID = 0;
    this->PlayerType = EPlayerType::COMMON;
    this->ColorNo = 0;
    this->CostumeNo = 0;
    this->Routine1 = 0;
    this->ActStatus = 0;
    this->PoseStatus = 0;
    this->JumpStatus = 0;
    this->PartnerNo = 0;
    this->IsVisible = false;
    this->IsVanish = false;
    this->IsVanishBody = false;
    this->IsVanishDouble = false;
    this->OffScreen = false;
    this->IsAssist = false;
    this->IsHitStop = false;
    this->IsUpdateDouble = false;
    this->Cooperative = false;
    this->Minion = false;
    this->IsActive = false;
    this->IsValid = false;
    this->AdjustRotY = 0.00f;
    this->AdjustPosX = 0.00f;
    this->Side = ESide::LEFT;
    this->InnerSide = ESide::LEFT;
    this->CmdSide = ESide::LEFT;
    this->Life = 0;
    this->LifeMax = 0;
    this->Recoverable = 0;
    this->HitNo = 0;
    this->StyleNo = 0;
    this->ShcReserved = 0;
    this->MtrlColor = EMaterialColorType::DEFAULT;
    this->Condition = 0;
    this->ChargeFlag = 0;
    this->ObjectPriority = 0;
    this->InputDisp[0] = 0;
    this->InputDisp[1] = 0;
    this->InputDisp[2] = 0;
    this->InputDisp[3] = 0;
    this->InputDisp[4] = 0;
    this->InputDisp[5] = 0;
    this->InputDisp[6] = 0;
    this->InputDisp[7] = 0;
    this->InputDisp[8] = 0;
    this->InputDisp[9] = 0;
    this->InputDisp[10] = 0;
    this->InputDisp[11] = 0;
    this->InputDisp[12] = 0;
    this->InputDisp[13] = 0;
    this->InputDisp[14] = 0;
}


