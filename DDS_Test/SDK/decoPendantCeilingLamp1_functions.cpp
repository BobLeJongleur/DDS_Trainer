
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

// Function decoPendantCeilingLamp1.decoPendantCeilingLamp1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoPendantCeilingLamp1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp1.decoPendantCeilingLamp1_C.UserConstructionScript");

	AdecoPendantCeilingLamp1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoPendantCeilingLamp1.decoPendantCeilingLamp1_C.SetLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoPendantCeilingLamp1_C::SetLightState(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp1.decoPendantCeilingLamp1_C.SetLightState");

	AdecoPendantCeilingLamp1_C_SetLightState_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoPendantCeilingLamp1.decoPendantCeilingLamp1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoPendantCeilingLamp1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp1.decoPendantCeilingLamp1_C.ReceiveBeginPlay");

	AdecoPendantCeilingLamp1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoPendantCeilingLamp1.decoPendantCeilingLamp1_C.ExecuteUbergraph_decoPendantCeilingLamp1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoPendantCeilingLamp1_C::ExecuteUbergraph_decoPendantCeilingLamp1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp1.decoPendantCeilingLamp1_C.ExecuteUbergraph_decoPendantCeilingLamp1");

	AdecoPendantCeilingLamp1_C_ExecuteUbergraph_decoPendantCeilingLamp1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
