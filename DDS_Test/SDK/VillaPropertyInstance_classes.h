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

// BlueprintGeneratedClass VillaPropertyInstance.VillaPropertyInstance_C
// 0x0178 (0x04A0 - 0x0328)
class AVillaPropertyInstance_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               PropertyArea;                                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       VillaID;                                                  // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PropertySize;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AVillaMeshPrefab_C*                          RawStatePrefab;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AVillaMeshPrefab_C*                          FencePrefab;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AVillaMeshPrefab_C*                          ConstructionSitePrefab;                                   // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AVillaMeshPrefab_C*                          WindowsDoorsPrefab;                                       // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                PriceProperty;                                            // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PriceFence;                                               // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PriceFoundation;                                          // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PriceWalls;                                               // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PriceWindows;                                             // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PriceDoors;                                               // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BuildStage;                                               // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerInVilla;                                            // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	class UVillaManagerWidget_C*                       VillaUI;                                                  // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               VillaInventoryIDs;                                        // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        VillaInventoryQuantities;                                 // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AvillaConstructionWorker_C*                  ConstructionWorker;                                       // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AVillaConstructionTable_C*                   ConstructionTable;                                        // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               VillaBougth;                                              // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	TMap<struct FGuid, struct FString>                 PieceConfigMap;                                           // 0x03E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               GenerateAllPiecesGuids;                                   // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class AVillaRenovationActivator_C*                 RenovationTools;                                          // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AsaveStation_C*                              saveStation;                                              // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               FirstVilla;                                               // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	float                                              ConstructionTimer;                                        // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StageInConstruction;                                      // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    BuildStageUpdated;                                        // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FGuid>                               ModulesBuilt;                                             // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AAudioVolume*>                        RoomAudioVolumes;                                         // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              RespectBoost;                                             // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	TArray<float>                                      VillaStageBuildExp;                                       // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VillaPropertyInstance.VillaPropertyInstance_C");
		return ptr;
	}


	void CheckVillaAchievements();
	void TryInstallModule(const struct FGuid& ModuleGuid, bool* Installed);
	void IsStageReady(bool* Ready);
	void InstallCurrentStage();
	void StartCurrentStage();
	void SaveConfigs();
	void ExpandRama();
	void CheckGuids();
	void OpenConfig(const struct FGuid& Key, bool* KeyFound, struct FString* KeyValue);
	void SaveConfig(const struct FGuid& Guid, const struct FString& Value);
	void BuyVilla();
	void RemoveInventoryObject(const struct FName& EquipmentID, int Quantity);
	void AddInventoryObject(const struct FName& EquipmentID, int Quantity);
	void UpdateBuildStage();
	void GetUpgradeDetails(int* Price, struct FText* Nam);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpgradeVilla();
	void PlayerEnteredPremise(class APawn* PawnRef);
	void PlayerLeftPremise(class AplayerCharacterBP_C* playerRef);
	void BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName);
	void BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSavePreSaveSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent);
	void BuiltFirstVilla();
	void BndEvt__PropertyArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void NotifyConstructionStage();
	void ForceSetPremise();
	void ExecuteUbergraph_VillaPropertyInstance(int EntryPoint);
	void BuildStageUpdated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
