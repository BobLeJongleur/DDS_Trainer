
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

// Function LabCrewNPC_BP.LabCrewNPC_BP_C.SetupDialogue
// (Public, BlueprintCallable, BlueprintEvent)

void ALabCrewNPC_BP_C::SetupDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewNPC_BP.LabCrewNPC_BP_C.SetupDialogue");

	ALabCrewNPC_BP_C_SetupDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewNPC_BP.LabCrewNPC_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALabCrewNPC_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewNPC_BP.LabCrewNPC_BP_C.UserConstructionScript");

	ALabCrewNPC_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewNPC_BP.LabCrewNPC_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALabCrewNPC_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewNPC_BP.LabCrewNPC_BP_C.ReceiveBeginPlay");

	ALabCrewNPC_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewNPC_BP.LabCrewNPC_BP_C.RamaLoadedEvent
// (BlueprintCallable, BlueprintEvent)

void ALabCrewNPC_BP_C::RamaLoadedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewNPC_BP.LabCrewNPC_BP_C.RamaLoadedEvent");

	ALabCrewNPC_BP_C_RamaLoadedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewNPC_BP.LabCrewNPC_BP_C.SetupLabCrew
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClientId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALabCrewNPC_BP_C::SetupLabCrew(int ClientId)
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewNPC_BP.LabCrewNPC_BP_C.SetupLabCrew");

	ALabCrewNPC_BP_C_SetupLabCrew_Params params;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LabCrewNPC_BP.LabCrewNPC_BP_C.ExecuteUbergraph_LabCrewNPC_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALabCrewNPC_BP_C::ExecuteUbergraph_LabCrewNPC_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LabCrewNPC_BP.LabCrewNPC_BP_C.ExecuteUbergraph_LabCrewNPC_BP");

	ALabCrewNPC_BP_C_ExecuteUbergraph_LabCrewNPC_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
