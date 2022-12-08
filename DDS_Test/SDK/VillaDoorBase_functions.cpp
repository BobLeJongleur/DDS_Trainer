
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

// Function VillaDoorBase.VillaDoorBase_C.playDoorSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaDoorBase_C::playDoorSound(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.playDoorSound");

	AVillaDoorBase_C_playDoorSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaDoorBase.VillaDoorBase_C.UpdateActionName
// (Public, BlueprintCallable, BlueprintEvent)

void AVillaDoorBase_C::UpdateActionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.UpdateActionName");

	AVillaDoorBase_C_UpdateActionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaDoorBase.VillaDoorBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVillaDoorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.UserConstructionScript");

	AVillaDoorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaDoorBase.VillaDoorBase_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AVillaDoorBase_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.Timeline_0__FinishedFunc");

	AVillaDoorBase_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaDoorBase.VillaDoorBase_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AVillaDoorBase_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.Timeline_0__UpdateFunc");

	AVillaDoorBase_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaDoorBase.VillaDoorBase_C.openDoor
// (BlueprintCallable, BlueprintEvent)

void AVillaDoorBase_C::openDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.openDoor");

	AVillaDoorBase_C_openDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaDoorBase.VillaDoorBase_C.closeDoor
// (BlueprintCallable, BlueprintEvent)

void AVillaDoorBase_C::closeDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.closeDoor");

	AVillaDoorBase_C_closeDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaDoorBase.VillaDoorBase_C.closeSound
// (BlueprintCallable, BlueprintEvent)

void AVillaDoorBase_C::closeSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.closeSound");

	AVillaDoorBase_C_closeSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaDoorBase.VillaDoorBase_C.TryAutoClose
// (BlueprintCallable, BlueprintEvent)

void AVillaDoorBase_C::TryAutoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.TryAutoClose");

	AVillaDoorBase_C_TryAutoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaDoorBase.VillaDoorBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVillaDoorBase_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AVillaDoorBase_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function VillaDoorBase.VillaDoorBase_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaDoorBase_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.InteractionActivate");

	AVillaDoorBase_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaDoorBase.VillaDoorBase_C.SetDoorMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaDoorBase_C::SetDoorMaterial(class UMaterialInstance* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.SetDoorMaterial");

	AVillaDoorBase_C_SetDoorMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaDoorBase.VillaDoorBase_C.ExecuteUbergraph_VillaDoorBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaDoorBase_C::ExecuteUbergraph_VillaDoorBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaDoorBase.VillaDoorBase_C.ExecuteUbergraph_VillaDoorBase");

	AVillaDoorBase_C_ExecuteUbergraph_VillaDoorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
