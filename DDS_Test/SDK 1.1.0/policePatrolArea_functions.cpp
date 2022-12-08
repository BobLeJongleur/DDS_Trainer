
#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function policePatrolArea.policePatrolArea_C.GetPatrolSpawnChances
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Timeout                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ChanceLow                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ChanceHigh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ApolicePatrolArea_C::GetPatrolSpawnChances(float* Timeout, float* ChanceLow, float* ChanceHigh)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.GetPatrolSpawnChances");

	ApolicePatrolArea_C_GetPatrolSpawnChances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Timeout != nullptr)
		*Timeout = params.Timeout;
	if (ChanceLow != nullptr)
		*ChanceLow = params.ChanceLow;
	if (ChanceHigh != nullptr)
		*ChanceHigh = params.ChanceHigh;
}


// Function policePatrolArea.policePatrolArea_C.SpawnPatrol
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ApolicePatrolPoint_C*    spawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApolicePatrolArea_C::SpawnPatrol(class ApolicePatrolPoint_C* spawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.SpawnPatrol");

	ApolicePatrolArea_C_SpawnPatrol_Params params;
	params.spawnPoint = spawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolArea.policePatrolArea_C.chooseSpawnPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ApolicePatrolPoint_C*    OutPoint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Succeded                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   FailID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ApolicePatrolArea_C::chooseSpawnPoint(class ApolicePatrolPoint_C** OutPoint, bool* Succeded, struct FName* FailID)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.chooseSpawnPoint");

	ApolicePatrolArea_C_chooseSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPoint != nullptr)
		*OutPoint = params.OutPoint;
	if (Succeded != nullptr)
		*Succeded = params.Succeded;
	if (FailID != nullptr)
		*FailID = params.FailID;
}


// Function policePatrolArea.policePatrolArea_C.getUnreachedPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ApolicePatrolPoint_C*    Patrol_Point                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ApolicePatrolArea_C::getUnreachedPoint(class ApolicePatrolPoint_C** Patrol_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.getUnreachedPoint");

	ApolicePatrolArea_C_getUnreachedPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Patrol_Point != nullptr)
		*Patrol_Point = params.Patrol_Point;
}


// Function policePatrolArea.policePatrolArea_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApolicePatrolArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.UserConstructionScript");

	ApolicePatrolArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolArea.policePatrolArea_C.ShortRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApolicePatrolArea_C::ShortRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.ShortRadiusChanged");

	ApolicePatrolArea_C_ShortRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolArea.policePatrolArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApolicePatrolArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.ReceiveBeginPlay");

	ApolicePatrolArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolArea.policePatrolArea_C.resetPatrolArea
// (BlueprintCallable, BlueprintEvent)

void ApolicePatrolArea_C::resetPatrolArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.resetPatrolArea");

	ApolicePatrolArea_C_resetPatrolArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolArea.policePatrolArea_C.restartArea
// (BlueprintCallable, BlueprintEvent)

void ApolicePatrolArea_C::restartArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.restartArea");

	ApolicePatrolArea_C_restartArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolArea.policePatrolArea_C.LongRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApolicePatrolArea_C::LongRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.LongRadiusChanged");

	ApolicePatrolArea_C_LongRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolArea.policePatrolArea_C.ResetSpawnGate
// (BlueprintCallable, BlueprintEvent)

void ApolicePatrolArea_C::ResetSpawnGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.ResetSpawnGate");

	ApolicePatrolArea_C_ResetSpawnGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolArea.policePatrolArea_C.ExecuteUbergraph_policePatrolArea
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApolicePatrolArea_C::ExecuteUbergraph_policePatrolArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.ExecuteUbergraph_policePatrolArea");

	ApolicePatrolArea_C_ExecuteUbergraph_policePatrolArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
