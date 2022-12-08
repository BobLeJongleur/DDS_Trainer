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

// UserDefinedStruct OneVillaData.OneVillaData
// 0x0088
struct FOneVillaData
{
	struct FText                                       VillaName_2_FB0BD08245502244DE7F218F95B5C32E;             // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       VillaDescription_4_017165924050C6B2E376FF9ABA9B4BCF;      // 0x0018(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  MainPhoto_7_921735A24B635819AB0E64A1FC2B2094;             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture2D*>                          PhotoGallery_10_FBECAB08458D6153838B62A2CB59D6A5;         // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTexture2D*>                          BlueprintGallery_23_AFD92470455E7A37BE1DBE861F9C1157;     // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BuildingSurface_14_FD94F0A9498622DF94292EA82AC25C56;      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PropertySurface_16_5BF062EC491B95BDFD14119EAD338BBB;      // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PropertyPrice_36_3DE4D5D64D356C82895018AC02F65C38;        // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FencePrice_37_EB59BB9D455091C396246584A840CC14;           // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoundationPrice_38_8BACC14848EDB1711BC8539EB8A40FB3;      // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallsPrice_39_800D22A2426FCBD666AEFAB11E205A1C;           // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindowsPrice_40_27BB7E324230C0B5187090909D3C7C91;         // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CostInstallations_43_0973E5D5405B05B2E49880BD6FB7056A;    // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      StageBuildTimes_47_98498F24499D59CA4175DCBACEBB0954;      // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
