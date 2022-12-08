
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

// Function psychedelicDoorDialogue.psychedelicDoorDialogue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApsychedelicDoorDialogue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicDoorDialogue.psychedelicDoorDialogue_C.UserConstructionScript");

	ApsychedelicDoorDialogue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicDoorDialogue.psychedelicDoorDialogue_C.unlockGangDoor
// (BlueprintCallable, BlueprintEvent)

void ApsychedelicDoorDialogue_C::unlockGangDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicDoorDialogue.psychedelicDoorDialogue_C.unlockGangDoor");

	ApsychedelicDoorDialogue_C_unlockGangDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicDoorDialogue.psychedelicDoorDialogue_C.ExecuteUbergraph_psychedelicDoorDialogue
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApsychedelicDoorDialogue_C::ExecuteUbergraph_psychedelicDoorDialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicDoorDialogue.psychedelicDoorDialogue_C.ExecuteUbergraph_psychedelicDoorDialogue");

	ApsychedelicDoorDialogue_C_ExecuteUbergraph_psychedelicDoorDialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
