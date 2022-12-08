
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

// Function decoPendantCeilingLamp5.decoPendantCeilingLamp5_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoPendantCeilingLamp5_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp5.decoPendantCeilingLamp5_C.UserConstructionScript");

	AdecoPendantCeilingLamp5_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoPendantCeilingLamp5.decoPendantCeilingLamp5_C.SetLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoPendantCeilingLamp5_C::SetLightState(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp5.decoPendantCeilingLamp5_C.SetLightState");

	AdecoPendantCeilingLamp5_C_SetLightState_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoPendantCeilingLamp5.decoPendantCeilingLamp5_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoPendantCeilingLamp5_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp5.decoPendantCeilingLamp5_C.ReceiveBeginPlay");

	AdecoPendantCeilingLamp5_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoPendantCeilingLamp5.decoPendantCeilingLamp5_C.ExecuteUbergraph_decoPendantCeilingLamp5
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoPendantCeilingLamp5_C::ExecuteUbergraph_decoPendantCeilingLamp5(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoPendantCeilingLamp5.decoPendantCeilingLamp5_C.ExecuteUbergraph_decoPendantCeilingLamp5");

	AdecoPendantCeilingLamp5_C_ExecuteUbergraph_decoPendantCeilingLamp5_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
