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

// BlueprintGeneratedClass GSMAntenna_QuestActivator.GSMAntenna_QuestActivator_C
// 0x0078 (0x03A0 - 0x0328)
class AGSMAntenna_QuestActivator_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               QuestBeenActivated;                                       // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	int                                                taskID;                                                   // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       QuestTask;                                                // 0x0350(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       QuestDesc;                                                // 0x0368(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               QuestDone;                                                // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddMarker;                                                // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoCreateTask;                                           // 0x0382(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0383(0x0001) MISSED OFFSET
	float                                              ConvoUnlockTimer;                                         // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       ShadyMessageDescription;                                  // 0x0388(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GSMAntenna_QuestActivator.GSMAntenna_QuestActivator_C");
		return ptr;
	}


	void RamaExtend();
	void SendShadyMessage();
	void VerifyAllDone();
	void TryActivateQuest();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void QuestActivation();
	void BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName);
	void UnlockConversation();
	void SubclassLoaded();
	void ExecuteUbergraph_GSMAntenna_QuestActivator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
