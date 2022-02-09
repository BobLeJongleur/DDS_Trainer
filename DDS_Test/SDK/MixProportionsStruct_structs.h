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

// UserDefinedStruct MixProportionsStruct.MixProportionsStruct
// 0x0040
struct FMixProportionsStruct
{
	TArray<struct FName>                               MixContents_4_087C32B1445FBB5223EDA2A1A88D5B16;           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      MixProportions_7_B6CEC0E14F7E77A2F3CFCEB78B49F4C0;        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EdrugForm>                             SubstanceForm_10_C925520C4AB9EFE7114FA789E8C6ED6A;        // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Humidity_13_89BE6EF14389F8190C5A7FA273040A2B;             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       SubstanceName_16_B4DFC395423C963522E86AA3E95B2CFB;        // 0x0028(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
