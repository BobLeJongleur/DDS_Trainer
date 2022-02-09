
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

// Function flashDriveSpawn.flashDriveSpawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AflashDriveSpawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function flashDriveSpawn.flashDriveSpawn_C.UserConstructionScript");

	AflashDriveSpawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function flashDriveSpawn.flashDriveSpawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AflashDriveSpawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function flashDriveSpawn.flashDriveSpawn_C.ReceiveBeginPlay");

	AflashDriveSpawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function flashDriveSpawn.flashDriveSpawn_C.spawnFlashDrive
// (BlueprintCallable, BlueprintEvent)

void AflashDriveSpawn_C::spawnFlashDrive()
{
	static auto fn = UObject::FindObject<UFunction>("Function flashDriveSpawn.flashDriveSpawn_C.spawnFlashDrive");

	AflashDriveSpawn_C_spawnFlashDrive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function flashDriveSpawn.flashDriveSpawn_C.enableFlashPickup
// (BlueprintCallable, BlueprintEvent)

void AflashDriveSpawn_C::enableFlashPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function flashDriveSpawn.flashDriveSpawn_C.enableFlashPickup");

	AflashDriveSpawn_C_enableFlashPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function flashDriveSpawn.flashDriveSpawn_C.ExecuteUbergraph_flashDriveSpawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AflashDriveSpawn_C::ExecuteUbergraph_flashDriveSpawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function flashDriveSpawn.flashDriveSpawn_C.ExecuteUbergraph_flashDriveSpawn");

	AflashDriveSpawn_C_ExecuteUbergraph_flashDriveSpawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
