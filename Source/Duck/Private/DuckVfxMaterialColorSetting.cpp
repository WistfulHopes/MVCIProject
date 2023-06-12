#include "DuckModule.h"
#include "DuckVfxMaterialColorSetting.h"

FDuckVfxMaterialColorSetting::FDuckVfxMaterialColorSetting() {
    this->ColorType = EMaterialColorType::DEFAULT;
    this->BaseReflect = 0.00f;
    this->FresnelEXP = 0.00f;
}


