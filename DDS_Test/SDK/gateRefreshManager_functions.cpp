
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

// Function gateRefreshManager.gateRefreshManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AgateRefreshManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function gateRefreshManager.gateRefreshManager_C.UserConstructionScript");

	AgateRefreshManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gateRefreshManager.gateRefreshManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AgateRefreshManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function gateRefreshManager.gateRefreshManager_C.ReceiveBeginPlay");

	AgateRefreshManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gateRefreshManager.gateRefreshManager_C.checkLockpickReset
// (BlueprintCallable, BlueprintEvent)

void AgateRefreshManager_C::checkLockpickReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function gateRefreshManager.gateRefreshManager_C.checkLockpickReset");

	AgateRefreshManager_C_checkLockpickReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gateRefreshManager.gateRefreshManager_C.ExecuteUbergraph_gateRefreshManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AgateRefreshManager_C::ExecuteUbergraph_gateRefreshManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gateRefreshManager.gateRefreshManager_C.ExecuteUbergraph_gateRefreshManager");

	AgateRefreshManager_C_ExecuteUbergraph_gateRefreshManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
