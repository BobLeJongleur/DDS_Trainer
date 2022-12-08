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

// BlueprintGeneratedClass PontonMeetingController.PontonMeetingController_C
// 0x0050 (0x0378 - 0x0328)
class APontonMeetingController_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            breakDistance;                                            // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AgoHomePoint_C*>                      goHomePoints;                                             // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AGSMAntenna_QuestActivator_C*                QuestActor;                                               // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Talking;                                                  // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	class ATwoTowerJumperNPC_C*                        Jumper;                                                   // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AVillaMeshPrefab_C*                          Prefab;                                                   // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PontonMeetingController.PontonMeetingController_C");
		return ptr;
	}


	void CheckCanSpawn(bool* CanSpawn);
	void SwitchTalk(bool Talk);
	void UserConstructionScript();
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void TrySpawnMeeters();
	void ConfirmOneArrived(class AbaseNPC_C* Meeter);
	void BndEvt__breakDistance_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void TestCanTalk();
	void KillMeeters();
	void ExecuteUbergraph_PontonMeetingController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
