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

// BlueprintGeneratedClass psychedelicGangManager.psychedelicGangManager_C
// 0x01D0 (0x04F8 - 0x0328)
class ApsychedelicGangManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               gangIsUnlocked;                                           // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	int                                                gangPricePerGramWeed;                                     // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                gangQuestAccomplishedLevel;                               // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               gangIsTrusted;                                            // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	int                                                deliveredNotesCount;                                      // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	class ApsychedelicDoorDialogue_C*                  doorDialogueRef;                                          // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AdoorsExtWoodPsychedelicHideout_C*           gangDoorRef;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                contactGuyIndex;                                          // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FinventoryItemStruct                        envelopeData;                                             // 0x0378(0x0108) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               envelopeInDrop;                                           // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	float                                              nextDropInterval;                                         // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              nextDropCountdown;                                        // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                curMemDropIndex;                                          // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AdoorBase_C*                                 archiveDoorRef;                                           // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AdoorBase_C*                                 archiveWicketRef;                                         // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AflashDriveSpawn_C*                          flashDriveSpawnRef;                                       // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               flashPickedUp;                                            // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	int                                                curEnvelopeTaskID;                                        // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                checkDetailsTaskID;                                       // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                virusTaskID;                                              // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                documentsTaskID;                                          // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               virusWasUploaded;                                         // 0x04BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               playerInformedAboutGang;                                  // 0x04BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x04BE(0x0002) MISSED OFFSET
	int                                                timesAskedAround;                                         // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	TArray<int>                                        usedDropList;                                             // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AratDeadDrop_C*>                      ratDropsLeft;                                             // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              flashRefs;                                                // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass psychedelicGangManager.psychedelicGangManager_C");
		return ptr;
	}


	void populateDropList();
	void chooseDropAtRandom();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void setDoorDialogueAvailable();
	void spawnOneEnvelope();
	void policeQuest();
	void virusUploaded();
	void flashDrivePickedUp();
	void checkFlashStatus();
	void gangMissionStart();
	void oneEnvelopeDelivered();
	void detailsRead();
	void goNextEnvelope();
	void documentsDelivered();
	void testGangStart();
	void forceGangStart();
	void ExecuteUbergraph_psychedelicGangManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
