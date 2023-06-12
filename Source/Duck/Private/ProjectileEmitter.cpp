#include "DuckModule.h"
#include "ProjectileEmitter.h"
#include "DuckParticleSystemComponent.h"
#include "DuckSkeletalMeshComponent.h"

AProjectileEmitter::AProjectileEmitter() {
    this->CoreComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("CoreComponent"));
    this->MeshComponent = CreateDefaultSubobject<UDuckSkeletalMeshComponent>(TEXT("MeshComponent"));
    this->BeamComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("BeamComponent"));
    this->AuraComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("AuraComponent"));
    this->CounteractComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("CounteractComponent"));
    this->DeathComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("DeathComponent"));
    this->GroundComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("GroundComponent"));
    this->CoreRestoreComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("CoreRestore"));
    this->isActivate = false;
    this->UniqueID = 0;
    this->ParentUniqueID = -1;
    this->isVisibleEmitter = false;
    this->m_pl_id = 0;
    this->m_inf_index = -1;
    this->isUpdateTransform = false;
    this->isUpdatePos = false;
    this->AnimBlueprint = NULL;
    this->NormalDeath = NULL;
    this->NormalDeathLight = NULL;
    this->HitDeath = NULL;
    this->HitDeathLight = NULL;
    this->MaterialController = NULL;
    this->Visual = NULL;
}


