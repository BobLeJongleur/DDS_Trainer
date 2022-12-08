
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

// Function SectantDoorObserveRange.SectantDoorObserveRange_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASectantDoorObserveRange_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantDoorObserveRange.SectantDoorObserveRange_C.UserConstructionScript");

	ASectantDoorObserveRange_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantDoorObserveRange.SectantDoorObserveRange_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectantDoorObserveRange_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantDoorObserveRange.SectantDoorObserveRange_C.ReceiveTick");

	ASectantDoorObserveRange_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantDoorObserveRange.SectantDoorObserveRange_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASectantDoorObserveRange_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantDoorObserveRange.SectantDoorObserveRange_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ASectantDoorObserveRange_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function SectantDoorObserveRange.SectantDoorObserveRange_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectantDoorObserveRange_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantDoorObserveRange.SectantDoorObserveRange_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ASectantDoorObserveRange_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantDoorObserveRange.SectantDoorObserveRange_C.Knocked
// (BlueprintCallable, BlueprintEvent)

void ASectantDoorObserveRange_C::Knocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantDoorObserveRange.SectantDoorObserveRange_C.Knocked");

	ASectantDoorObserveRange_C_Knocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantDoorObserveRange.SectantDoorObserveRange_C.ForceSpawnSectant
// (BlueprintCallable, BlueprintEvent)

void ASectantDoorObserveRange_C::ForceSpawnSectant()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantDoorObserveRange.SectantDoorObserveRange_C.ForceSpawnSectant");

	ASectantDoorObserveRange_C_ForceSpawnSectant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantDoorObserveRange.SectantDoorObserveRange_C.ExecuteUbergraph_SectantDoorObserveRange
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectantDoorObserveRange_C::ExecuteUbergraph_SectantDoorObserveRange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantDoorObserveRange.SectantDoorObserveRange_C.ExecuteUbergraph_SectantDoorObserveRange");

	ASectantDoorObserveRange_C_ExecuteUbergraph_SectantDoorObserveRange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantDoorObserveRange.SectantDoorObserveRange_C.KnockingObserved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASectantDoorObserveRange_C::KnockingObserved__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantDoorObserveRange.SectantDoorObserveRange_C.KnockingObserved__DelegateSignature");

	ASectantDoorObserveRange_C_KnockingObserved__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
