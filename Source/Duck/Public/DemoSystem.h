#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CriWareRuntime -ObjectName=EManaComponentStatus -FallbackName=EManaComponentStatus
#include "DuckBaseSystem.h"
#include "EStoryDataType.h"
#include "EStoryExclusivRule.h"
#include "EStoryInfoType.h"
#include "EStorySkipResult.h"
#include "EStoryTextPlNmlBufType.h"
#include "DemoSystem.generated.h"

class AActor;
class ALevelSequenceActor;
class AMoviePlayBase;
class UDemoSystem;
class ULevelSequence;
class UManaTexture;
class UMsgDataTbl;
class USoundAtomCue;
class UStoryInfoAsset;
class UStoryInfoBase;
class UStoryVersusData;

UCLASS(Blueprintable)
class DUCK_API UDemoSystem : public UDuckBaseSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStoryInfoAsset* mpStoryInfoAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStoryInfoBase*> mStoryInfoAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStoryInfoBase*> mArrStoryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStoryVersusData* mpStoryVersusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStoryVersusData* mpLoadStoryVersusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mpCharaMotionParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMoviePlayBase*> mArrMoviePlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelSequenceActor*> mArrMovieSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UManaTexture*> mArrTempManaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> mArrTempLevelSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelSequenceActor*> mArrTempLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMoviePlayBase*> mArrTempMoviePlayActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* mpTempMovieBGMCue;
    
public:
    UDemoSystem();
    UFUNCTION(BlueprintCallable)
    void UpdateSequencerPosition(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool TravelStoryMap();
    
    UFUNCTION(BlueprintCallable)
    void SyncBGM(int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void StopMovieSequencerImmediately();
    
    UFUNCTION(BlueprintCallable)
    void StopMovieSequencer();
    
    UFUNCTION(BlueprintCallable)
    void StopBattleBGM(int32 FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    EStorySkipResult SkipMovieSequencer();
    
    UFUNCTION(BlueprintCallable)
    void SetupMovieFromCredit();
    
    UFUNCTION(BlueprintCallable)
    void SetPostBattlePlHidden();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerParent(AActor* pParentActor);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieSequencerPlayFrame(int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDemoPlaying(bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SeekPrepareMovie(int32 Frame, EStoryDataType Type);
    
    UFUNCTION(BlueprintCallable)
    void ResumeMovieSequencer();
    
    UFUNCTION(BlueprintCallable)
    bool PrepareStoryCollection(int32 index);
    
    UFUNCTION(BlueprintCallable)
    bool PrepareStory(int32 index);
    
    UFUNCTION(BlueprintCallable)
    bool PrepareNextStory();
    
    UFUNCTION(BlueprintCallable)
    void PrepareNextMovieBGM();
    
    UFUNCTION(BlueprintCallable)
    bool PrepareMovieSequencer(EStoryDataType Type);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySoundOnly();
    
    UFUNCTION(BlueprintCallable)
    bool PlayMovieSequencer();
    
    UFUNCTION(BlueprintCallable)
    bool PlayMovieOnly();
    
    UFUNCTION(BlueprintCallable)
    void PauseMovieSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStoryClear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSequencerPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrepareStoryEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrepareStoryEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrepareMovieSequencerEnd(EStoryDataType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMovieSequencer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingBattleBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPauseMovieSequencer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpeningMovie() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNextStoryCredit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLowerCPUDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawMovieSequencerPlayFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContinuousMovie() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleDemoPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeStory();
    
    UFUNCTION(BlueprintCallable)
    void InitializeOpeningMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStoryVersusData* GetStoryVersusData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStoryVersusCharaDataMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EStoryTextPlNmlBufType> GetStoryVersusCharaData(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStoryPrePostBattleFolderPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStoryPlayingCueStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStoryInfoIndex(EStoryDataType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStoryInfoBase*> GetStoryInfoAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStoryIndexCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStoryFolderPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStoryExclusivRule GetStoryExclusiveRule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStoryCueStartFrame(int32 index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSequencerPlayFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSequencePlaybackPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMovieSequencerPlayFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovieSequencerLastFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMoviePlayLastFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMoviePlayFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMoviePlayBase* GetMoviePlay(EStoryDataType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMsgDataTbl* GetMovieMsgDataTbl() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetMovieIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovieEndWaitTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EManaComponentStatus GetManaState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStoryInfoType GetLoadStoryType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastStoryIndex() const;
    
    UFUNCTION(BlueprintCallable)
    static UDemoSystem* GetInstanceExec();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDemoSystem* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDipStoryStartIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void FinalizeStory();
    
    UFUNCTION(BlueprintCallable)
    void ClearStoryProgress();
    
    UFUNCTION(BlueprintCallable)
    void ClearStoryBGM();
    
    UFUNCTION(BlueprintCallable)
    void ClearMovieSequencerPlayFrame();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTempBGMSheetIfNeed();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStoryInfoLoadToPlay();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeAndPlayMovieSequencer();
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadBattleChara();
    
    UFUNCTION(BlueprintCallable)
    void AddLowerCPUDifficultyCnt();
    
    UFUNCTION(BlueprintCallable)
    void AddContinueCnt();
    
};

