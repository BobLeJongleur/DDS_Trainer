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

// BlueprintGeneratedClass decoRetroCeilingLamp1.decoRetroCeilingLamp1_C
// 0x0012 (0x0458 - 0x0446)
class AdecoRetroCeilingLamp1_C : public AdecorativeFurniture_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0446(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass decoRetroCeilingLamp1.decoRetroCeilingLamp1_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetLightState(bool LightOn);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_decoRetroCeilingLamp1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
