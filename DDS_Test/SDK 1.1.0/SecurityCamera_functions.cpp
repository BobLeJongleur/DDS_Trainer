
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

// Function SecurityCamera.SecurityCamera_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASecurityCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.UserConstructionScript");

	ASecurityCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.Reactivate
// (BlueprintCallable, BlueprintEvent)

void ASecurityCamera_C::Reactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.Reactivate");

	ASecurityCamera_C_Reactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASecurityCamera_C::BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ASecurityCamera_C_BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function SecurityCamera.SecurityCamera_C.BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASecurityCamera_C::BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ASecurityCamera_C_BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.TriggerAlarm
// (BlueprintCallable, BlueprintEvent)

void ASecurityCamera_C::TriggerAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.TriggerAlarm");

	ASecurityCamera_C_TriggerAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.StopAlarm
// (BlueprintCallable, BlueprintEvent)

void ASecurityCamera_C::StopAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.StopAlarm");

	ASecurityCamera_C_StopAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.PowerChanged
// (BlueprintCallable, BlueprintEvent)

void ASecurityCamera_C::PowerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.PowerChanged");

	ASecurityCamera_C_PowerChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.RestorePower
// (BlueprintCallable, BlueprintEvent)

void ASecurityCamera_C::RestorePower()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.RestorePower");

	ASecurityCamera_C_RestorePower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.RetryLineTrace
// (BlueprintCallable, BlueprintEvent)

void ASecurityCamera_C::RetryLineTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.RetryLineTrace");

	ASecurityCamera_C_RetryLineTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.SetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewActivity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASecurityCamera_C::SetActivity(bool NewActivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.SetActivity");

	ASecurityCamera_C_SetActivity_Params params;
	params.NewActivity = NewActivity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASecurityCamera_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.ReceiveTick");

	ASecurityCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASecurityCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.ReceiveBeginPlay");

	ASecurityCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.LongRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASecurityCamera_C::LongRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.LongRadiusChanged");

	ASecurityCamera_C_LongRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.ShortRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASecurityCamera_C::ShortRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.ShortRadiusChanged");

	ASecurityCamera_C_ShortRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecurityCamera.SecurityCamera_C.ExecuteUbergraph_SecurityCamera
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASecurityCamera_C::ExecuteUbergraph_SecurityCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecurityCamera.SecurityCamera_C.ExecuteUbergraph_SecurityCamera");

	ASecurityCamera_C_ExecuteUbergraph_SecurityCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
