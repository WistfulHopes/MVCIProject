#include "DuckModule.h"
#include "DemoSystem.h"

#include "EManaComponentStatus.h"

void UDemoSystem::UpdateSequencerPosition(float DeltaTime) {
}

bool UDemoSystem::TravelStoryMap() {
    return false;
}

void UDemoSystem::SyncBGM(int32 Time) {
}

void UDemoSystem::StopMovieSequencerImmediately() {
}

void UDemoSystem::StopMovieSequencer() {
}

void UDemoSystem::StopBattleBGM(int32 FadeOutTime) {
}

EStorySkipResult UDemoSystem::SkipMovieSequencer() {
    return EStorySkipResult::STORY_SKIP_RESULT_BATTLE;
}

void UDemoSystem::SetupMovieFromCredit() {
}

void UDemoSystem::SetPostBattlePlHidden() {
}

void UDemoSystem::SetPlayerParent(AActor* pParentActor) {
}

void UDemoSystem::SetMovieSequencerPlayFrame(int32 Time) {
}

void UDemoSystem::SetBattleDemoPlaying(bool FlgOn) {
}

void UDemoSystem::SeekPrepareMovie(int32 Frame, EStoryDataType Type) {
}

void UDemoSystem::ResumeMovieSequencer() {
}

bool UDemoSystem::PrepareStoryCollection(int32 index) {
    return false;
}

bool UDemoSystem::PrepareStory(int32 index) {
    return false;
}

bool UDemoSystem::PrepareNextStory() {
    return false;
}

void UDemoSystem::PrepareNextMovieBGM() {
}

bool UDemoSystem::PrepareMovieSequencer(EStoryDataType Type) {
    return false;
}

bool UDemoSystem::PlaySoundOnly() {
    return false;
}

bool UDemoSystem::PlayMovieSequencer() {
    return false;
}

bool UDemoSystem::PlayMovieOnly() {
    return false;
}

void UDemoSystem::PauseMovieSequencer() {
}

bool UDemoSystem::IsStoryClear() const {
    return false;
}

bool UDemoSystem::IsSequencerPlaying() const {
    return false;
}

bool UDemoSystem::IsPrepareStoryEnd() const {
    return false;
}

bool UDemoSystem::IsPrepareStoryEnable() const {
    return false;
}

bool UDemoSystem::IsPrepareMovieSequencerEnd(EStoryDataType Type) const {
    return false;
}

bool UDemoSystem::IsPlayingMovieSequencer() const {
    return false;
}

bool UDemoSystem::IsPlayingBattleBGM() const {
    return false;
}

bool UDemoSystem::IsPauseMovieSequencer() const {
    return false;
}

bool UDemoSystem::IsOpeningMovie() const {
    return false;
}

bool UDemoSystem::IsNextStoryCredit() const {
    return false;
}

bool UDemoSystem::IsLowerCPUDifficulty() const {
    return false;
}

bool UDemoSystem::IsDrawMovieSequencerPlayFrame() const {
    return false;
}

bool UDemoSystem::IsContinuousMovie() const {
    return false;
}

bool UDemoSystem::IsBattleDemoPlaying() const {
    return false;
}

void UDemoSystem::InitializeStory() {
}

void UDemoSystem::InitializeOpeningMovie() {
}

UStoryVersusData* UDemoSystem::GetStoryVersusData() const {
    return NULL;
}

int32 UDemoSystem::GetStoryVersusCharaDataMax() const {
    return 0;
}

TArray<EStoryTextPlNmlBufType> UDemoSystem::GetStoryVersusCharaData(int32 teamNo, int32 PartnerNo) {
    return TArray<EStoryTextPlNmlBufType>();
}

FString UDemoSystem::GetStoryPrePostBattleFolderPath() const {
    return TEXT("");
}

int32 UDemoSystem::GetStoryPlayingCueStartTime() const {
    return 0;
}

int32 UDemoSystem::GetStoryInfoIndex(EStoryDataType Type) const {
    return 0;
}

TArray<UStoryInfoBase*> UDemoSystem::GetStoryInfoAll() {
    return TArray<UStoryInfoBase*>();
}

int32 UDemoSystem::GetStoryIndexCollection() const {
    return 0;
}

FString UDemoSystem::GetStoryFolderPath() const {
    return TEXT("");
}

EStoryExclusivRule UDemoSystem::GetStoryExclusiveRule() const {
    return EStoryExclusivRule::NONE;
}

int32 UDemoSystem::GetStoryCueStartFrame(int32 index) const {
    return 0;
}

int32 UDemoSystem::GetSequencerPlayFrame() const {
    return 0;
}

float UDemoSystem::GetSequencePlaybackPosition() const {
    return 0.0f;
}

int32 UDemoSystem::GetMovieSequencerPlayFrame() {
    return 0;
}

float UDemoSystem::GetMovieSequencerLastFrame() {
    return 0.0f;
}

int32 UDemoSystem::GetMoviePlayLastFrame() const {
    return 0;
}

int32 UDemoSystem::GetMoviePlayFrame() const {
    return 0;
}

AMoviePlayBase* UDemoSystem::GetMoviePlay(EStoryDataType Type) const {
    return NULL;
}

UMsgDataTbl* UDemoSystem::GetMovieMsgDataTbl() const {
    return NULL;
}

TArray<int32> UDemoSystem::GetMovieIndex() {
    return TArray<int32>();
}

float UDemoSystem::GetMovieEndWaitTime() {
    return 0.0f;
}

EManaComponentStatus UDemoSystem::GetManaState() {
    return EManaComponentStatus::Stop;
}

EStoryInfoType UDemoSystem::GetLoadStoryType() const {
    return EStoryInfoType::NONE;
}

int32 UDemoSystem::GetLastStoryIndex() const {
    return 0;
}

UDemoSystem* UDemoSystem::GetInstanceExec() {
    return NULL;
}

UDemoSystem* UDemoSystem::GetInstance() {
    return NULL;
}

int32 UDemoSystem::GetDipStoryStartIndex() const {
    return 0;
}

void UDemoSystem::FinalizeStory() {
}

void UDemoSystem::ClearStoryProgress() {
}

void UDemoSystem::ClearStoryBGM() {
}

void UDemoSystem::ClearMovieSequencerPlayFrame() {
}

void UDemoSystem::ChangeTempBGMSheetIfNeed() {
}

void UDemoSystem::ChangeStoryInfoLoadToPlay() {
}

bool UDemoSystem::ChangeAndPlayMovieSequencer() {
    return false;
}

void UDemoSystem::AsyncLoadBattleChara() {
}

void UDemoSystem::AddLowerCPUDifficultyCnt() {
}

void UDemoSystem::AddContinueCnt() {
}

UDemoSystem::UDemoSystem() {
    this->mpStoryInfoAsset = NULL;
    this->mpStoryVersusData = NULL;
    this->mpLoadStoryVersusData = NULL;
    this->mpCharaMotionParent = NULL;
    this->mpTempMovieBGMCue = NULL;
}


