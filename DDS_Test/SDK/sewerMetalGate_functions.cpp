
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

// Function sewerMetalGate.sewerMetalGate_C.DoorCanInteract
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanInteract                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   FailReason                     (Parm, OutParm)

void AsewerMetalGate_C::DoorCanInteract(bool* CanInteract, struct FText* FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function sewerMetalGate.sewerMetalGate_C.DoorCanInteract");

	AsewerMetalGate_C_DoorCanInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanInteract != nullptr)
		*CanInteract = params.CanInteract;
	if (FailReason != nullptr)
		*FailReason = params.FailReason;
}


// Function sewerMetalGate.sewerMetalGate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsewerMetalGate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function sewerMetalGate.sewerMetalGate_C.UserConstructionScript");

	AsewerMetalGate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sewerMetalGate.sewerMetalGate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsewerMetalGate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sewerMetalGate.sewerMetalGate_C.ReceiveBeginPlay");

	AsewerMetalGate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sewerMetalGate.sewerMetalGate_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsewerMetalGate_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function sewerMetalGate.sewerMetalGate_C.ReceiveTick");

	AsewerMetalGate_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sewerMetalGate.sewerMetalGate_C.ExecuteUbergraph_sewerMetalGate
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsewerMetalGate_C::ExecuteUbergraph_sewerMetalGate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sewerMetalGate.sewerMetalGate_C.ExecuteUbergraph_sewerMetalGate");

	AsewerMetalGate_C_ExecuteUbergraph_sewerMetalGate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
