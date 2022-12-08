
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

// Function labCrewSpawnPoint.labCrewSpawnPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlabCrewSpawnPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function labCrewSpawnPoint.labCrewSpawnPoint_C.UserConstructionScript");

	AlabCrewSpawnPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labCrewSpawnPoint.labCrewSpawnPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AlabCrewSpawnPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function labCrewSpawnPoint.labCrewSpawnPoint_C.ReceiveBeginPlay");

	AlabCrewSpawnPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labCrewSpawnPoint.labCrewSpawnPoint_C.ExecuteUbergraph_labCrewSpawnPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabCrewSpawnPoint_C::ExecuteUbergraph_labCrewSpawnPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function labCrewSpawnPoint.labCrewSpawnPoint_C.ExecuteUbergraph_labCrewSpawnPoint");

	AlabCrewSpawnPoint_C_ExecuteUbergraph_labCrewSpawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
