
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

// Function wallCheckpoint.wallCheckpoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AwallCheckpoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallCheckpoint.wallCheckpoint_C.UserConstructionScript");

	AwallCheckpoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallCheckpoint.wallCheckpoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AwallCheckpoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallCheckpoint.wallCheckpoint_C.ReceiveBeginPlay");

	AwallCheckpoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallCheckpoint.wallCheckpoint_C.openCheckpoint
// (BlueprintCallable, BlueprintEvent)

void AwallCheckpoint_C::openCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallCheckpoint.wallCheckpoint_C.openCheckpoint");

	AwallCheckpoint_C_openCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallCheckpoint.wallCheckpoint_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AwallCheckpoint_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function wallCheckpoint.wallCheckpoint_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AwallCheckpoint_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function wallCheckpoint.wallCheckpoint_C.BndEvt__throwCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AwallCheckpoint_C::BndEvt__throwCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function wallCheckpoint.wallCheckpoint_C.BndEvt__throwCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AwallCheckpoint_C_BndEvt__throwCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function wallCheckpoint.wallCheckpoint_C.tryDestroyBackpack
// (BlueprintCallable, BlueprintEvent)

void AwallCheckpoint_C::tryDestroyBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallCheckpoint.wallCheckpoint_C.tryDestroyBackpack");

	AwallCheckpoint_C_tryDestroyBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallCheckpoint.wallCheckpoint_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_2_RamaSaveFullyLoadedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 LevelPackageName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AwallCheckpoint_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_2_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function wallCheckpoint.wallCheckpoint_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_2_RamaSaveFullyLoadedSignature__DelegateSignature");

	AwallCheckpoint_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_2_RamaSaveFullyLoadedSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;
	params.LevelPackageName = LevelPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallCheckpoint.wallCheckpoint_C.ExecuteUbergraph_wallCheckpoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AwallCheckpoint_C::ExecuteUbergraph_wallCheckpoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wallCheckpoint.wallCheckpoint_C.ExecuteUbergraph_wallCheckpoint");

	AwallCheckpoint_C_ExecuteUbergraph_wallCheckpoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
