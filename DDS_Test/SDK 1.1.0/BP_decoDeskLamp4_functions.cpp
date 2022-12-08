
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

// Function BP_decoDeskLamp4.BP_decoDeskLamp4_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_decoDeskLamp4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp4.BP_decoDeskLamp4_C.UserConstructionScript");

	ABP_decoDeskLamp4_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_decoDeskLamp4.BP_decoDeskLamp4_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_decoDeskLamp4_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp4.BP_decoDeskLamp4_C.ReceiveBeginPlay");

	ABP_decoDeskLamp4_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_decoDeskLamp4.BP_decoDeskLamp4_C.InputToggleOff
// (BlueprintCallable, BlueprintEvent)

void ABP_decoDeskLamp4_C::InputToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp4.BP_decoDeskLamp4_C.InputToggleOff");

	ABP_decoDeskLamp4_C_InputToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_decoDeskLamp4.BP_decoDeskLamp4_C.InputToggleOn
// (BlueprintCallable, BlueprintEvent)

void ABP_decoDeskLamp4_C::InputToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp4.BP_decoDeskLamp4_C.InputToggleOn");

	ABP_decoDeskLamp4_C_InputToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_decoDeskLamp4.BP_decoDeskLamp4_C.ExecuteUbergraph_BP_decoDeskLamp4
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_decoDeskLamp4_C::ExecuteUbergraph_BP_decoDeskLamp4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp4.BP_decoDeskLamp4_C.ExecuteUbergraph_BP_decoDeskLamp4");

	ABP_decoDeskLamp4_C_ExecuteUbergraph_BP_decoDeskLamp4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
