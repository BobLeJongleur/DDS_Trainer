
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

// Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoOldschoolFloorLamp1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.UserConstructionScript");

	AdecoOldschoolFloorLamp1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.InputToggleOff
// (BlueprintCallable, BlueprintEvent)

void AdecoOldschoolFloorLamp1_C::InputToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.InputToggleOff");

	AdecoOldschoolFloorLamp1_C_InputToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.InputToggleOn
// (BlueprintCallable, BlueprintEvent)

void AdecoOldschoolFloorLamp1_C::InputToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.InputToggleOn");

	AdecoOldschoolFloorLamp1_C_InputToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.ExecuteUbergraph_decoOldschoolFloorLamp1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoOldschoolFloorLamp1_C::ExecuteUbergraph_decoOldschoolFloorLamp1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.ExecuteUbergraph_decoOldschoolFloorLamp1");

	AdecoOldschoolFloorLamp1_C_ExecuteUbergraph_decoOldschoolFloorLamp1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
