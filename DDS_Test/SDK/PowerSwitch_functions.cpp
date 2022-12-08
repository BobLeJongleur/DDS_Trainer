
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

// Function PowerSwitch.PowerSwitch_C.VerifyHasKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasKey                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APowerSwitch_C::VerifyHasKey(class AplayerCharacterBP_C* Player, bool* HasKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSwitch.PowerSwitch_C.VerifyHasKey");

	APowerSwitch_C_VerifyHasKey_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasKey != nullptr)
		*HasKey = params.HasKey;
}


// Function PowerSwitch.PowerSwitch_C.DisablePower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerSwitch_C::DisablePower(class AplayerCharacterBP_C* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSwitch.PowerSwitch_C.DisablePower");

	APowerSwitch_C_DisablePower_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSwitch.PowerSwitch_C.HasPower
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Power                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APowerSwitch_C::HasPower(bool* Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSwitch.PowerSwitch_C.HasPower");

	APowerSwitch_C_HasPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Power != nullptr)
		*Power = params.Power;
}


// Function PowerSwitch.PowerSwitch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerSwitch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSwitch.PowerSwitch_C.UserConstructionScript");

	APowerSwitch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSwitch.PowerSwitch_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerSwitch_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSwitch.PowerSwitch_C.ReceiveTick");

	APowerSwitch_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSwitch.PowerSwitch_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerSwitch_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSwitch.PowerSwitch_C.InteractionActivate");

	APowerSwitch_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSwitch.PowerSwitch_C.ExecuteUbergraph_PowerSwitch
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerSwitch_C::ExecuteUbergraph_PowerSwitch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSwitch.PowerSwitch_C.ExecuteUbergraph_PowerSwitch");

	APowerSwitch_C_ExecuteUbergraph_PowerSwitch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerSwitch.PowerSwitch_C.PowerStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APowerSwitch_C::PowerStateChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerSwitch.PowerSwitch_C.PowerStateChange__DelegateSignature");

	APowerSwitch_C_PowerStateChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
