
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

// Function ratDeadDrop.ratDeadDrop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AratDeadDrop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.UserConstructionScript");

	AratDeadDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDeadDrop.ratDeadDrop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AratDeadDrop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.ReceiveBeginPlay");

	AratDeadDrop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDeadDrop.ratDeadDrop_C.envelopeDropped
// (BlueprintCallable, BlueprintEvent)

void AratDeadDrop_C::envelopeDropped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.envelopeDropped");

	AratDeadDrop_C_envelopeDropped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDeadDrop.ratDeadDrop_C.closeEventScript
// (BlueprintCallable, BlueprintEvent)

void AratDeadDrop_C::closeEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.closeEventScript");

	AratDeadDrop_C_closeEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDeadDrop.ratDeadDrop_C.reInitiate
// (BlueprintCallable, BlueprintEvent)

void AratDeadDrop_C::reInitiate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.reInitiate");

	AratDeadDrop_C_reInitiate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDeadDrop.ratDeadDrop_C.testActivationState
// (BlueprintCallable, BlueprintEvent)

void AratDeadDrop_C::testActivationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.testActivationState");

	AratDeadDrop_C_testActivationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDeadDrop.ratDeadDrop_C.ExecuteUbergraph_ratDeadDrop
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AratDeadDrop_C::ExecuteUbergraph_ratDeadDrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.ExecuteUbergraph_ratDeadDrop");

	AratDeadDrop_C_ExecuteUbergraph_ratDeadDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
