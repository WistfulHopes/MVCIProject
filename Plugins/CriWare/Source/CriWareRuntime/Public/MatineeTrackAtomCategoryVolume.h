#pragma once
#include "Engine.h"
#include "MatineeTrackAtomFloatBase.h"
#include "MatineeTrackAtomCategoryVolume.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomCategoryVolume : public UMatineeTrackAtomFloatBase {
    GENERATED_BODY()
public:
    UMatineeTrackAtomCategoryVolume();
};

