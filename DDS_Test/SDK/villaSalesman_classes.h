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

// BlueprintGeneratedClass villaSalesman.villaSalesman_C
// 0x0034 (0x0B08 - 0x0AD4)
class AvillaSalesman_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                EndgameProgress;                                          // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndgameFinished;                                          // 0x0AE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AE5(0x0003) MISSED OFFSET
	class AInteractiveGraveManager_C*                  GraveManager;                                             // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               PontonDropped;                                            // 0x0AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0AF1(0x0007) MISSED OFFSET
	TArray<class ADeathSiteVolume_C*>                  DeathSites;                                               // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass villaSalesman.villaSalesman_C");
		return ptr;
	}


	void SetSitesPost();
	void UpdateDialogue();
	void TowerQuests(class AquestManager_C* QM);
	void RamaExtend();
	void EndgameStep(int taskID);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DialogueOpened();
	void LabConstructed();
	void AllQuestsDone();
	void RamaLoadedEvent();
	void BombsGiven();
	void CheckEndgameOver();
	void ExecuteUbergraph_villaSalesman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
