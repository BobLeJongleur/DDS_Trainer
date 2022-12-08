
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

// Function EndgamePhoneBP.EndgamePhoneBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEndgamePhoneBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndgamePhoneBP.EndgamePhoneBP_C.UserConstructionScript");

	AEndgamePhoneBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndgamePhoneBP.EndgamePhoneBP_C.ActivatePhone
// (BlueprintCallable, BlueprintEvent)

void AEndgamePhoneBP_C::ActivatePhone()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndgamePhoneBP.EndgamePhoneBP_C.ActivatePhone");

	AEndgamePhoneBP_C_ActivatePhone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndgamePhoneBP.EndgamePhoneBP_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEndgamePhoneBP_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndgamePhoneBP.EndgamePhoneBP_C.InteractionActivate");

	AEndgamePhoneBP_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndgamePhoneBP.EndgamePhoneBP_C.StartRinging
// (BlueprintCallable, BlueprintEvent)

void AEndgamePhoneBP_C::StartRinging()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndgamePhoneBP.EndgamePhoneBP_C.StartRinging");

	AEndgamePhoneBP_C_StartRinging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndgamePhoneBP.EndgamePhoneBP_C.ringTone
// (BlueprintCallable, BlueprintEvent)

void AEndgamePhoneBP_C::ringTone()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndgamePhoneBP.EndgamePhoneBP_C.ringTone");

	AEndgamePhoneBP_C_ringTone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndgamePhoneBP.EndgamePhoneBP_C.FinalCallEnded
// (BlueprintCallable, BlueprintEvent)

void AEndgamePhoneBP_C::FinalCallEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndgamePhoneBP.EndgamePhoneBP_C.FinalCallEnded");

	AEndgamePhoneBP_C_FinalCallEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndgamePhoneBP.EndgamePhoneBP_C.OverridePhone
// (BlueprintCallable, BlueprintEvent)

void AEndgamePhoneBP_C::OverridePhone()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndgamePhoneBP.EndgamePhoneBP_C.OverridePhone");

	AEndgamePhoneBP_C_OverridePhone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndgamePhoneBP.EndgamePhoneBP_C.ForceEnding
// (BlueprintCallable, BlueprintEvent)

void AEndgamePhoneBP_C::ForceEnding()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndgamePhoneBP.EndgamePhoneBP_C.ForceEnding");

	AEndgamePhoneBP_C_ForceEnding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndgamePhoneBP.EndgamePhoneBP_C.ExecuteUbergraph_EndgamePhoneBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEndgamePhoneBP_C::ExecuteUbergraph_EndgamePhoneBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndgamePhoneBP.EndgamePhoneBP_C.ExecuteUbergraph_EndgamePhoneBP");

	AEndgamePhoneBP_C_ExecuteUbergraph_EndgamePhoneBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndgamePhoneBP.EndgamePhoneBP_C.EddieStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AEndgamePhoneBP_C::EddieStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndgamePhoneBP.EndgamePhoneBP_C.EddieStart__DelegateSignature");

	AEndgamePhoneBP_C_EddieStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndgamePhoneBP.EndgamePhoneBP_C.EddieEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AEndgamePhoneBP_C::EddieEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndgamePhoneBP.EndgamePhoneBP_C.EddieEnd__DelegateSignature");

	AEndgamePhoneBP_C_EddieEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndgamePhoneBP.EndgamePhoneBP_C.PlayerCalled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AEndgamePhoneBP_C::PlayerCalled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndgamePhoneBP.EndgamePhoneBP_C.PlayerCalled__DelegateSignature");

	AEndgamePhoneBP_C_PlayerCalled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
