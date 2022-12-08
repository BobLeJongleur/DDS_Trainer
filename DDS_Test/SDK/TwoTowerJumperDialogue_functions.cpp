
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

// Function TwoTowerJumperDialogue.TwoTowerJumperDialogue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATwoTowerJumperDialogue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoTowerJumperDialogue.TwoTowerJumperDialogue_C.UserConstructionScript");

	ATwoTowerJumperDialogue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwoTowerJumperDialogue.TwoTowerJumperDialogue_C.CementQuest
// (BlueprintCallable, BlueprintEvent)

void ATwoTowerJumperDialogue_C::CementQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoTowerJumperDialogue.TwoTowerJumperDialogue_C.CementQuest");

	ATwoTowerJumperDialogue_C_CementQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwoTowerJumperDialogue.TwoTowerJumperDialogue_C.DialogueActivated
// (BlueprintCallable, BlueprintEvent)

void ATwoTowerJumperDialogue_C::DialogueActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoTowerJumperDialogue.TwoTowerJumperDialogue_C.DialogueActivated");

	ATwoTowerJumperDialogue_C_DialogueActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwoTowerJumperDialogue.TwoTowerJumperDialogue_C.GoodsDelivered
// (BlueprintCallable, BlueprintEvent)

void ATwoTowerJumperDialogue_C::GoodsDelivered()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoTowerJumperDialogue.TwoTowerJumperDialogue_C.GoodsDelivered");

	ATwoTowerJumperDialogue_C_GoodsDelivered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwoTowerJumperDialogue.TwoTowerJumperDialogue_C.ExecuteUbergraph_TwoTowerJumperDialogue
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATwoTowerJumperDialogue_C::ExecuteUbergraph_TwoTowerJumperDialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoTowerJumperDialogue.TwoTowerJumperDialogue_C.ExecuteUbergraph_TwoTowerJumperDialogue");

	ATwoTowerJumperDialogue_C_ExecuteUbergraph_TwoTowerJumperDialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwoTowerJumperDialogue.TwoTowerJumperDialogue_C.QuestStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATwoTowerJumperDialogue_C::QuestStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwoTowerJumperDialogue.TwoTowerJumperDialogue_C.QuestStart__DelegateSignature");

	ATwoTowerJumperDialogue_C_QuestStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
