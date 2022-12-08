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

// UserDefinedStruct LabTypeData.LabTypeData
// 0x0048
struct FLabTypeData
{
	struct FText                                       LabName_2_0DA1D22E4281F9763E95038C60581113;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       LabDescription_4_04A6F0804692738285F36096EF6F555B;        // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FName                                       ProducesDrug_8_EA3D34AB431DC7EB832B06BD80DBFD4E;          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProductionTime_11_9AAFB8A44E049E7A00066FA6C5092BAD;       // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                productionQuantity_14_321B329B4DF6C52170259BB7BF66F154;   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LabBaseCost_18_C70E16B742DCF44A5DF21D951B21DBCB;          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProductionCostPerGram_20_2376599440C42DCD07918482BEDB0AF6;// 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
