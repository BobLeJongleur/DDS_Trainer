#pragma once

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct VillaSurfaceFinish.VillaSurfaceFinish
// 0x0045
struct FVillaSurfaceFinish
{
	struct FText                                       SurfaceName_5_730EBD934151F2C7D4D2ACA1DC1FC1DC;           // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SurfaceDescription_12_C21F4CA8454170219BCCFEBCF9095105;   // 0x0018(0x0018) (Edit, BlueprintVisible)
	class UMaterialInstance*                           SurfaceMaterial_16_39C1B40D43F53525061FE39F7681FA90;      // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Thumbnail_19_29CF06D94C46F70568A81181D45579D8;            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SurfaceCostPerMeter_9_13EF67CA42CFA647FAC9349C316D1D9D;   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVillaSurfaceCategory>                 Category_15_D383E0B24ECD56B2D7222693FE8D9410;             // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
