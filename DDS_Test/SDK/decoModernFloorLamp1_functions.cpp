
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

// Function decoModernFloorLamp1.decoModernFloorLamp1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoModernFloorLamp1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp1.decoModernFloorLamp1_C.UserConstructionScript");

	AdecoModernFloorLamp1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp1.decoModernFloorLamp1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoModernFloorLamp1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp1.decoModernFloorLamp1_C.ReceiveBeginPlay");

	AdecoModernFloorLamp1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp1.decoModernFloorLamp1_C.InputToggleOff
// (BlueprintCallable, BlueprintEvent)

void AdecoModernFloorLamp1_C::InputToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp1.decoModernFloorLamp1_C.InputToggleOff");

	AdecoModernFloorLamp1_C_InputToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp1.decoModernFloorLamp1_C.InputToggleOn
// (BlueprintCallable, BlueprintEvent)

void AdecoModernFloorLamp1_C::InputToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp1.decoModernFloorLamp1_C.InputToggleOn");

	AdecoModernFloorLamp1_C_InputToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp1.decoModernFloorLamp1_C.ExecuteUbergraph_decoModernFloorLamp1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoModernFloorLamp1_C::ExecuteUbergraph_decoModernFloorLamp1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp1.decoModernFloorLamp1_C.ExecuteUbergraph_decoModernFloorLamp1");

	AdecoModernFloorLamp1_C_ExecuteUbergraph_decoModernFloorLamp1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
