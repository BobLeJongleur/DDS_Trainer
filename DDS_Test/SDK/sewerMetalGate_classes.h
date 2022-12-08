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

// BlueprintGeneratedClass sewerMetalGate.sewerMetalGate_C
// 0x0036 (0x0560 - 0x052A)
class AsewerMetalGate_C : public AdoorBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x052A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ElectricalSparksParticles;                                // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Metal_Door_Lock;                                       // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Metal_Door_Frame;                                      // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APowerSwitch_C*                              PowerSource;                                              // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sewerMetalGate.sewerMetalGate_C");
		return ptr;
	}


	void DoorCanInteract(bool* CanInteract, struct FText* FailReason);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_sewerMetalGate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
