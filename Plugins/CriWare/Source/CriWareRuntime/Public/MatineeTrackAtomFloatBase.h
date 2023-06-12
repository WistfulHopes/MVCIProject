#pragma once
#include "Engine.h"
#include "Matinee/InterpTrackFloatBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InterpTrackFloatBase -FallbackName=InterpTrackFloatBase
#include "MatineeTrackAtomFloatBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomFloatBase : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UMatineeTrackAtomFloatBase();

    virtual const FString GetEdHelperClassName() const override;
    virtual const FString GetSlateHelperClassName() const override;
    virtual UTexture2D* GetTrackIcon() const override;
    virtual FColor GetKeyframeColor(int32 KeyIndex) const override;
};

inline const FString UMatineeTrackAtomFloatBase::GetEdHelperClassName() const
{
    return FString( TEXT("CriWareRuntime.UMatineeTrackAtomBase") );
}

inline const FString UMatineeTrackAtomFloatBase::GetSlateHelperClassName() const
{
    return FString( TEXT("CriWareRuntime.UMatineeTrackAtomBase") );
}

inline UTexture2D* UMatineeTrackAtomFloatBase::GetTrackIcon() const
{
    return TrackIcon;
}

inline FColor UMatineeTrackAtomFloatBase::GetKeyframeColor(int32 KeyIndex) const
{
    return FColor(0,0,0);
}
