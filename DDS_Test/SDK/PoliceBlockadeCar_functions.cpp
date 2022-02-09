
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

// Function PoliceBlockadeCar.PoliceBlockadeCar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APoliceBlockadeCar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeCar.PoliceBlockadeCar_C.UserConstructionScript");

	APoliceBlockadeCar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeCar.PoliceBlockadeCar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APoliceBlockadeCar_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeCar.PoliceBlockadeCar_C.ReceiveBeginPlay");

	APoliceBlockadeCar_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeCar.PoliceBlockadeCar_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APoliceBlockadeCar_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeCar.PoliceBlockadeCar_C.ReceiveTick");

	APoliceBlockadeCar_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeCar.PoliceBlockadeCar_C.ExecuteUbergraph_PoliceBlockadeCar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APoliceBlockadeCar_C::ExecuteUbergraph_PoliceBlockadeCar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeCar.PoliceBlockadeCar_C.ExecuteUbergraph_PoliceBlockadeCar");

	APoliceBlockadeCar_C_ExecuteUbergraph_PoliceBlockadeCar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
