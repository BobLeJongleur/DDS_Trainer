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

// UserDefinedStruct ClientMeta.ClientMeta
// 0x003D
struct FClientMeta
{
	struct FText                                       ClientName_2_B9EC20324537479C558659914027D2FF;            // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FclientLooksData                            ClientLooks_6_17F881CC4FD6EE020984C49BE3B559BE;           // 0x0018(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UTexture2D*                                  ClientAvatar_9_3424827B4EEA389CD5B9B3B6BAB27DD5;          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClientExp_12_F25930D04D16173258CC4EA2E973B822;            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDealer_15_1D392A6F4AEBD63467C2AEB66EFCB4C1;             // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
