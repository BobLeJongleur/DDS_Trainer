
#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PoliceBlockadeManager.PoliceBlockadeManager_C.GetBlockadeLifetime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          LifeTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APoliceBlockadeManager_C::GetBlockadeLifetime(float* LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.GetBlockadeLifetime");

	APoliceBlockadeManager_C_GetBlockadeLifetime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LifeTime != nullptr)
		*LifeTime = params.LifeTime;
}


// Function PoliceBlockadeManager.PoliceBlockadeManager_C.GetSpawnChance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SpawnChance                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APoliceBlockadeManager_C::GetSpawnChance(float* SpawnChance)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.GetSpawnChance");

	APoliceBlockadeManager_C_GetSpawnChance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnChance != nullptr)
		*SpawnChance = params.SpawnChance;
}


// Function PoliceBlockadeManager.PoliceBlockadeManager_C.chooseSpawnPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APoliceBlockadeArea_C*   OutArea                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APoliceBlockadeManager_C::chooseSpawnPoint(class APoliceBlockadeArea_C** OutArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.chooseSpawnPoint");

	APoliceBlockadeManager_C_chooseSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutArea != nullptr)
		*OutArea = params.OutArea;
}


// Function PoliceBlockadeManager.PoliceBlockadeManager_C.RegisterPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APoliceBlockadeArea_C*   Area                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APoliceBlockadeManager_C::RegisterPlayer(class APoliceBlockadeArea_C* Area)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.RegisterPlayer");

	APoliceBlockadeManager_C_RegisterPlayer_Params params;
	params.Area = Area;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeManager.PoliceBlockadeManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APoliceBlockadeManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.UserConstructionScript");

	APoliceBlockadeManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeManager.PoliceBlockadeManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APoliceBlockadeManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.ReceiveBeginPlay");

	APoliceBlockadeManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeManager.PoliceBlockadeManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APoliceBlockadeManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.ReceiveTick");

	APoliceBlockadeManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeManager.PoliceBlockadeManager_C.ForceSpawnBlockade
// (BlueprintCallable, BlueprintEvent)

void APoliceBlockadeManager_C::ForceSpawnBlockade()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.ForceSpawnBlockade");

	APoliceBlockadeManager_C_ForceSpawnBlockade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeManager.PoliceBlockadeManager_C.CheckRefs
// (BlueprintCallable, BlueprintEvent)

void APoliceBlockadeManager_C::CheckRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.CheckRefs");

	APoliceBlockadeManager_C_CheckRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeManager.PoliceBlockadeManager_C.ExecuteUbergraph_PoliceBlockadeManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APoliceBlockadeManager_C::ExecuteUbergraph_PoliceBlockadeManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.ExecuteUbergraph_PoliceBlockadeManager");

	APoliceBlockadeManager_C_ExecuteUbergraph_PoliceBlockadeManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
