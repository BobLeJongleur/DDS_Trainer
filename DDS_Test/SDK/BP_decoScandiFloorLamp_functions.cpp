
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

// Function BP_decoScandiFloorLamp.BP_decoScandiFloorLamp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_decoScandiFloorLamp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoScandiFloorLamp.BP_decoScandiFloorLamp_C.UserConstructionScript");

	ABP_decoScandiFloorLamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_decoScandiFloorLamp.BP_decoScandiFloorLamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_decoScandiFloorLamp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoScandiFloorLamp.BP_decoScandiFloorLamp_C.ReceiveBeginPlay");

	ABP_decoScandiFloorLamp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_decoScandiFloorLamp.BP_decoScandiFloorLamp_C.InputToggleOff
// (BlueprintCallable, BlueprintEvent)

void ABP_decoScandiFloorLamp_C::InputToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoScandiFloorLamp.BP_decoScandiFloorLamp_C.InputToggleOff");

	ABP_decoScandiFloorLamp_C_InputToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_decoScandiFloorLamp.BP_decoScandiFloorLamp_C.InputToggleOn
// (BlueprintCallable, BlueprintEvent)

void ABP_decoScandiFloorLamp_C::InputToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoScandiFloorLamp.BP_decoScandiFloorLamp_C.InputToggleOn");

	ABP_decoScandiFloorLamp_C_InputToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_decoScandiFloorLamp.BP_decoScandiFloorLamp_C.ExecuteUbergraph_BP_decoScandiFloorLamp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_decoScandiFloorLamp_C::ExecuteUbergraph_BP_decoScandiFloorLamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoScandiFloorLamp.BP_decoScandiFloorLamp_C.ExecuteUbergraph_BP_decoScandiFloorLamp");

	ABP_decoScandiFloorLamp_C_ExecuteUbergraph_BP_decoScandiFloorLamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
