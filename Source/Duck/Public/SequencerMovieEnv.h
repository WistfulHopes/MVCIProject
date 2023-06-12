#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EDemoViewFadeType.h"
#include "ESubtitleStyleType.h"
#include "ETextFadeType.h"
#include "ETextPosType.h"
#include "ETextSizeType.h"
#include "SequencerMovieEnv.generated.h"

class UMsgDataTbl;

UCLASS(Blueprintable)
class DUCK_API ASequencerMovieEnv : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMsgDataTbl*> MsgDataTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float StageTitle_ListNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float StageTitle_MsgNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ETextFadeType StageTitle_FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ETextPosType StageTitle_PosType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ETextSizeType StageTitle_SizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DayText_ListNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DayText_MsgNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ETextFadeType DayText_FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ETextPosType DayText_PosType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ETextSizeType DayText_SizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Subtitle_ListNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Subtitle_MsgNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ETextFadeType Subtitle_FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESubtitleStyleType Subtitle_StyleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bPlayMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EDemoViewFadeType ViewFadeType;
    
public:
    ASequencerMovieEnv();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ViewFade_ChangeType(EDemoViewFadeType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Subtitle_ChangeMsg(int32 ListNo, int32 MsgNo, ESubtitleStyleType StyleType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Subtitle_ChangeFadeType(ETextFadeType FadeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StageTitle_ChangeMsg(int32 ListNo, int32 MsgNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StageTitle_ChangeFadeType(ETextFadeType FadeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DayText_ChangeMsg(int32 ListNo, int32 MsgNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DayText_ChangeFadeType(ETextFadeType FadeType);
    
};

