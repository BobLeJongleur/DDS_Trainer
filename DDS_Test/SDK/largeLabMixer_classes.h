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

// BlueprintGeneratedClass largeLabMixer.largeLabMixer_C
// 0x0018 (0x0854 - 0x083C)
class AlargeLabMixer_C : public AworkStationMixerBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x083C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        largeLabMixerArm;                                         // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              rotSpeed;                                                 // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass largeLabMixer.largeLabMixer_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void GizmoSet();
	void ExecuteUbergraph_largeLabMixer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
