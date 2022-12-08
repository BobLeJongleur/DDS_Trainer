#pragma once

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ShopDataStruct.ShopDataStruct
// 0x0040
struct FShopDataStruct
{
	struct FText                                       ShopName_3_26074EFA4B31008BC4205ABEE3669139;              // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ShopDescription_5_82611B7E4BBA7B9175B3B4BF1B096C5A;       // 0x0018(0x0018) (Edit, BlueprintVisible)
	TArray<struct FShopProductStruct>                  ShopProducts_9_7832D5B44318B6677AC337AC9D3E48C9;          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
