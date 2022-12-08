#pragma once

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ws_deskIndustrialSmall.ws_deskIndustrialSmall_C
// 0x000B (0x04D0 - 0x04C5)
class Aws_deskIndustrialSmall_C : public AdrugWorkStation_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	class UChildActorComponent*                        ChildActor;                                               // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ws_deskIndustrialSmall.ws_deskIndustrialSmall_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
