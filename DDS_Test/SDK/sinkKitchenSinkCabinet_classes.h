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

// BlueprintGeneratedClass sinkKitchenSinkCabinet.sinkKitchenSinkCabinet_C
// 0x0008 (0x0460 - 0x0458)
class AsinkKitchenSinkCabinet_C : public AinteractiveWaterSinkBP_C
{
public:
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sinkKitchenSinkCabinet.sinkKitchenSinkCabinet_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
