
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

// Function lightSwitchWallBP.lightSwitchWallBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AlightSwitchWallBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lightSwitchWallBP.lightSwitchWallBP_C.UserConstructionScript");

	AlightSwitchWallBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightSwitchWallBP.lightSwitchWallBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AlightSwitchWallBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function lightSwitchWallBP.lightSwitchWallBP_C.ReceiveBeginPlay");

	AlightSwitchWallBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightSwitchWallBP.lightSwitchWallBP_C.activateSwitch
// (BlueprintCallable, BlueprintEvent)

void AlightSwitchWallBP_C::activateSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function lightSwitchWallBP.lightSwitchWallBP_C.activateSwitch");

	AlightSwitchWallBP_C_activateSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightSwitchWallBP.lightSwitchWallBP_C.ExecuteUbergraph_lightSwitchWallBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlightSwitchWallBP_C::ExecuteUbergraph_lightSwitchWallBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lightSwitchWallBP.lightSwitchWallBP_C.ExecuteUbergraph_lightSwitchWallBP");

	AlightSwitchWallBP_C_ExecuteUbergraph_lightSwitchWallBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
