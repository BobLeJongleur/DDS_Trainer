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

// UserDefinedStruct SaleAreaData.SaleAreaData
// 0x0060
struct FSaleAreaData
{
	struct FText                                       DisplayName_5_3CE1C7854877077B880F229F7603596A;           // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                UnlockLevel_8_FA9B90D647CAEBAB3C1B949025224C83;           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     UnlockArea_33_79B8D66148EC11D706824790AD122DF8;           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              UnlockExposureMin_36_F37B01574A3CA5827665CFB528672F9B;    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RespectMultiplier_11_AFCF083E4EC89D2654B039BB04E01FB1;    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClientAverage_13_C03A78164B46DDF87346049DF2C1C656;        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RiskMultiplier_27_4582C65F4EC32C25F7567C904286280E;       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DefaultAvailable_16_784ADD5249F4E14F49C0A0B9AC060B1C;     // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<struct FDrugDemandStruct>                   DrugDemand_23_9A27ACAF406F6695681AF5ADEE2090CB;           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                DefaultMaxDealers_30_D9ED266C49CF49FCEF5EB294781E2732;    // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DefaultMaxClients_39_262BE34F49C709B7221131A1B0A444B3;    // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
