
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

// Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsmugglerShopDialogueInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.UserConstructionScript");

	AsmugglerShopDialogueInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.DialogueLoaded
// (BlueprintCallable, BlueprintEvent)

void AsmugglerShopDialogueInstance_C::DialogueLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.DialogueLoaded");

	AsmugglerShopDialogueInstance_C_DialogueLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.DialogueActivated
// (BlueprintCallable, BlueprintEvent)

void AsmugglerShopDialogueInstance_C::DialogueActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.DialogueActivated");

	AsmugglerShopDialogueInstance_C_DialogueActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.EngageSmuggle
// (BlueprintCallable, BlueprintEvent)

void AsmugglerShopDialogueInstance_C::EngageSmuggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.EngageSmuggle");

	AsmugglerShopDialogueInstance_C_EngageSmuggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.SmugglersTask
// (BlueprintCallable, BlueprintEvent)

void AsmugglerShopDialogueInstance_C::SmugglersTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.SmugglersTask");

	AsmugglerShopDialogueInstance_C_SmugglersTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.ExecuteUbergraph_smugglerShopDialogueInstance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsmugglerShopDialogueInstance_C::ExecuteUbergraph_smugglerShopDialogueInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.ExecuteUbergraph_smugglerShopDialogueInstance");

	AsmugglerShopDialogueInstance_C_ExecuteUbergraph_smugglerShopDialogueInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
