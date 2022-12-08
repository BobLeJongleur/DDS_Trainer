
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

// Function decoModernFloorLamp3.decoModernFloorLamp3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoModernFloorLamp3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp3.decoModernFloorLamp3_C.UserConstructionScript");

	AdecoModernFloorLamp3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp3.decoModernFloorLamp3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoModernFloorLamp3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp3.decoModernFloorLamp3_C.ReceiveBeginPlay");

	AdecoModernFloorLamp3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp3.decoModernFloorLamp3_C.InputToggleOff
// (BlueprintCallable, BlueprintEvent)

void AdecoModernFloorLamp3_C::InputToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp3.decoModernFloorLamp3_C.InputToggleOff");

	AdecoModernFloorLamp3_C_InputToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp3.decoModernFloorLamp3_C.InputToggleOn
// (BlueprintCallable, BlueprintEvent)

void AdecoModernFloorLamp3_C::InputToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp3.decoModernFloorLamp3_C.InputToggleOn");

	AdecoModernFloorLamp3_C_InputToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernFloorLamp3.decoModernFloorLamp3_C.ExecuteUbergraph_decoModernFloorLamp3
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoModernFloorLamp3_C::ExecuteUbergraph_decoModernFloorLamp3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp3.decoModernFloorLamp3_C.ExecuteUbergraph_decoModernFloorLamp3");

	AdecoModernFloorLamp3_C_ExecuteUbergraph_decoModernFloorLamp3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
