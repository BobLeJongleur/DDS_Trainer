
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

// Function decoRetroCeilingLamp2.decoRetroCeilingLamp2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoRetroCeilingLamp2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoRetroCeilingLamp2.decoRetroCeilingLamp2_C.UserConstructionScript");

	AdecoRetroCeilingLamp2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoRetroCeilingLamp2.decoRetroCeilingLamp2_C.SetLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoRetroCeilingLamp2_C::SetLightState(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoRetroCeilingLamp2.decoRetroCeilingLamp2_C.SetLightState");

	AdecoRetroCeilingLamp2_C_SetLightState_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoRetroCeilingLamp2.decoRetroCeilingLamp2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoRetroCeilingLamp2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoRetroCeilingLamp2.decoRetroCeilingLamp2_C.ReceiveBeginPlay");

	AdecoRetroCeilingLamp2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoRetroCeilingLamp2.decoRetroCeilingLamp2_C.ExecuteUbergraph_decoRetroCeilingLamp2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoRetroCeilingLamp2_C::ExecuteUbergraph_decoRetroCeilingLamp2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoRetroCeilingLamp2.decoRetroCeilingLamp2_C.ExecuteUbergraph_decoRetroCeilingLamp2");

	AdecoRetroCeilingLamp2_C_ExecuteUbergraph_decoRetroCeilingLamp2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
