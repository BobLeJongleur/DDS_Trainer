
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

// Function psychedelicMinionNPC.psychedelicMinionNPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApsychedelicMinionNPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicMinionNPC.psychedelicMinionNPC_C.UserConstructionScript");

	ApsychedelicMinionNPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicMinionNPC.psychedelicMinionNPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApsychedelicMinionNPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicMinionNPC.psychedelicMinionNPC_C.ReceiveBeginPlay");

	ApsychedelicMinionNPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicMinionNPC.psychedelicMinionNPC_C.checkCanTalk
// (BlueprintCallable, BlueprintEvent)

void ApsychedelicMinionNPC_C::checkCanTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicMinionNPC.psychedelicMinionNPC_C.checkCanTalk");

	ApsychedelicMinionNPC_C_checkCanTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicMinionNPC.psychedelicMinionNPC_C.retryInitiate
// (BlueprintCallable, BlueprintEvent)

void ApsychedelicMinionNPC_C::retryInitiate()
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicMinionNPC.psychedelicMinionNPC_C.retryInitiate");

	ApsychedelicMinionNPC_C_retryInitiate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function psychedelicMinionNPC.psychedelicMinionNPC_C.ExecuteUbergraph_psychedelicMinionNPC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApsychedelicMinionNPC_C::ExecuteUbergraph_psychedelicMinionNPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function psychedelicMinionNPC.psychedelicMinionNPC_C.ExecuteUbergraph_psychedelicMinionNPC");

	ApsychedelicMinionNPC_C_ExecuteUbergraph_psychedelicMinionNPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
