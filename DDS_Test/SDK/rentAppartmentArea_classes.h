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

// BlueprintGeneratedClass rentAppartmentArea.rentAppartmentArea_C
// 0x01DC (0x0504 - 0x0328)
class ArentAppartmentArea_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            marker;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Overlap;                                                  // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       HideoutID;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     areaSize;                                                 // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TArray<struct FName>                               appartmentInventoryNames;                                 // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FappartmentEquipment>                appartmentInventory;                                      // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        appartmentInventoryQuantities;                            // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       areaName;                                                 // 0x03A0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       areaAddress;                                              // 0x03B8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       areaDescription;                                          // 0x03D0(0x0018) (Edit, BlueprintVisible)
	bool                                               areaRented;                                               // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               areaOnDebt;                                               // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03EA(0x0002) MISSED OFFSET
	int                                                areaRentedTill;                                           // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               areaForever;                                              // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               areaTerminated;                                           // 0x03F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03F2(0x0002) MISSED OFFSET
	float                                              areaMeterage;                                             // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  areaImage;                                                // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                areaMinLevel;                                             // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              areaPrice;                                                // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                areaFloors;                                               // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               areaSaveStation;                                          // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	int                                                areaVisits;                                               // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                flashBangCount;                                           // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                flashBangCounter;                                         // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               areaDEAobserved;                                          // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               playerIn;                                                 // 0x041D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x041E(0x0002) MISSED OFFSET
	float                                              playerDistanceSpawnSUV;                                   // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               tryStartObservation;                                      // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	float                                              areaObservationLength;                                    // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              areaObservationCounter;                                   // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               raidCleanup;                                              // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               areaRaided;                                               // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0432(0x0002) MISSED OFFSET
	float                                              RespectBoost;                                             // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AappartmentWallPicker_C*                     wallPickerRef;                                            // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              resetCountdown;                                           // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               tryingToReset;                                            // 0x0444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               showingMarker;                                            // 0x0445(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0446(0x0002) MISSED OFFSET
	int                                                clientBoost;                                              // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              respectPercBoost;                                         // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              respectDropBoost;                                         // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              expBoost;                                                 // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              saleSpeedBoost;                                           // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              filterRatio;                                              // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              filterCalcRatio;                                          // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              weedFailBaseExpo;                                         // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              weedFailBaseRisk;                                         // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              weedGrowthRatio;                                          // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              curPurgeItems;                                            // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               OriginalInstance;                                         // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	struct FVector                                     AreaSizeStatic;                                           // 0x0484(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AdeaRaidManager_C*                           RaidManager;                                              // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  HideoutDatabase;                                          // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             RamaVariableFix;                                          // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SectorCFirst;                                             // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x04B1(0x0007) MISSED OFFSET
	class AlabPrefabMaster_C*                          LabPrefabRef;                                             // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<int>                                        LabCrew;                                                  // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       LabTypeID;                                                // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LabProducedTotal;                                         // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LabProductionTimer;                                       // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ProductionOnHold;                                         // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	struct FText                                       CustomHideoutName;                                        // 0x04E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                HideoutSortingIndex;                                      // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass rentAppartmentArea.rentAppartmentArea_C");
		return ptr;
	}


	void GetAreaMetarage(float* Meterage);
	void CheckHideoutEmpty(bool* Empty);
	void CheckEndgame();
	void CheckTabletops();
	void VerifyInventory();
	void GetHideoutMeta(bool* Success, struct FHideoutData* HideoutMeta);
	void PassDataToOriginal(class UObject* Object);
	void checkWeedStatus();
	void mapMarkerCheck();
	void markerOpc(bool showing);
	void updateHideoutSetup();
	void updateAreaNam();
	void observationCountdown(float Delta);
	void vanCanSpawn(class AdeaRaidManager_C* RaidManager, class AdeaRaidCarSpawnPoint_C** suvSpawnPoint, bool* CanSpawn);
	void suvCanSpawn(class AdeaRaidManager_C* RaidManager, class AdeaRaidCarSpawnPoint_C** suvSpawnPoint, bool* CanSpawn);
	void spawnFlashBang();
	void addInventoryItem(const struct FappartmentEquipment& eqData, const struct FName& EquipmentID, int Quantity);
	void removeInventoryItem(int Index, int Quantity);
	void checkPlayerOverlaping();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void purgeAppartment();
	void unlockAppartment();
	void areaRaidStarted();
	void areaRaidEnded();
	void deaMoveIn();
	void nextFlashBang();
	void startAreaDEA_Obeservation();
	void endAreaDEA_Observation();
	void deaObservationUpdate();
	void resetDeaRaid();
	void showEscapeRouts();
	void tryCleanupRaid();
	void PlayerBustedByDEA();
	void resetApartment();
	void tryResetMe();
	void updateMarker();
	void weedPotentialFail();
	void resetFailStatusRefresh();
	void resetFilterWarning();
	void BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName);
	void DisplayItems();
	void OldLoadReinit();
	void ExecuteUbergraph_rentAppartmentArea(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
