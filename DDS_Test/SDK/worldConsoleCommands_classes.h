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

// BlueprintGeneratedClass worldConsoleCommands.worldConsoleCommands_C
// 0x00A0 (0x03C8 - 0x0328)
class AworldConsoleCommands_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AsaleClientMaleBP_C*>                 maleClients;                                              // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AsaleClientFemaleBP_C*>               femaleClients;                                            // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AsaleClientFemaleBP_C*>               NewVar_1;                                                 // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AsewageTeleportPoint_C*>              sewageTeleports;                                          // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                TempSelector;                                             // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GameDifficultyDebug;                                      // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SectorCTeleport;                                          // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class UDataTable*                                  DrugDatabase;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      NewVar_2;                                                 // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        TestArray;                                                // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ComponentClasses;                                         // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass worldConsoleCommands.worldConsoleCommands_C");
		return ptr;
	}


	void CountClassNum();
	void UserConstructionScript();
	void giveMoney(int Amount);
	void giveBankMoney(float Amount);
	void levelUp(int NumLevel);
	void giveMeExp(float expAmount);
	void spawnDrugSource();
	void disableSubLevelStreaming();
	void removeDealers();
	void GetNewUpgrades();
	void SetSeenUpgrades();
	void SebaPlay();
	void enableTunnelEntering();
	void LTS_En();
	void LTS_CC(int NewParam, int NewParam2);
	void LTS_PrintUpgrades();
	void LTS_AddMoney(int ConnIndex, float moneyAmount);
	void LTS_PrintConns();
	void LTS_GetUpgradesStates(int ConnIndex);
	void LTS_BuyUpgrade(int ConnIndex, int UpgradeIndex);
	void LTS_DetailedUpgrades(int ConnIndex);
	void LTS_DigList(int EntranceIndex);
	void LTS_TeleportList(int EntranceIndex);
	void LTS_NewEn();
	void LTS_SetDigFactor(float NewDigFactor);
	void LTS_StartDEA(int EntranceIndex);
	void LTS_SetDebGD(int NewGameDifficulty);
	void LTS_ClearEnt(int EntranceIndex);
	void KillAllPolicemen();
	void TeleportSectorC();
	void TestDrugDemand();
	void AddLaunderMoney(float Amount);
	void AddLaunderedMoney(float Amount);
	void SetExpoLevel(float expoFactorLevel);
	void addInventoryItem(const struct FName& ItemID, int Quantity);
	void TestGetItem(const struct FName& ItemID);
	void TestDealerExp(float Exp);
	void RegisterExpoEvent(const struct FName& EventID);
	void RegisterExpoSale(int AmountGrams);
	void CountKurwaEverything();
	void WyjebChuj();
	void KillAllSectants();
	void BuildAllVillas();
	void PsycheDone();
	void CheatAddExposition();
	void ExecuteUbergraph_worldConsoleCommands(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
