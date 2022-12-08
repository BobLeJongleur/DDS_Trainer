
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

// Function VillaRoomInstance.VillaRoomInstance_C.ToggleLights
// (Public, BlueprintCallable, BlueprintEvent)

void AVillaRoomInstance_C::ToggleLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRoomInstance.VillaRoomInstance_C.ToggleLights");

	AVillaRoomInstance_C_ToggleLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRoomInstance.VillaRoomInstance_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVillaRoomInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRoomInstance.VillaRoomInstance_C.UserConstructionScript");

	AVillaRoomInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRoomInstance.VillaRoomInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVillaRoomInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRoomInstance.VillaRoomInstance_C.ReceiveBeginPlay");

	AVillaRoomInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRoomInstance.VillaRoomInstance_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaRoomInstance_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRoomInstance.VillaRoomInstance_C.ReceiveActorBeginOverlap");

	AVillaRoomInstance_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRoomInstance.VillaRoomInstance_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaRoomInstance_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRoomInstance.VillaRoomInstance_C.ReceiveActorEndOverlap");

	AVillaRoomInstance_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRoomInstance.VillaRoomInstance_C.OverlapEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaRoomInstance_C::OverlapEnter(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRoomInstance.VillaRoomInstance_C.OverlapEnter");

	AVillaRoomInstance_C_OverlapEnter_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRoomInstance.VillaRoomInstance_C.OverlapLeave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaRoomInstance_C::OverlapLeave(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRoomInstance.VillaRoomInstance_C.OverlapLeave");

	AVillaRoomInstance_C_OverlapLeave_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRoomInstance.VillaRoomInstance_C.LightChangedMaster
// (BlueprintCallable, BlueprintEvent)

void AVillaRoomInstance_C::LightChangedMaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRoomInstance.VillaRoomInstance_C.LightChangedMaster");

	AVillaRoomInstance_C_LightChangedMaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRoomInstance.VillaRoomInstance_C.ExecuteUbergraph_VillaRoomInstance
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaRoomInstance_C::ExecuteUbergraph_VillaRoomInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRoomInstance.VillaRoomInstance_C.ExecuteUbergraph_VillaRoomInstance");

	AVillaRoomInstance_C_ExecuteUbergraph_VillaRoomInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRoomInstance.VillaRoomInstance_C.MasterLightsChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AVillaRoomInstance_C::MasterLightsChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRoomInstance.VillaRoomInstance_C.MasterLightsChange__DelegateSignature");

	AVillaRoomInstance_C_MasterLightsChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
