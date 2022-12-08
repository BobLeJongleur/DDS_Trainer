
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

// Function PontonOfDeath.PontonOfDeath_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APontonOfDeath_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonOfDeath.PontonOfDeath_C.UserConstructionScript");

	APontonOfDeath_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonOfDeath.PontonOfDeath_C.BndEvt__SM_Boat_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APontonOfDeath_C::BndEvt__SM_Boat_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonOfDeath.PontonOfDeath_C.BndEvt__SM_Boat_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APontonOfDeath_C_BndEvt__SM_Boat_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PontonOfDeath.PontonOfDeath_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonOfDeath_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonOfDeath.PontonOfDeath_C.ReceiveTick");

	APontonOfDeath_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonOfDeath.PontonOfDeath_C.DropTheBase
// (BlueprintCallable, BlueprintEvent)

void APontonOfDeath_C::DropTheBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonOfDeath.PontonOfDeath_C.DropTheBase");

	APontonOfDeath_C_DropTheBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonOfDeath.PontonOfDeath_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APontonOfDeath_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonOfDeath.PontonOfDeath_C.ReceiveBeginPlay");

	APontonOfDeath_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonOfDeath.PontonOfDeath_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APontonOfDeath_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonOfDeath.PontonOfDeath_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	APontonOfDeath_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PontonOfDeath.PontonOfDeath_C.tryDespawn
// (BlueprintCallable, BlueprintEvent)

void APontonOfDeath_C::tryDespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonOfDeath.PontonOfDeath_C.tryDespawn");

	APontonOfDeath_C_tryDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonOfDeath.PontonOfDeath_C.ExecuteUbergraph_PontonOfDeath
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonOfDeath_C::ExecuteUbergraph_PontonOfDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonOfDeath.PontonOfDeath_C.ExecuteUbergraph_PontonOfDeath");

	APontonOfDeath_C_ExecuteUbergraph_PontonOfDeath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonOfDeath.PontonOfDeath_C.PontonDropped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APontonOfDeath_C::PontonDropped__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonOfDeath.PontonOfDeath_C.PontonDropped__DelegateSignature");

	APontonOfDeath_C_PontonDropped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
