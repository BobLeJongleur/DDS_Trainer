#pragma once

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C
// 0x0012 (0x0458 - 0x0446)
class AdecoOldschoolCeilingLamp2_C : public AdecoOldschoolArmchair_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0446(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_decoOldschoolCeilingLamp2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
