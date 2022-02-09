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

// UserDefinedStruct NewDrugData.NewDrugData
// 0x0106
struct FNewDrugData
{
	struct FText                                       DrugSourceName_2_BD60123B47D8A346B9BF039C049228C7;        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       DrugSourceDescription_4_7D10F5D74F5F3358B8CC39B9B74BF183; // 0x0018(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  DrugSourceIcon_7_0437A24E4BEA12F03D805CA053E7685A;        // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DemandMultiplier_10_1931BAA0448F40F3E0A5EB89498368DC;     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinOrderQuantity_13_0D934ADD4FC1492DBEB2F585D3EFC509;     // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxOrderQuantity_15_54918E674D540BAECE0D76AAC4387405;     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrderRaiseRate_18_04323A3F4E7BFB815DB7AD9F32D01422;       // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FdrugData                                   DrugProperties_22_E6A8BE7C4BD0A5DE60F298A73A8A53E0;       // 0x0048(0x00B0) (Edit, BlueprintVisible)
	float                                              BuyPrice_25_27D1F10E42A33040AB639C8C0FEDB998;             // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SalePriceAverage_27_FBEAA26A439C7F927C33289B4DA890CA;     // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LevelUnlock_30_B9A21DC146D288D014D8E4AA726A439E;          // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeFromSales_33_895EFF4D4C7521B2375B849B3439E2EA;     // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowOnlyUnlocked_35_9D314DB043A76470785CF092AF9B49FF;     // 0x0105(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
