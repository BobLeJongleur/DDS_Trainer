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

// BlueprintGeneratedClass BP_decoDeskLamp3.BP_decoDeskLamp3_C
// 0x0022 (0x0468 - 0x0446)
class ABP_decoDeskLamp3_C : public AdecorativeFurniture_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0446(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynLightMat;                                              // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynGlassMat;                                              // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_decoDeskLamp3.BP_decoDeskLamp3_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void InputToggleOff();
	void InputToggleOn();
	void ExecuteUbergraph_BP_decoDeskLamp3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
