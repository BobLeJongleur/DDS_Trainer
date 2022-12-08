
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

// Function decoPendantCeilingLamp3.decoPendantCeilingLamp3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoPendantCeilingLamp3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp3.decoPendantCeilingLamp3_C.UserConstructionScript");

	AdecoPendantCeilingLamp3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoPendantCeilingLamp3.decoPendantCeilingLamp3_C.SetLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoPendantCeilingLamp3_C::SetLightState(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp3.decoPendantCeilingLamp3_C.SetLightState");

	AdecoPendantCeilingLamp3_C_SetLightState_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoPendantCeilingLamp3.decoPendantCeilingLamp3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoPendantCeilingLamp3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp3.decoPendantCeilingLamp3_C.ReceiveBeginPlay");

	AdecoPendantCeilingLamp3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoPendantCeilingLamp3.decoPendantCeilingLamp3_C.ExecuteUbergraph_decoPendantCeilingLamp3
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoPendantCeilingLamp3_C::ExecuteUbergraph_decoPendantCeilingLamp3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp3.decoPendantCeilingLamp3_C.ExecuteUbergraph_decoPendantCeilingLamp3");

	AdecoPendantCeilingLamp3_C_ExecuteUbergraph_decoPendantCeilingLamp3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
