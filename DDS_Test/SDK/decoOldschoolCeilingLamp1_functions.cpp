
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

// Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoOldschoolCeilingLamp1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.UserConstructionScript");

	AdecoOldschoolCeilingLamp1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.SetLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoOldschoolCeilingLamp1_C::SetLightState(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.SetLightState");

	AdecoOldschoolCeilingLamp1_C_SetLightState_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoOldschoolCeilingLamp1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.ReceiveBeginPlay");

	AdecoOldschoolCeilingLamp1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.ExecuteUbergraph_decoOldschoolCeilingLamp1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoOldschoolCeilingLamp1_C::ExecuteUbergraph_decoOldschoolCeilingLamp1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.ExecuteUbergraph_decoOldschoolCeilingLamp1");

	AdecoOldschoolCeilingLamp1_C_ExecuteUbergraph_decoOldschoolCeilingLamp1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
