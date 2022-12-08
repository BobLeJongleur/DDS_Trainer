
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

// Function decoModernCeilingLamp3.decoModernCeilingLamp3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoModernCeilingLamp3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp3.decoModernCeilingLamp3_C.UserConstructionScript");

	AdecoModernCeilingLamp3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernCeilingLamp3.decoModernCeilingLamp3_C.SetLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoModernCeilingLamp3_C::SetLightState(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp3.decoModernCeilingLamp3_C.SetLightState");

	AdecoModernCeilingLamp3_C_SetLightState_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernCeilingLamp3.decoModernCeilingLamp3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoModernCeilingLamp3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp3.decoModernCeilingLamp3_C.ReceiveBeginPlay");

	AdecoModernCeilingLamp3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoModernCeilingLamp3.decoModernCeilingLamp3_C.ExecuteUbergraph_decoModernCeilingLamp3
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoModernCeilingLamp3_C::ExecuteUbergraph_decoModernCeilingLamp3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoModernCeilingLamp3.decoModernCeilingLamp3_C.ExecuteUbergraph_decoModernCeilingLamp3");

	AdecoModernCeilingLamp3_C_ExecuteUbergraph_decoModernCeilingLamp3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
