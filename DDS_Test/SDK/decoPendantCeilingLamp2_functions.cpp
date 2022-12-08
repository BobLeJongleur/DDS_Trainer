
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

// Function decoPendantCeilingLamp2.decoPendantCeilingLamp2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoPendantCeilingLamp2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp2.decoPendantCeilingLamp2_C.UserConstructionScript");

	AdecoPendantCeilingLamp2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoPendantCeilingLamp2.decoPendantCeilingLamp2_C.SetLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoPendantCeilingLamp2_C::SetLightState(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp2.decoPendantCeilingLamp2_C.SetLightState");

	AdecoPendantCeilingLamp2_C_SetLightState_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoPendantCeilingLamp2.decoPendantCeilingLamp2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoPendantCeilingLamp2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp2.decoPendantCeilingLamp2_C.ReceiveBeginPlay");

	AdecoPendantCeilingLamp2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoPendantCeilingLamp2.decoPendantCeilingLamp2_C.ExecuteUbergraph_decoPendantCeilingLamp2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoPendantCeilingLamp2_C::ExecuteUbergraph_decoPendantCeilingLamp2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp2.decoPendantCeilingLamp2_C.ExecuteUbergraph_decoPendantCeilingLamp2");

	AdecoPendantCeilingLamp2_C_ExecuteUbergraph_decoPendantCeilingLamp2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
