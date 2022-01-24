
#include "pch.h"

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function worldConsoleCommands.worldConsoleCommands_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.UserConstructionScript");

	AworldConsoleCommands_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.giveMoney
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::giveMoney(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.giveMoney");

	AworldConsoleCommands_C_giveMoney_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.giveBankMoney
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::giveBankMoney(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.giveBankMoney");

	AworldConsoleCommands_C_giveBankMoney_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.levelUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::levelUp(int NumLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.levelUp");

	AworldConsoleCommands_C_levelUp_Params params;
	params.NumLevel = NumLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.giveMeExp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          expAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::giveMeExp(float expAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.giveMeExp");

	AworldConsoleCommands_C_giveMeExp_Params params;
	params.expAmount = expAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.spawnDrugSource
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::spawnDrugSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.spawnDrugSource");

	AworldConsoleCommands_C_spawnDrugSource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.disableSubLevelStreaming
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::disableSubLevelStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.disableSubLevelStreaming");

	AworldConsoleCommands_C_disableSubLevelStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.removeDealers
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::removeDealers()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.removeDealers");

	AworldConsoleCommands_C_removeDealers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.GetNewUpgrades
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::GetNewUpgrades()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.GetNewUpgrades");

	AworldConsoleCommands_C_GetNewUpgrades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.SetSeenUpgrades
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::SetSeenUpgrades()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.SetSeenUpgrades");

	AworldConsoleCommands_C_SetSeenUpgrades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.SebaPlay
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::SebaPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.SebaPlay");

	AworldConsoleCommands_C_SebaPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.enableTunnelEntering
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::enableTunnelEntering()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.enableTunnelEntering");

	AworldConsoleCommands_C_enableTunnelEntering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_En
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::LTS_En()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_En");

	AworldConsoleCommands_C_LTS_En_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewParam2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::LTS_CC(int NewParam, int NewParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_CC");

	AworldConsoleCommands_C_LTS_CC_Params params;
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_PrintUpgrades
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::LTS_PrintUpgrades()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_PrintUpgrades");

	AworldConsoleCommands_C_LTS_PrintUpgrades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_AddMoney
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ConnIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          moneyAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::LTS_AddMoney(int ConnIndex, float moneyAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_AddMoney");

	AworldConsoleCommands_C_LTS_AddMoney_Params params;
	params.ConnIndex = ConnIndex;
	params.moneyAmount = moneyAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_PrintConns
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::LTS_PrintConns()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_PrintConns");

	AworldConsoleCommands_C_LTS_PrintConns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_GetUpgradesStates
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ConnIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::LTS_GetUpgradesStates(int ConnIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_GetUpgradesStates");

	AworldConsoleCommands_C_LTS_GetUpgradesStates_Params params;
	params.ConnIndex = ConnIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_BuyUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ConnIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            UpgradeIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::LTS_BuyUpgrade(int ConnIndex, int UpgradeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_BuyUpgrade");

	AworldConsoleCommands_C_LTS_BuyUpgrade_Params params;
	params.ConnIndex = ConnIndex;
	params.UpgradeIndex = UpgradeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_DetailedUpgrades
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ConnIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::LTS_DetailedUpgrades(int ConnIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_DetailedUpgrades");

	AworldConsoleCommands_C_LTS_DetailedUpgrades_Params params;
	params.ConnIndex = ConnIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_DigList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntranceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::LTS_DigList(int EntranceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_DigList");

	AworldConsoleCommands_C_LTS_DigList_Params params;
	params.EntranceIndex = EntranceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_TeleportList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntranceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::LTS_TeleportList(int EntranceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_TeleportList");

	AworldConsoleCommands_C_LTS_TeleportList_Params params;
	params.EntranceIndex = EntranceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_NewEn
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::LTS_NewEn()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_NewEn");

	AworldConsoleCommands_C_LTS_NewEn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_SetDigFactor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewDigFactor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::LTS_SetDigFactor(float NewDigFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_SetDigFactor");

	AworldConsoleCommands_C_LTS_SetDigFactor_Params params;
	params.NewDigFactor = NewDigFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_StartDEA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntranceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::LTS_StartDEA(int EntranceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_StartDEA");

	AworldConsoleCommands_C_LTS_StartDEA_Params params;
	params.EntranceIndex = EntranceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_SetDebGD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewGameDifficulty              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::LTS_SetDebGD(int NewGameDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_SetDebGD");

	AworldConsoleCommands_C_LTS_SetDebGD_Params params;
	params.NewGameDifficulty = NewGameDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.LTS_ClearEnt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntranceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::LTS_ClearEnt(int EntranceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_ClearEnt");

	AworldConsoleCommands_C_LTS_ClearEnt_Params params;
	params.EntranceIndex = EntranceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.KillAllPolicemen
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::KillAllPolicemen()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.KillAllPolicemen");

	AworldConsoleCommands_C_KillAllPolicemen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.TeleportSectorC
// (BlueprintCallable, BlueprintEvent)

void AworldConsoleCommands_C::TeleportSectorC()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.TeleportSectorC");

	AworldConsoleCommands_C_TeleportSectorC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldConsoleCommands.worldConsoleCommands_C.ExecuteUbergraph_worldConsoleCommands
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldConsoleCommands_C::ExecuteUbergraph_worldConsoleCommands(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.ExecuteUbergraph_worldConsoleCommands");

	AworldConsoleCommands_C_ExecuteUbergraph_worldConsoleCommands_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
