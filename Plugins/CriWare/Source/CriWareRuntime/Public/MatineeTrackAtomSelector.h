#pragma once
#include "Engine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InterpTrack -FallbackName=InterpTrack
#include "AtomSelectorTrackKeyframe.h"
#include "Matinee/InterpTrack.h"
#include "MatineeTrackAtomSelector.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomSelector : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FAtomSelectorTrackKeyframe> KeyframeList;
    
    UMatineeTrackAtomSelector();
    
    virtual const FString GetEdHelperClassName() const override;
    virtual const FString GetSlateHelperClassName() const override;
    virtual UTexture2D* GetTrackIcon() const override;
    virtual FColor GetKeyframeColor(int32 KeyIndex) const override;
};

inline const FString UMatineeTrackAtomSelector::GetEdHelperClassName() const
{
    return FString( TEXT("CriWareRuntime.UMatineeTrackAtomBase") );
}

inline const FString UMatineeTrackAtomSelector::GetSlateHelperClassName() const
{
    return FString( TEXT("CriWareRuntime.UMatineeTrackAtomBase") );
}

inline UTexture2D* UMatineeTrackAtomSelector::GetTrackIcon() const
{
    return TrackIcon;
}

inline FColor UMatineeTrackAtomSelector::GetKeyframeColor(int32 KeyIndex) const
{
    return FColor(0,0,0);
}
