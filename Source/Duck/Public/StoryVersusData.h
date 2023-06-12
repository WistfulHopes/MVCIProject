#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EStoryTextPlSpBufType.h"
#include "EStoryTextSpType.h"
#include "EStoryTextSupportBufType.h"
#include "EStoryTextSupportChara.h"
#include "EStoryTextWinType.h"
#include "StoryVersusData.generated.h"

class USoundAtomCueSheet;
class UTexture;

UCLASS(Blueprintable)
class DUCK_API UStoryVersusData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoryTextWinType TxtWinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStoryTextSpType> TxtSpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStoryTextPlSpBufType> TxtPlSpBufType_PlMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStoryTextPlSpBufType> TxtPlSpBufType_PlSub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStoryTextPlSpBufType> TxtPlSpBufType_EmMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStoryTextPlSpBufType> TxtPlSpBufType_EmSub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoryTextSupportChara TxtSupportChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStoryTextSupportBufType> TxtSupportBufType_Pl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStoryTextSupportBufType> TxtSupportBufType_Em;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* ScreenTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DuckCustomDepthEnable;
    
public:
    UStoryVersusData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuckCustomDepthEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStoryTextWinType GetTxtWinType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStoryTextSupportChara GetTxtSupportChara() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EStoryTextSupportBufType> GetTxtSupportBufType(int32 teamNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EStoryTextSpType> GetTxtSpType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EStoryTextPlSpBufType> GetTxtPlSpBufType(int32 teamNo, int32 PartnerNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetScreenTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundAtomCueSheet* GetCueSheet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCueId() const;
    
};

