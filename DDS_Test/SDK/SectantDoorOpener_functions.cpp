
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

// Function SectantDoorOpener.SectantDoorOpener_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASectantDoorOpener_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantDoorOpener.SectantDoorOpener_C.UserConstructionScript");

	ASectantDoorOpener_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantDoorOpener.SectantDoorOpener_C.BndEvt__DialogueOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASectantDoorOpener_C::BndEvt__DialogueOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantDoorOpener.SectantDoorOpener_C.BndEvt__DialogueOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ASectantDoorOpener_C_BndEvt__DialogueOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function SectantDoorOpener.SectantDoorOpener_C.RamaLoadedEvent
// (BlueprintCallable, BlueprintEvent)

void ASectantDoorOpener_C::RamaLoadedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantDoorOpener.SectantDoorOpener_C.RamaLoadedEvent");

	ASectantDoorOpener_C_RamaLoadedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantDoorOpener.SectantDoorOpener_C.ExecuteUbergraph_SectantDoorOpener
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectantDoorOpener_C::ExecuteUbergraph_SectantDoorOpener(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantDoorOpener.SectantDoorOpener_C.ExecuteUbergraph_SectantDoorOpener");

	ASectantDoorOpener_C_ExecuteUbergraph_SectantDoorOpener_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
