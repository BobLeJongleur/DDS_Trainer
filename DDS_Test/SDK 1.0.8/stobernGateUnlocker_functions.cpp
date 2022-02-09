
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

// Function stobernGateUnlocker.stobernGateUnlocker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AstobernGateUnlocker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function stobernGateUnlocker.stobernGateUnlocker_C.UserConstructionScript");

	AstobernGateUnlocker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function stobernGateUnlocker.stobernGateUnlocker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AstobernGateUnlocker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function stobernGateUnlocker.stobernGateUnlocker_C.ReceiveBeginPlay");

	AstobernGateUnlocker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function stobernGateUnlocker.stobernGateUnlocker_C.ExecuteUbergraph_stobernGateUnlocker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstobernGateUnlocker_C::ExecuteUbergraph_stobernGateUnlocker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function stobernGateUnlocker.stobernGateUnlocker_C.ExecuteUbergraph_stobernGateUnlocker");

	AstobernGateUnlocker_C_ExecuteUbergraph_stobernGateUnlocker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
