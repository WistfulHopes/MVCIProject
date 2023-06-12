#include "DuckModule.h"
#include "SimpleCharaBPLib.h"

void USimpleCharaBPLib::SetupProfileParticle(ADuckSimpleCharacter* _Actor, int32 _CharaId) {
}

void USimpleCharaBPLib::SetupProfileMotion(ADuckSimpleCharacter* _Actor, int32 _CharaId) {
}

void USimpleCharaBPLib::SetupProfileGimmick(ADuckSimpleCharacter* _Actor, int32 _CharaId, int32 _Color, int32 _Costume) {
}

void USimpleCharaBPLib::SetupProfileData(ADuckSimpleCharacter* _Actor, int32 _CharaId, int32 _Color, int32 _Costume) {
}

void USimpleCharaBPLib::SetupBattleParticle(ADuckSimpleCharacter* _Actor, int32 _CharaId) {
}

void USimpleCharaBPLib::SetupBattleMotion(ADuckSimpleCharacter* _Actor, int32 _CharaId) {
}

void USimpleCharaBPLib::SetupBattleGimmick(ADuckSimpleCharacter* _Actor, int32 _CharaId) {
}

void USimpleCharaBPLib::SetupBattleData(ADuckSimpleCharacter* _Actor, int32 _CharaId, int32 _Color, int32 _Costume) {
}

void USimpleCharaBPLib::SetPauseData(ADuckSimpleCharacter* _Actor, UProfCardPoseData* _PoseData, int32 _PosNo) {
}

UProfCardPoseData* USimpleCharaBPLib::LoadPauseData(int32 _CharaId, bool _CollectionOnly) {
    return NULL;
}

FDemoMotionUpdateInf USimpleCharaBPLib::GetMotionInf(UProfCardPoseData* _ProfData, int32 _PosNo) {
    return FDemoMotionUpdateInf{};
}

FVector USimpleCharaBPLib::GetCameraZVector(FTransform _CameraTransform) {
    return FVector{};
}

FVector USimpleCharaBPLib::GetCameraYVector(FTransform _CameraTransform) {
    return FVector{};
}

FVector USimpleCharaBPLib::GetCameraXVector(FTransform _CameraTransform) {
    return FVector{};
}

void USimpleCharaBPLib::Finalize(ADuckSimpleCharacter* _Actor) {
}

USimpleCharaBPLib::USimpleCharaBPLib() {
}


