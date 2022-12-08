#pragma once

#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function worldConsoleCommands.worldConsoleCommands_C.CountClassNum
struct AworldConsoleCommands_C_CountClassNum_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.UserConstructionScript
struct AworldConsoleCommands_C_UserConstructionScript_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.giveMoney
struct AworldConsoleCommands_C_giveMoney_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.giveBankMoney
struct AworldConsoleCommands_C_giveBankMoney_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.levelUp
struct AworldConsoleCommands_C_levelUp_Params
{
	int                                                NumLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.giveMeExp
struct AworldConsoleCommands_C_giveMeExp_Params
{
	float                                              expAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.spawnDrugSource
struct AworldConsoleCommands_C_spawnDrugSource_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.disableSubLevelStreaming
struct AworldConsoleCommands_C_disableSubLevelStreaming_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.removeDealers
struct AworldConsoleCommands_C_removeDealers_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.GetNewUpgrades
struct AworldConsoleCommands_C_GetNewUpgrades_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.SetSeenUpgrades
struct AworldConsoleCommands_C_SetSeenUpgrades_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.SebaPlay
struct AworldConsoleCommands_C_SebaPlay_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.enableTunnelEntering
struct AworldConsoleCommands_C_enableTunnelEntering_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_En
struct AworldConsoleCommands_C_LTS_En_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_CC
struct AworldConsoleCommands_C_LTS_CC_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewParam2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_PrintUpgrades
struct AworldConsoleCommands_C_LTS_PrintUpgrades_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_AddMoney
struct AworldConsoleCommands_C_LTS_AddMoney_Params
{
	int                                                ConnIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              moneyAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_PrintConns
struct AworldConsoleCommands_C_LTS_PrintConns_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_GetUpgradesStates
struct AworldConsoleCommands_C_LTS_GetUpgradesStates_Params
{
	int                                                ConnIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_BuyUpgrade
struct AworldConsoleCommands_C_LTS_BuyUpgrade_Params
{
	int                                                ConnIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UpgradeIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_DetailedUpgrades
struct AworldConsoleCommands_C_LTS_DetailedUpgrades_Params
{
	int                                                ConnIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_DigList
struct AworldConsoleCommands_C_LTS_DigList_Params
{
	int                                                EntranceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_TeleportList
struct AworldConsoleCommands_C_LTS_TeleportList_Params
{
	int                                                EntranceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_NewEn
struct AworldConsoleCommands_C_LTS_NewEn_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_SetDigFactor
struct AworldConsoleCommands_C_LTS_SetDigFactor_Params
{
	float                                              NewDigFactor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_StartDEA
struct AworldConsoleCommands_C_LTS_StartDEA_Params
{
	int                                                EntranceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_SetDebGD
struct AworldConsoleCommands_C_LTS_SetDebGD_Params
{
	int                                                NewGameDifficulty;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.LTS_ClearEnt
struct AworldConsoleCommands_C_LTS_ClearEnt_Params
{
	int                                                EntranceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.KillAllPolicemen
struct AworldConsoleCommands_C_KillAllPolicemen_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.TeleportSectorC
struct AworldConsoleCommands_C_TeleportSectorC_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.TestDrugDemand
struct AworldConsoleCommands_C_TestDrugDemand_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.AddLaunderMoney
struct AworldConsoleCommands_C_AddLaunderMoney_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.AddLaunderedMoney
struct AworldConsoleCommands_C_AddLaunderedMoney_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.SetExpoLevel
struct AworldConsoleCommands_C_SetExpoLevel_Params
{
	float                                              expoFactorLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.addInventoryItem
struct AworldConsoleCommands_C_addInventoryItem_Params
{
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.TestGetItem
struct AworldConsoleCommands_C_TestGetItem_Params
{
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.TestDealerExp
struct AworldConsoleCommands_C_TestDealerExp_Params
{
	float                                              Exp;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.RegisterExpoEvent
struct AworldConsoleCommands_C_RegisterExpoEvent_Params
{
	struct FName                                       EventID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.RegisterExpoSale
struct AworldConsoleCommands_C_RegisterExpoSale_Params
{
	int                                                AmountGrams;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldConsoleCommands.worldConsoleCommands_C.CountKurwaEverything
struct AworldConsoleCommands_C_CountKurwaEverything_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.WyjebChuj
struct AworldConsoleCommands_C_WyjebChuj_Params
{
};

// Function worldConsoleCommands.worldConsoleCommands_C.ExecuteUbergraph_worldConsoleCommands
struct AworldConsoleCommands_C_ExecuteUbergraph_worldConsoleCommands_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
