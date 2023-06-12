#include "DuckModule.h"
#include "RollBackParameterProjectile.h"

FRollBackParameterProjectile::FRollBackParameterProjectile() {
    this->ProjectileState = 0;
    this->ElapsedFrame = 0;
    this->Side = 0;
    this->TimerFrame = 0.00f;
    this->RestoreFrame = 0.00f;
    this->isUpdateTransform = false;
    this->CoreElapsedFrame = 0;
    this->MeshElapsedFrame = 0;
    this->BeamElapsedFrame = 0;
    this->AuraElapsedFrame = 0;
    this->CounteractElapsedFrame = 0;
    this->DeathElapsedFrame = 0;
    this->GroundElapsedFrame = 0;
    this->RestoreElapsedFrame = 0;
    this->CoreLightState = 0;
    this->CoreLightFrame = 0;
    this->BeamLightState = 0;
    this->BeamLightFrame = 0;
    this->AuraLightState = 0;
    this->AuraLightFrame = 0;
    this->CounteractLightState = 0;
    this->CounteractLightFrame = 0;
    this->DeathLightState = 0;
    this->DeathLightFrame = 0;
    this->GroundLightState = 0;
    this->GroundLightFrame = 0;
    this->RestoreLightState = 0;
    this->RestoreLightFrame = 0;
}


