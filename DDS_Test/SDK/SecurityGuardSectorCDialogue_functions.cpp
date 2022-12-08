
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

// Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASecurityGuardSectorCDialogue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.UserConstructionScript");

	ASecurityGuardSectorCDialogue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.DialogueLoaded
// (BlueprintCallable, BlueprintEvent)

void ASecurityGuardSectorCDialogue_C::DialogueLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.DialogueLoaded");

	ASecurityGuardSectorCDialogue_C_DialogueLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.tryHandleKey
// (BlueprintCallable, BlueprintEvent)

void ASecurityGuardSectorCDialogue_C::tryHandleKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.tryHandleKey");

	ASecurityGuardSectorCDialogue_C_tryHandleKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.ExecuteUbergraph_SecurityGuardSectorCDialogue
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASecurityGuardSectorCDialogue_C::ExecuteUbergraph_SecurityGuardSectorCDialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.ExecuteUbergraph_SecurityGuardSectorCDialogue");

	ASecurityGuardSectorCDialogue_C_ExecuteUbergraph_SecurityGuardSectorCDialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
