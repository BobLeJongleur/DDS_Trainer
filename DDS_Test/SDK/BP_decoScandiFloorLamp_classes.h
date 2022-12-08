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

// BlueprintGeneratedClass BP_decoScandiFloorLamp.BP_decoScandiFloorLamp_C
// 0x001A (0x0460 - 0x0446)
class ABP_decoScandiFloorLamp_C : public AdecorativeFurniture_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0446(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LightSwitch;                                              // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_decoScandiFloorLamp.BP_decoScandiFloorLamp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void InputToggleOff();
	void InputToggleOn();
	void ExecuteUbergraph_BP_decoScandiFloorLamp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
