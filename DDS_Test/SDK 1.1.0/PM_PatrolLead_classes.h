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

// BlueprintGeneratedClass PM_PatrolLead.PM_PatrolLead_C
// 0x0048 (0x08B1 - 0x0869)
class APM_PatrolLead_C : public APolicemanBaseClass_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0869(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            Influence;                                                // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               controlingPlayer;                                         // 0x0880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0881(0x0007) MISSED OFFSET
	class UpoliceSearchWidget_C*                       controlWidget;                                            // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              controlTime;                                              // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              controlTimer;                                             // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              controlBreakDistance;                                     // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x089C(0x0004) MISSED OFFSET
	class APM_PatrolPartner_C*                         followerRef;                                              // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ApolicePatrolArea_C*                         MyPatrolArea;                                             // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               InfluenceRadius;                                          // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PM_PatrolLead.PM_PatrolLead_C");
		return ptr;
	}


	void UserConstructionScript();
	void ShortRadiusChanged(bool InRadius);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void EngageSuspect();
	void BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ControlEnded();
	void breakControl();
	void overrideStartSearch();
	void checkForPartner();
	void unlockRespawnPartner();
	void LongRadiusChanged(bool InRadius);
	void BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName);
	void WipePatrol();
	void RetryWipe();
	void ExecuteUbergraph_PM_PatrolLead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
