
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

// Function PontonMeetingController.PontonMeetingController_C.CheckCanSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APontonMeetingController_C::CheckCanSpawn(bool* CanSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingController.PontonMeetingController_C.CheckCanSpawn");

	APontonMeetingController_C_CheckCanSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSpawn != nullptr)
		*CanSpawn = params.CanSpawn;
}


// Function PontonMeetingController.PontonMeetingController_C.SwitchTalk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Talk                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonMeetingController_C::SwitchTalk(bool Talk)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingController.PontonMeetingController_C.SwitchTalk");

	APontonMeetingController_C_SwitchTalk_Params params;
	params.Talk = Talk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingController.PontonMeetingController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APontonMeetingController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingController.PontonMeetingController_C.UserConstructionScript");

	APontonMeetingController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingController.PontonMeetingController_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonMeetingController_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingController.PontonMeetingController_C.ReceiveActorEndOverlap");

	APontonMeetingController_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingController.PontonMeetingController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APontonMeetingController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingController.PontonMeetingController_C.ReceiveBeginPlay");

	APontonMeetingController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingController.PontonMeetingController_C.TrySpawnMeeters
// (BlueprintCallable, BlueprintEvent)

void APontonMeetingController_C::TrySpawnMeeters()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingController.PontonMeetingController_C.TrySpawnMeeters");

	APontonMeetingController_C_TrySpawnMeeters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingController.PontonMeetingController_C.ConfirmOneArrived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AbaseNPC_C*              Meeter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonMeetingController_C::ConfirmOneArrived(class AbaseNPC_C* Meeter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingController.PontonMeetingController_C.ConfirmOneArrived");

	APontonMeetingController_C_ConfirmOneArrived_Params params;
	params.Meeter = Meeter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingController.PontonMeetingController_C.BndEvt__breakDistance_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APontonMeetingController_C::BndEvt__breakDistance_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingController.PontonMeetingController_C.BndEvt__breakDistance_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APontonMeetingController_C_BndEvt__breakDistance_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PontonMeetingController.PontonMeetingController_C.TestCanTalk
// (BlueprintCallable, BlueprintEvent)

void APontonMeetingController_C::TestCanTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingController.PontonMeetingController_C.TestCanTalk");

	APontonMeetingController_C_TestCanTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingController.PontonMeetingController_C.KillMeeters
// (BlueprintCallable, BlueprintEvent)

void APontonMeetingController_C::KillMeeters()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingController.PontonMeetingController_C.KillMeeters");

	APontonMeetingController_C_KillMeeters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingController.PontonMeetingController_C.ExecuteUbergraph_PontonMeetingController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonMeetingController_C::ExecuteUbergraph_PontonMeetingController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingController.PontonMeetingController_C.ExecuteUbergraph_PontonMeetingController");

	APontonMeetingController_C_ExecuteUbergraph_PontonMeetingController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
