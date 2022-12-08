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

// UserDefinedStruct LootPoolEntry.LootPoolEntry
// 0x001C
struct FLootPoolEntry
{
	struct FName                                       ItemID_2_70D9C3174F7D926C7A94009EF0CFA9EC;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnChance_5_E7EBDD184BFE47765B336A9F3BCE65DE;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                QuantityMin_10_1F8AB8604B0DA028260C98B69FDBF2A1;          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                QuantityMax_11_698131184B5138E0C3F5C19F7F59A830;          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AmountMin_14_AA69997F4959FD2F358BC18DA8E89737;            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AmountMax_15_7035E0D3459D7F404F80859F16512342;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
