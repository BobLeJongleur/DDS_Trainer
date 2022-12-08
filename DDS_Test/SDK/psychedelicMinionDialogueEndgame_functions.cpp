
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

// Function psychedelicMinionDialogueEndgame.psychedelicMinionDialogueEndgame_C.checkPlayerForDocuments
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           hasDocuments                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ApsychedelicMinionDialogueEndgame_C::checkPlayerForDocuments(bool* hasDocuments)
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicMinionDialogueEndgame.psychedelicMinionDialogueEndgame_C.checkPlayerForDocuments");

	ApsychedelicMinionDialogueEndgame_C_checkPlayerForDocuments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasDocuments != nullptr)
		*hasDocuments = params.hasDocuments;
}


// Function psychedelicMinionDialogueEndgame.psychedelicMinionDialogueEndgame_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApsychedelicMinionDialogueEndgame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicMinionDialogueEndgame.psychedelicMinionDialogueEndgame_C.UserConstructionScript");

	ApsychedelicMinionDialogueEndgame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicMinionDialogueEndgame.psychedelicMinionDialogueEndgame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApsychedelicMinionDialogueEndgame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicMinionDialogueEndgame.psychedelicMinionDialogueEndgame_C.ReceiveBeginPlay");

	ApsychedelicMinionDialogueEndgame_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicMinionDialogueEndgame.psychedelicMinionDialogueEndgame_C.DialogueActivated
// (BlueprintCallable, BlueprintEvent)

void ApsychedelicMinionDialogueEndgame_C::DialogueActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicMinionDialogueEndgame.psychedelicMinionDialogueEndgame_C.DialogueActivated");

	ApsychedelicMinionDialogueEndgame_C_DialogueActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicMinionDialogueEndgame.psychedelicMinionDialogueEndgame_C.ExecuteUbergraph_psychedelicMinionDialogueEndgame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApsychedelicMinionDialogueEndgame_C::ExecuteUbergraph_psychedelicMinionDialogueEndgame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicMinionDialogueEndgame.psychedelicMinionDialogueEndgame_C.ExecuteUbergraph_psychedelicMinionDialogueEndgame");

	ApsychedelicMinionDialogueEndgame_C_ExecuteUbergraph_psychedelicMinionDialogueEndgame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicMinionDialogueEndgame.psychedelicMinionDialogueEndgame_C.DialogueOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ApsychedelicMinionDialogueEndgame_C::DialogueOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicMinionDialogueEndgame.psychedelicMinionDialogueEndgame_C.DialogueOpened__DelegateSignature");

	ApsychedelicMinionDialogueEndgame_C_DialogueOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
