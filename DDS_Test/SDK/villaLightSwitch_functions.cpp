
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

// Function villaLightSwitch.villaLightSwitch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AvillaLightSwitch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function villaLightSwitch.villaLightSwitch_C.UserConstructionScript");

	AvillaLightSwitch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaLightSwitch.villaLightSwitch_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AvillaLightSwitch_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function villaLightSwitch.villaLightSwitch_C.InteractionActivate");

	AvillaLightSwitch_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaLightSwitch.villaLightSwitch_C.SetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AvillaLightSwitch_C::SetActivity(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function villaLightSwitch.villaLightSwitch_C.SetActivity");

	AvillaLightSwitch_C_SetActivity_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaLightSwitch.villaLightSwitch_C.ExecuteUbergraph_villaLightSwitch
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AvillaLightSwitch_C::ExecuteUbergraph_villaLightSwitch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function villaLightSwitch.villaLightSwitch_C.ExecuteUbergraph_villaLightSwitch");

	AvillaLightSwitch_C_ExecuteUbergraph_villaLightSwitch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
