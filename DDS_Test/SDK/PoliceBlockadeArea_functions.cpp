
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

// Function PoliceBlockadeArea.PoliceBlockadeArea_C.ClearBlockade
// (Public, BlueprintCallable, BlueprintEvent)

void APoliceBlockadeArea_C::ClearBlockade()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.ClearBlockade");

	APoliceBlockadeArea_C_ClearBlockade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.SpawnBlockade
// (Public, BlueprintCallable, BlueprintEvent)

void APoliceBlockadeArea_C::SpawnBlockade()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.SpawnBlockade");

	APoliceBlockadeArea_C_SpawnBlockade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.CanDespawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APoliceBlockadeArea_C::CanDespawn(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.CanDespawn");

	APoliceBlockadeArea_C_CanDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.CanSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APoliceBlockadeArea_C::CanSpawn(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.CanSpawn");

	APoliceBlockadeArea_C_CanSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.RegisterPlayerPass
// (Public, BlueprintCallable, BlueprintEvent)

void APoliceBlockadeArea_C::RegisterPlayerPass()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.RegisterPlayerPass");

	APoliceBlockadeArea_C_RegisterPlayerPass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APoliceBlockadeArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.UserConstructionScript");

	APoliceBlockadeArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APoliceBlockadeArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.ReceiveBeginPlay");

	APoliceBlockadeArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APoliceBlockadeArea_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.ReceiveTick");

	APoliceBlockadeArea_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APoliceBlockadeArea_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APoliceBlockadeArea_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.TrySpawnBlockade
// (BlueprintCallable, BlueprintEvent)

void APoliceBlockadeArea_C::TrySpawnBlockade()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.TrySpawnBlockade");

	APoliceBlockadeArea_C_TrySpawnBlockade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.TryDespawnBlockade
// (BlueprintCallable, BlueprintEvent)

void APoliceBlockadeArea_C::TryDespawnBlockade()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.TryDespawnBlockade");

	APoliceBlockadeArea_C_TryDespawnBlockade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.ForceSpawn
// (BlueprintCallable, BlueprintEvent)

void APoliceBlockadeArea_C::ForceSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.ForceSpawn");

	APoliceBlockadeArea_C_ForceSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.ForceClear
// (BlueprintCallable, BlueprintEvent)

void APoliceBlockadeArea_C::ForceClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.ForceClear");

	APoliceBlockadeArea_C_ForceClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoliceBlockadeArea.PoliceBlockadeArea_C.ExecuteUbergraph_PoliceBlockadeArea
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APoliceBlockadeArea_C::ExecuteUbergraph_PoliceBlockadeArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.ExecuteUbergraph_PoliceBlockadeArea");

	APoliceBlockadeArea_C_ExecuteUbergraph_PoliceBlockadeArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
