
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

// Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkPlayerForFlashdrive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           hasFlashDrive                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ApoliceArchiveComputerBP_C::checkPlayerForFlashdrive(bool* hasFlashDrive)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkPlayerForFlashdrive");

	ApoliceArchiveComputerBP_C_checkPlayerForFlashdrive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasFlashDrive != nullptr)
		*hasFlashDrive = params.hasFlashDrive;
}


// Function policeArchiveComputerBP.policeArchiveComputerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApoliceArchiveComputerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.UserConstructionScript");

	ApoliceArchiveComputerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeArchiveComputerBP.policeArchiveComputerBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApoliceArchiveComputerBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.ReceiveBeginPlay");

	ApoliceArchiveComputerBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeArchiveComputerBP.policeArchiveComputerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceArchiveComputerBP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.ReceiveTick");

	ApoliceArchiveComputerBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeArchiveComputerBP.policeArchiveComputerBP_C.KeyDown
// (BlueprintCallable, BlueprintEvent)

void ApoliceArchiveComputerBP_C::KeyDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.KeyDown");

	ApoliceArchiveComputerBP_C_KeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeArchiveComputerBP.policeArchiveComputerBP_C.KeyRelease
// (BlueprintCallable, BlueprintEvent)

void ApoliceArchiveComputerBP_C::KeyRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.KeyRelease");

	ApoliceArchiveComputerBP_C_KeyRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkStillFocus
// (BlueprintCallable, BlueprintEvent)

void ApoliceArchiveComputerBP_C::checkStillFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkStillFocus");

	ApoliceArchiveComputerBP_C_checkStillFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkPen
// (BlueprintCallable, BlueprintEvent)

void ApoliceArchiveComputerBP_C::checkPen()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkPen");

	ApoliceArchiveComputerBP_C_checkPen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeArchiveComputerBP.policeArchiveComputerBP_C.ExecuteUbergraph_policeArchiveComputerBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceArchiveComputerBP_C::ExecuteUbergraph_policeArchiveComputerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.ExecuteUbergraph_policeArchiveComputerBP");

	ApoliceArchiveComputerBP_C_ExecuteUbergraph_policeArchiveComputerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
