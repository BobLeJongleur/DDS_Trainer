
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

// Function villaSalesmanDialogue.villaSalesmanDialogue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AvillaSalesmanDialogue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function villaSalesmanDialogue.villaSalesmanDialogue_C.UserConstructionScript");

	AvillaSalesmanDialogue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaSalesmanDialogue.villaSalesmanDialogue_C.OpenOffer
// (BlueprintCallable, BlueprintEvent)

void AvillaSalesmanDialogue_C::OpenOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function villaSalesmanDialogue.villaSalesmanDialogue_C.OpenOffer");

	AvillaSalesmanDialogue_C_OpenOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaSalesmanDialogue.villaSalesmanDialogue_C.DialogueActivated
// (BlueprintCallable, BlueprintEvent)

void AvillaSalesmanDialogue_C::DialogueActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function villaSalesmanDialogue.villaSalesmanDialogue_C.DialogueActivated");

	AvillaSalesmanDialogue_C_DialogueActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaSalesmanDialogue.villaSalesmanDialogue_C.UnlockVillas
// (BlueprintCallable, BlueprintEvent)

void AvillaSalesmanDialogue_C::UnlockVillas()
{
	static auto fn = UObject::FindObject<UFunction>("Function villaSalesmanDialogue.villaSalesmanDialogue_C.UnlockVillas");

	AvillaSalesmanDialogue_C_UnlockVillas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaSalesmanDialogue.villaSalesmanDialogue_C.GiveBombs
// (BlueprintCallable, BlueprintEvent)

void AvillaSalesmanDialogue_C::GiveBombs()
{
	static auto fn = UObject::FindObject<UFunction>("Function villaSalesmanDialogue.villaSalesmanDialogue_C.GiveBombs");

	AvillaSalesmanDialogue_C_GiveBombs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaSalesmanDialogue.villaSalesmanDialogue_C.LabComment
// (BlueprintCallable, BlueprintEvent)

void AvillaSalesmanDialogue_C::LabComment()
{
	static auto fn = UObject::FindObject<UFunction>("Function villaSalesmanDialogue.villaSalesmanDialogue_C.LabComment");

	AvillaSalesmanDialogue_C_LabComment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaSalesmanDialogue.villaSalesmanDialogue_C.ExecuteUbergraph_villaSalesmanDialogue
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AvillaSalesmanDialogue_C::ExecuteUbergraph_villaSalesmanDialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function villaSalesmanDialogue.villaSalesmanDialogue_C.ExecuteUbergraph_villaSalesmanDialogue");

	AvillaSalesmanDialogue_C_ExecuteUbergraph_villaSalesmanDialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaSalesmanDialogue.villaSalesmanDialogue_C.BombsGiven__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AvillaSalesmanDialogue_C::BombsGiven__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function villaSalesmanDialogue.villaSalesmanDialogue_C.BombsGiven__DelegateSignature");

	AvillaSalesmanDialogue_C_BombsGiven__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaSalesmanDialogue.villaSalesmanDialogue_C.DialogueOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AvillaSalesmanDialogue_C::DialogueOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function villaSalesmanDialogue.villaSalesmanDialogue_C.DialogueOpened__DelegateSignature");

	AvillaSalesmanDialogue_C_DialogueOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
