#pragma once

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct drugData.drugData
// 0x00B0
struct FdrugData
{
	struct FText                                       DrugName;						// 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       DrugDesc;						// 0x0018(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  DrugIcon;						// 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               colloquialNames;					// 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              availabilityMultiplier;			// 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EdrugForm>                             drugForm;						// 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isWet;							// 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];				// 0x004E(0x0002) MISSED OFFSET
	float                                              toxicity;						// 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              strength;						// 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mixStr;							// 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              addictiveness;					// 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              humidity;						// 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];				// 0x0064(0x0004) MISSED OFFSET
	struct FString                                     StringID;						// 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             MixStringIDs;					// 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      MixStringProportions;			// 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              useSpeedMultiplier;				// 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              useStaminaMultiplier;			// 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              useTimeMultiplier;				// 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              useFOVMultiplier;				// 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              useConfusionMultiplier;			// 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              useDoseTimeout;					// 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
