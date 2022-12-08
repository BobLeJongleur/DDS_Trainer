
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

// Function PontonSignal.PontonSignal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APontonSignal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonSignal.PontonSignal_C.UserConstructionScript");

	APontonSignal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonSignal.PontonSignal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APontonSignal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonSignal.PontonSignal_C.ReceiveBeginPlay");

	APontonSignal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonSignal.PontonSignal_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonSignal_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonSignal.PontonSignal_C.ReceiveTick");

	APontonSignal_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonSignal.PontonSignal_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonSignal_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonSignal.PontonSignal_C.InteractionActivate");

	APontonSignal_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonSignal.PontonSignal_C.OverrideSendSignal
// (BlueprintCallable, BlueprintEvent)

void APontonSignal_C::OverrideSendSignal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonSignal.PontonSignal_C.OverrideSendSignal");

	APontonSignal_C_OverrideSendSignal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonSignal.PontonSignal_C.ExecuteUbergraph_PontonSignal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonSignal_C::ExecuteUbergraph_PontonSignal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonSignal.PontonSignal_C.ExecuteUbergraph_PontonSignal");

	APontonSignal_C_ExecuteUbergraph_PontonSignal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonSignal.PontonSignal_C.SignalSent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APontonSignal_C::SignalSent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonSignal.PontonSignal_C.SignalSent__DelegateSignature");

	APontonSignal_C_SignalSent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
