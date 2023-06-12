#include "DuckModule.h"
#include "UserNameTextBlock.h"

void UUserNameTextBlock::SetUserNameTrimSuffix(const FText& UserName) {
}

UUserNameTextBlock::UUserNameTextBlock() {
    this->IsUseMaxXSize = false;
    this->MaxXSize = 120.00f;
    this->OverrideJustification = EForceJustification::UseDefault;
}


