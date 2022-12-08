
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

// Function decoModernCeilingLamp1.decoModernCeilingLamp1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoModernCeilingLamp1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp1.decoModernCeilingLamp1_C.UserConstructionScript");

	AdecoModernCeilingLamp1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernCeilingLamp1.decoModernCeilingLamp1_C.SetLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoModernCeilingLamp1_C::SetLightState(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp1.decoModernCeilingLamp1_C.SetLightState");

	AdecoModernCeilingLamp1_C_SetLightState_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernCeilingLamp1.decoModernCeilingLamp1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoModernCeilingLamp1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp1.decoModernCeilingLamp1_C.ReceiveBeginPlay");

	AdecoModernCeilingLamp1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernCeilingLamp1.decoModernCeilingLamp1_C.ExecuteUbergraph_decoModernCeilingLamp1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoModernCeilingLamp1_C::ExecuteUbergraph_decoModernCeilingLamp1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp1.decoModernCeilingLamp1_C.ExecuteUbergraph_decoModernCeilingLamp1");

	AdecoModernCeilingLamp1_C_ExecuteUbergraph_decoModernCeilingLamp1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
