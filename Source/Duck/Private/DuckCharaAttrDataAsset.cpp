#include "DuckModule.h"
#include "DuckCharaAttrDataAsset.h"

UDuckCharaAttrDataAsset::UDuckCharaAttrDataAsset() {
    this->charaID = 0;
    this->Material = ECHARA_ATTR_MATERIAL::DEFAULT;
    this->Size = ECHARA_ATTR_SIZE::DEFAULT;
    this->Company = ECharaCompanyType::MARVEL;
    this->GroupBit = 0;
}


