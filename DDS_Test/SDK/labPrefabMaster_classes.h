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

// BlueprintGeneratedClass labPrefabMaster.labPrefabMaster_C
// 0x0080 (0x03A8 - 0x0328)
class AlabPrefabMaster_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AlabCrewSpawnPoint_C*>                LabCrewSpawnPoints;                                       // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AlabPlayerRespawnPoint_C*                    PlayerRespawnPoint;                                       // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AlabOutputTable_C*                           OutputTable;                                              // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AcontainerBase_C*                            CashSource;                                               // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AActor*>                              RelatedActors;                                            // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              ProductionSpeedMultiplier;                                // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProductionQuantityMultiplier;                             // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LabCostMultiplier;                                        // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LabActive;                                                // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	class ArentAppartmentArea_C*                       ApartmentRef;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FlagSpeedMultiplier;                                      // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ProductionOnHold;                                         // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	float                                              CrewSpeedMultiplier;                                      // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeLeftSeconds;                                          // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ProductionProgress;                                       // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass labPrefabMaster.labPrefabMaster_C");
		return ptr;
	}


	void SetMeshesOverlap();
	void SendCrewHoldWarning(int CashLacking, const struct FName& DrugID);
	void UpdateCrewModifier();
	void PurgeLab(bool Raided);
	void TryInitiateProduction(bool SendMessage);
	void OutputPackage();
	void CountdownProduction(float Delta);
	void SetPrefabActive(bool active, bool ArrestCrew);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CheckRestartProduction();
	void ExecuteUbergraph_labPrefabMaster(int EntryPoint);
	void ProductionProgress__DelegateSignature(float ProgressPercent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
