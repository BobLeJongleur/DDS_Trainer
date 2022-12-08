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

// BlueprintGeneratedClass decoModernFloorLamp3.decoModernFloorLamp3_C
// 0x002A (0x0470 - 0x0446)
class AdecoModernFloorLamp3_C : public AdecoOldschoolArmchair_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0446(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LightSwitch1;                                             // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LightSwitch2;                                             // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LightSwitch3;                                             // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass decoModernFloorLamp3.decoModernFloorLamp3_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void InputToggleOff();
	void InputToggleOn();
	void ExecuteUbergraph_decoModernFloorLamp3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
