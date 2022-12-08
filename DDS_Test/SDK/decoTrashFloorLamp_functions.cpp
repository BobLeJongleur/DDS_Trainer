
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

// Function decoTrashFloorLamp.decoTrashFloorLamp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoTrashFloorLamp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoTrashFloorLamp.decoTrashFloorLamp_C.UserConstructionScript");

	AdecoTrashFloorLamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoTrashFloorLamp.decoTrashFloorLamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoTrashFloorLamp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoTrashFloorLamp.decoTrashFloorLamp_C.ReceiveBeginPlay");

	AdecoTrashFloorLamp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoTrashFloorLamp.decoTrashFloorLamp_C.InputToggleOff
// (BlueprintCallable, BlueprintEvent)

void AdecoTrashFloorLamp_C::InputToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoTrashFloorLamp.decoTrashFloorLamp_C.InputToggleOff");

	AdecoTrashFloorLamp_C_InputToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoTrashFloorLamp.decoTrashFloorLamp_C.InputToggleOn
// (BlueprintCallable, BlueprintEvent)

void AdecoTrashFloorLamp_C::InputToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoTrashFloorLamp.decoTrashFloorLamp_C.InputToggleOn");

	AdecoTrashFloorLamp_C_InputToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoTrashFloorLamp.decoTrashFloorLamp_C.ExecuteUbergraph_decoTrashFloorLamp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoTrashFloorLamp_C::ExecuteUbergraph_decoTrashFloorLamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoTrashFloorLamp.decoTrashFloorLamp_C.ExecuteUbergraph_decoTrashFloorLamp");

	AdecoTrashFloorLamp_C_ExecuteUbergraph_decoTrashFloorLamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
