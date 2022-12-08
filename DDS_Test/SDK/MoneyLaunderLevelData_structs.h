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

// UserDefinedStruct MoneyLaunderLevelData.MoneyLaunderLevelData
// 0x004C
struct FMoneyLaunderLevelData
{
	struct FText                                       UpgradeName_2_3AEDE3CF437875EBCE5D0A9F4F68993F;           // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       UpgradeDescription_4_367540C74505D7CC794D898665EA9AFD;    // 0x0018(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  UpgradeImage_16_4AEDF531400C75FBC6622A9C54B6C4BE;         // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpgradeCost_7_54C492634952518447D7EA8F55DAC4FE;           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpgradeCashRequirement_9_18383E504B3A9B253CC931A084E947B0;// 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UpgradeMinDealerLevel_19_2C3B088D454173FF083ABDB2FE1EB892;// 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtLevelPercentLaunder_11_33C460974A261731C283B7989DFA0D83;// 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtLevelLaunderDayMax_13_AA0EF9F346E66C110510DF90DC2C5F5A; // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
