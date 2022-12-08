
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

// Function labPlayerRespawnPoint.labPlayerRespawnPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlabPlayerRespawnPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function labPlayerRespawnPoint.labPlayerRespawnPoint_C.UserConstructionScript");

	AlabPlayerRespawnPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPlayerRespawnPoint.labPlayerRespawnPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AlabPlayerRespawnPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function labPlayerRespawnPoint.labPlayerRespawnPoint_C.ReceiveBeginPlay");

	AlabPlayerRespawnPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPlayerRespawnPoint.labPlayerRespawnPoint_C.ExecuteUbergraph_labPlayerRespawnPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabPlayerRespawnPoint_C::ExecuteUbergraph_labPlayerRespawnPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function labPlayerRespawnPoint.labPlayerRespawnPoint_C.ExecuteUbergraph_labPlayerRespawnPoint");

	AlabPlayerRespawnPoint_C_ExecuteUbergraph_labPlayerRespawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
