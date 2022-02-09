
#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function weedDialogueFirstDone.weedDialogueFirstDone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AweedDialogueFirstDone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedDialogueFirstDone.weedDialogueFirstDone_C.UserConstructionScript");

	AweedDialogueFirstDone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedDialogueFirstDone.weedDialogueFirstDone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AweedDialogueFirstDone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedDialogueFirstDone.weedDialogueFirstDone_C.ReceiveBeginPlay");

	AweedDialogueFirstDone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedDialogueFirstDone.weedDialogueFirstDone_C.retryDialSet
// (BlueprintCallable, BlueprintEvent)

void AweedDialogueFirstDone_C::retryDialSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedDialogueFirstDone.weedDialogueFirstDone_C.retryDialSet");

	AweedDialogueFirstDone_C_retryDialSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedDialogueFirstDone.weedDialogueFirstDone_C.ExecuteUbergraph_weedDialogueFirstDone
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AweedDialogueFirstDone_C::ExecuteUbergraph_weedDialogueFirstDone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedDialogueFirstDone.weedDialogueFirstDone_C.ExecuteUbergraph_weedDialogueFirstDone");

	AweedDialogueFirstDone_C_ExecuteUbergraph_weedDialogueFirstDone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
