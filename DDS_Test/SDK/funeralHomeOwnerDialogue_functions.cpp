
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

// Function funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AfuneralHomeOwnerDialogue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C.UserConstructionScript");

	AfuneralHomeOwnerDialogue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C.GraveUnlock
// (BlueprintCallable, BlueprintEvent)

void AfuneralHomeOwnerDialogue_C::GraveUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C.GraveUnlock");

	AfuneralHomeOwnerDialogue_C_GraveUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C.Puzzle
// (BlueprintCallable, BlueprintEvent)

void AfuneralHomeOwnerDialogue_C::Puzzle()
{
	static auto fn = UObject::FindObject<UFunction>("Function funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C.Puzzle");

	AfuneralHomeOwnerDialogue_C_Puzzle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C.DialogueActivated
// (BlueprintCallable, BlueprintEvent)

void AfuneralHomeOwnerDialogue_C::DialogueActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C.DialogueActivated");

	AfuneralHomeOwnerDialogue_C_DialogueActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C.ExecuteUbergraph_funeralHomeOwnerDialogue
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AfuneralHomeOwnerDialogue_C::ExecuteUbergraph_funeralHomeOwnerDialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C.ExecuteUbergraph_funeralHomeOwnerDialogue");

	AfuneralHomeOwnerDialogue_C_ExecuteUbergraph_funeralHomeOwnerDialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C.GravesUnlocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AfuneralHomeOwnerDialogue_C::GravesUnlocked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C.GravesUnlocked__DelegateSignature");

	AfuneralHomeOwnerDialogue_C_GravesUnlocked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
