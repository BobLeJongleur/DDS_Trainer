
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

// Function worldEffectLSDBase.worldEffectLSDBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AworldEffectLSDBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldEffectLSDBase.worldEffectLSDBase_C.UserConstructionScript");

	AworldEffectLSDBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldEffectLSDBase.worldEffectLSDBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AworldEffectLSDBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldEffectLSDBase.worldEffectLSDBase_C.ReceiveBeginPlay");

	AworldEffectLSDBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldEffectLSDBase.worldEffectLSDBase_C.beginEffectWork
// (BlueprintCallable, BlueprintEvent)

void AworldEffectLSDBase_C::beginEffectWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldEffectLSDBase.worldEffectLSDBase_C.beginEffectWork");

	AworldEffectLSDBase_C_beginEffectWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldEffectLSDBase.worldEffectLSDBase_C.endEffectWork
// (BlueprintCallable, BlueprintEvent)

void AworldEffectLSDBase_C::endEffectWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldEffectLSDBase.worldEffectLSDBase_C.endEffectWork");

	AworldEffectLSDBase_C_endEffectWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldEffectLSDBase.worldEffectLSDBase_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AworldEffectLSDBase_C::BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldEffectLSDBase.worldEffectLSDBase_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AworldEffectLSDBase_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function worldEffectLSDBase.worldEffectLSDBase_C.BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldEffectLSDBase_C::BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldEffectLSDBase.worldEffectLSDBase_C.BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AworldEffectLSDBase_C_BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldEffectLSDBase.worldEffectLSDBase_C.endEffectReset
// (BlueprintCallable, BlueprintEvent)

void AworldEffectLSDBase_C::endEffectReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldEffectLSDBase.worldEffectLSDBase_C.endEffectReset");

	AworldEffectLSDBase_C_endEffectReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldEffectLSDBase.worldEffectLSDBase_C.ExecuteUbergraph_worldEffectLSDBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldEffectLSDBase_C::ExecuteUbergraph_worldEffectLSDBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldEffectLSDBase.worldEffectLSDBase_C.ExecuteUbergraph_worldEffectLSDBase");

	AworldEffectLSDBase_C_ExecuteUbergraph_worldEffectLSDBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
