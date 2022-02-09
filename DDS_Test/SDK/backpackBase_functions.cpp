
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

// Function backpackBase.backpackBase_C.NewRamaVars
// (Public, BlueprintCallable, BlueprintEvent)

void AbackpackBase_C::NewRamaVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.NewRamaVars");

	AbackpackBase_C_NewRamaVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.TransferInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   PlayerInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AbackpackBase_C::TransferInventory(class UInventoryComponent_C* PlayerInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.TransferInventory");

	AbackpackBase_C_TransferInventory_Params params;
	params.PlayerInventory = PlayerInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.ReconstructOldInventory
// (Public, BlueprintCallable, BlueprintEvent)

void AbackpackBase_C::ReconstructOldInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.ReconstructOldInventory");

	AbackpackBase_C_ReconstructOldInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


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
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

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


// Function backpackBase.backpackBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 LevelPackageName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AbackpackBase_C::BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature");

	AbackpackBase_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;
	params.LevelPackageName = LevelPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.DelayedPhysics
// (BlueprintCallable, BlueprintEvent)

void AbackpackBase_C::DelayedPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.DelayedPhysics");

	AbackpackBase_C_DelayedPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.Playerbinding
// (BlueprintCallable, BlueprintEvent)

void AbackpackBase_C::Playerbinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.Playerbinding");

	AbackpackBase_C_Playerbinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.RetryPlayerBind
// (BlueprintCallable, BlueprintEvent)

void AbackpackBase_C::RetryPlayerBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.RetryPlayerBind");

	AbackpackBase_C_RetryPlayerBind_Params params;

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
