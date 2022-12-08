
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

// Function InteractiveTrashBin.InteractiveTrashBin_C.PurgeTrashBin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AInteractiveTrashBin_C::PurgeTrashBin()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.PurgeTrashBin");

	AInteractiveTrashBin_C_PurgeTrashBin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveTrashBin.InteractiveTrashBin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AInteractiveTrashBin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.UserConstructionScript");

	AInteractiveTrashBin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveTrashBin.InteractiveTrashBin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AInteractiveTrashBin_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.ReceiveBeginPlay");

	AInteractiveTrashBin_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveTrashBin.InteractiveTrashBin_C.RamaLoaded
// (BlueprintCallable, BlueprintEvent)

void AInteractiveTrashBin_C::RamaLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.RamaLoaded");

	AInteractiveTrashBin_C_RamaLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveTrashBin.InteractiveTrashBin_C.BinPurge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TotalPurge                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInteractiveTrashBin_C::BinPurge(bool TotalPurge)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.BinPurge");

	AInteractiveTrashBin_C_BinPurge_Params params;
	params.TotalPurge = TotalPurge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveTrashBin.InteractiveTrashBin_C.RetryPurge
// (BlueprintCallable, BlueprintEvent)

void AInteractiveTrashBin_C::RetryPurge()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.RetryPurge");

	AInteractiveTrashBin_C_RetryPurge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveTrashBin.InteractiveTrashBin_C.ExecuteUbergraph_InteractiveTrashBin
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInteractiveTrashBin_C::ExecuteUbergraph_InteractiveTrashBin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.ExecuteUbergraph_InteractiveTrashBin");

	AInteractiveTrashBin_C_ExecuteUbergraph_InteractiveTrashBin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
