#pragma once
#include "Engine.h"
#include "Matinee/InterpTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InterpTrack -FallbackName=InterpTrack
#include "MatineeTrackAtomBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomBase : public UInterpTrack {
    GENERATED_BODY()
public:
    UMatineeTrackAtomBase();

    virtual const FString GetEdHelperClassName() const override;
    virtual const FString GetSlateHelperClassName() const override;
	virtual UTexture2D* GetTrackIcon() const override;
	virtual FColor GetKeyframeColor(int32 KeyIndex) const override;
};

inline const FString UMatineeTrackAtomBase::GetEdHelperClassName() const
{
	return FString( TEXT("CriWareRuntime.UMatineeTrackAtomBase") );
}

inline const FString UMatineeTrackAtomBase::GetSlateHelperClassName() const
{
	return FString( TEXT("CriWareRuntime.UMatineeTrackAtomBase") );
}

inline UTexture2D* UMatineeTrackAtomBase::GetTrackIcon() const
{
	return TrackIcon;
}

inline FColor UMatineeTrackAtomBase::GetKeyframeColor(int32 KeyIndex) const
{
	return FColor(0,0,0);
}

