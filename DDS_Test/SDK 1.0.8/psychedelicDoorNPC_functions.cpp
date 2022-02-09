
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

// Function psychedelicDoorNPC.psychedelicDoorNPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApsychedelicDoorNPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicDoorNPC.psychedelicDoorNPC_C.UserConstructionScript");

	ApsychedelicDoorNPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicDoorNPC.psychedelicDoorNPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApsychedelicDoorNPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicDoorNPC.psychedelicDoorNPC_C.ReceiveBeginPlay");

	ApsychedelicDoorNPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicDoorNPC.psychedelicDoorNPC_C.checkDoorOpen
// (BlueprintCallable, BlueprintEvent)

void ApsychedelicDoorNPC_C::checkDoorOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicDoorNPC.psychedelicDoorNPC_C.checkDoorOpen");

	ApsychedelicDoorNPC_C_checkDoorOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicDoorNPC.psychedelicDoorNPC_C.ExecuteUbergraph_psychedelicDoorNPC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApsychedelicDoorNPC_C::ExecuteUbergraph_psychedelicDoorNPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicDoorNPC.psychedelicDoorNPC_C.ExecuteUbergraph_psychedelicDoorNPC");

	ApsychedelicDoorNPC_C_ExecuteUbergraph_psychedelicDoorNPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
