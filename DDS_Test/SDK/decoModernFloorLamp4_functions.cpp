
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

// Function decoModernFloorLamp4.decoModernFloorLamp4_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoModernFloorLamp4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp4.decoModernFloorLamp4_C.UserConstructionScript");

	AdecoModernFloorLamp4_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp4.decoModernFloorLamp4_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoModernFloorLamp4_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp4.decoModernFloorLamp4_C.ReceiveBeginPlay");

	AdecoModernFloorLamp4_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp4.decoModernFloorLamp4_C.InputToggleOff
// (BlueprintCallable, BlueprintEvent)

void AdecoModernFloorLamp4_C::InputToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp4.decoModernFloorLamp4_C.InputToggleOff");

	AdecoModernFloorLamp4_C_InputToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp4.decoModernFloorLamp4_C.InputToggleOn
// (BlueprintCallable, BlueprintEvent)

void AdecoModernFloorLamp4_C::InputToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp4.decoModernFloorLamp4_C.InputToggleOn");

	AdecoModernFloorLamp4_C_InputToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp4.decoModernFloorLamp4_C.ExecuteUbergraph_decoModernFloorLamp4
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoModernFloorLamp4_C::ExecuteUbergraph_decoModernFloorLamp4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp4.decoModernFloorLamp4_C.ExecuteUbergraph_decoModernFloorLamp4");

	AdecoModernFloorLamp4_C_ExecuteUbergraph_decoModernFloorLamp4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
