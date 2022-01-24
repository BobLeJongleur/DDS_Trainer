
#include "pch.h"

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.parseInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            quantityFound                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ApsychedelicWeedDialogue_C::parseInventory(int* quantityFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.parseInventory");

	ApsychedelicWeedDialogue_C_parseInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (quantityFound != nullptr)
		*quantityFound = params.quantityFound;
}


// Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApsychedelicWeedDialogue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.UserConstructionScript");

	ApsychedelicWeedDialogue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApsychedelicWeedDialogue_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.ReceiveBeginPlay");

	ApsychedelicWeedDialogue_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.firstDialogueDone
// (BlueprintCallable, BlueprintEvent)

void ApsychedelicWeedDialogue_C::firstDialogueDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.firstDialogueDone");

	ApsychedelicWeedDialogue_C_firstDialogueDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.resetDialogueLines
// (BlueprintCallable, BlueprintEvent)

void ApsychedelicWeedDialogue_C::resetDialogueLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.resetDialogueLines");

	ApsychedelicWeedDialogue_C_resetDialogueLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.ExecuteUbergraph_psychedelicWeedDialogue
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApsychedelicWeedDialogue_C::ExecuteUbergraph_psychedelicWeedDialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.ExecuteUbergraph_psychedelicWeedDialogue");

	ApsychedelicWeedDialogue_C_ExecuteUbergraph_psychedelicWeedDialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
