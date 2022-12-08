
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

// Function decoModernFloorLamp2.decoModernFloorLamp2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoModernFloorLamp2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp2.decoModernFloorLamp2_C.UserConstructionScript");

	AdecoModernFloorLamp2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp2.decoModernFloorLamp2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoModernFloorLamp2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp2.decoModernFloorLamp2_C.ReceiveBeginPlay");

	AdecoModernFloorLamp2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp2.decoModernFloorLamp2_C.InputToggleOff
// (BlueprintCallable, BlueprintEvent)

void AdecoModernFloorLamp2_C::InputToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp2.decoModernFloorLamp2_C.InputToggleOff");

	AdecoModernFloorLamp2_C_InputToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp2.decoModernFloorLamp2_C.InputToggleOn
// (BlueprintCallable, BlueprintEvent)

void AdecoModernFloorLamp2_C::InputToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp2.decoModernFloorLamp2_C.InputToggleOn");

	AdecoModernFloorLamp2_C_InputToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp2.decoModernFloorLamp2_C.ExecuteUbergraph_decoModernFloorLamp2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoModernFloorLamp2_C::ExecuteUbergraph_decoModernFloorLamp2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp2.decoModernFloorLamp2_C.ExecuteUbergraph_decoModernFloorLamp2");

	AdecoModernFloorLamp2_C_ExecuteUbergraph_decoModernFloorLamp2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
