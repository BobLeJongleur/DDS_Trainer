
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

// Function decoModernCeilingLamp.decoModernCeilingLamp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoModernCeilingLamp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp.decoModernCeilingLamp_C.UserConstructionScript");

	AdecoModernCeilingLamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernCeilingLamp.decoModernCeilingLamp_C.SetLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoModernCeilingLamp_C::SetLightState(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp.decoModernCeilingLamp_C.SetLightState");

	AdecoModernCeilingLamp_C_SetLightState_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernCeilingLamp.decoModernCeilingLamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoModernCeilingLamp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp.decoModernCeilingLamp_C.ReceiveBeginPlay");

	AdecoModernCeilingLamp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernCeilingLamp.decoModernCeilingLamp_C.ExecuteUbergraph_decoModernCeilingLamp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoModernCeilingLamp_C::ExecuteUbergraph_decoModernCeilingLamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp.decoModernCeilingLamp_C.ExecuteUbergraph_decoModernCeilingLamp");

	AdecoModernCeilingLamp_C_ExecuteUbergraph_decoModernCeilingLamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
