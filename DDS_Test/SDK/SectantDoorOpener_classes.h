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

// BlueprintGeneratedClass SectantDoorOpener.SectantDoorOpener_C
// 0x0014 (0x0AE8 - 0x0AD4)
class ASectantDoorOpener_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               DialogueOverlap;                                          // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SectantDoorOpener.SectantDoorOpener_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__DialogueOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void RamaLoadedEvent();
	void ExecuteUbergraph_SectantDoorOpener(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
