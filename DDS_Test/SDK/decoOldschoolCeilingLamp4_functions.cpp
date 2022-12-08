
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

// Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoOldschoolCeilingLamp4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.UserConstructionScript");

	AdecoOldschoolCeilingLamp4_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.SetLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoOldschoolCeilingLamp4_C::SetLightState(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.SetLightState");

	AdecoOldschoolCeilingLamp4_C_SetLightState_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoOldschoolCeilingLamp4_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.ReceiveBeginPlay");

	AdecoOldschoolCeilingLamp4_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.ExecuteUbergraph_decoOldschoolCeilingLamp4
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoOldschoolCeilingLamp4_C::ExecuteUbergraph_decoOldschoolCeilingLamp4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.ExecuteUbergraph_decoOldschoolCeilingLamp4");

	AdecoOldschoolCeilingLamp4_C_ExecuteUbergraph_decoOldschoolCeilingLamp4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
