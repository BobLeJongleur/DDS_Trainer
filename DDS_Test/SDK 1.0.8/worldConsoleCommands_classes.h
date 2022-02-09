#pragma once

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass worldConsoleCommands.worldConsoleCommands_C
// 0x0064 (0x038C - 0x0328)
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

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass worldConsoleCommands.worldConsoleCommands_C");
		return ptr;
	}


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
	void ExecuteUbergraph_worldConsoleCommands(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
