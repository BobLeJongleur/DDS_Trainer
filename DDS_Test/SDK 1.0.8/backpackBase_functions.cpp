
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

// Function backpackBase.backpackBase_C.checkBackpackEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AbackpackBase_C::checkBackpackEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.checkBackpackEmpty");

	AbackpackBase_C_checkBackpackEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AbackpackBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.UserConstructionScript");

	AbackpackBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AbackpackBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.ReceiveBeginPlay");

	AbackpackBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbackpackBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.ReceiveTick");

	AbackpackBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.BndEvt__Model_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AbackpackBase_C::BndEvt__Model_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.BndEvt__Model_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	AbackpackBase_C_BndEvt__Model_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.ExecuteUbergraph_backpackBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbackpackBase_C::ExecuteUbergraph_backpackBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.ExecuteUbergraph_backpackBase");

	AbackpackBase_C_ExecuteUbergraph_backpackBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
