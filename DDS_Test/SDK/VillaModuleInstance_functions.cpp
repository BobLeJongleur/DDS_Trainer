
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

// Function VillaModuleInstance.VillaModuleInstance_C.MeshRemoval
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ModuleBuit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaModuleInstance_C::MeshRemoval(bool ModuleBuit)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleInstance.VillaModuleInstance_C.MeshRemoval");

	AVillaModuleInstance_C_MeshRemoval_Params params;
	params.ModuleBuit = ModuleBuit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaModuleInstance.VillaModuleInstance_C.RespawnPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVillaModuleInstance_C::RespawnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleInstance.VillaModuleInstance_C.RespawnPlayer");

	AVillaModuleInstance_C_RespawnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaModuleInstance.VillaModuleInstance_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVillaModuleInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleInstance.VillaModuleInstance_C.UserConstructionScript");

	AVillaModuleInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaModuleInstance.VillaModuleInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVillaModuleInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleInstance.VillaModuleInstance_C.ReceiveBeginPlay");

	AVillaModuleInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaModuleInstance.VillaModuleInstance_C.StageUpdated
// (BlueprintCallable, BlueprintEvent)

void AVillaModuleInstance_C::StageUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleInstance.VillaModuleInstance_C.StageUpdated");

	AVillaModuleInstance_C_StageUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaModuleInstance.VillaModuleInstance_C.UpdateActorStage
// (BlueprintCallable, BlueprintEvent)

void AVillaModuleInstance_C::UpdateActorStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleInstance.VillaModuleInstance_C.UpdateActorStage");

	AVillaModuleInstance_C_UpdateActorStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaModuleInstance.VillaModuleInstance_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaModuleInstance_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleInstance.VillaModuleInstance_C.InteractionActivate");

	AVillaModuleInstance_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaModuleInstance.VillaModuleInstance_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVillaModuleInstance_C::BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleInstance.VillaModuleInstance_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AVillaModuleInstance_C_BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function VillaModuleInstance.VillaModuleInstance_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaModuleInstance_C::BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleInstance.VillaModuleInstance_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AVillaModuleInstance_C_BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaModuleInstance.VillaModuleInstance_C.InstalModule
// (BlueprintCallable, BlueprintEvent)

void AVillaModuleInstance_C::InstalModule()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleInstance.VillaModuleInstance_C.InstalModule");

	AVillaModuleInstance_C_InstalModule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaModuleInstance.VillaModuleInstance_C.ExecuteUbergraph_VillaModuleInstance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaModuleInstance_C::ExecuteUbergraph_VillaModuleInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleInstance.VillaModuleInstance_C.ExecuteUbergraph_VillaModuleInstance");

	AVillaModuleInstance_C_ExecuteUbergraph_VillaModuleInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
