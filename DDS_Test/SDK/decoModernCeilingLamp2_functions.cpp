
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

// Function decoModernCeilingLamp2.decoModernCeilingLamp2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoModernCeilingLamp2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp2.decoModernCeilingLamp2_C.UserConstructionScript");

	AdecoModernCeilingLamp2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernCeilingLamp2.decoModernCeilingLamp2_C.SetLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoModernCeilingLamp2_C::SetLightState(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp2.decoModernCeilingLamp2_C.SetLightState");

	AdecoModernCeilingLamp2_C_SetLightState_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernCeilingLamp2.decoModernCeilingLamp2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoModernCeilingLamp2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp2.decoModernCeilingLamp2_C.ReceiveBeginPlay");

	AdecoModernCeilingLamp2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernCeilingLamp2.decoModernCeilingLamp2_C.ExecuteUbergraph_decoModernCeilingLamp2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoModernCeilingLamp2_C::ExecuteUbergraph_decoModernCeilingLamp2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp2.decoModernCeilingLamp2_C.ExecuteUbergraph_decoModernCeilingLamp2");

	AdecoModernCeilingLamp2_C_ExecuteUbergraph_decoModernCeilingLamp2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
