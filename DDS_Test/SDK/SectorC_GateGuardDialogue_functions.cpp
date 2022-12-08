
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

// Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.CheckPlayerPass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Pass                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASectorC_GateGuardDialogue_C::CheckPlayerPass(bool* Pass)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.CheckPlayerPass");

	ASectorC_GateGuardDialogue_C_CheckPlayerPass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pass != nullptr)
		*Pass = params.Pass;
}


// Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASectorC_GateGuardDialogue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.UserConstructionScript");

	ASectorC_GateGuardDialogue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.DialogueLoaded
// (BlueprintCallable, BlueprintEvent)

void ASectorC_GateGuardDialogue_C::DialogueLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.DialogueLoaded");

	ASectorC_GateGuardDialogue_C_DialogueLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.RecheckPlayerPass
// (BlueprintCallable, BlueprintEvent)

void ASectorC_GateGuardDialogue_C::RecheckPlayerPass()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.RecheckPlayerPass");

	ASectorC_GateGuardDialogue_C_RecheckPlayerPass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.tryOpenPass
// (BlueprintCallable, BlueprintEvent)

void ASectorC_GateGuardDialogue_C::tryOpenPass()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.tryOpenPass");

	ASectorC_GateGuardDialogue_C_tryOpenPass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.DialogueActivated
// (BlueprintCallable, BlueprintEvent)

void ASectorC_GateGuardDialogue_C::DialogueActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.DialogueActivated");

	ASectorC_GateGuardDialogue_C_DialogueActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.ExecuteUbergraph_SectorC_GateGuardDialogue
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectorC_GateGuardDialogue_C::ExecuteUbergraph_SectorC_GateGuardDialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.ExecuteUbergraph_SectorC_GateGuardDialogue");

	ASectorC_GateGuardDialogue_C_ExecuteUbergraph_SectorC_GateGuardDialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
