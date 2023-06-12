#pragma once
#include "DuckModule.h"
#include "UserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "PopupBaseUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DUCK_API UPopupBaseUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPopupBaseUserWidget();
};

