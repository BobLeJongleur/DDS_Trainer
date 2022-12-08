
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

// Function PontonMeetingPerson01.PontonMeetingPerson01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APontonMeetingPerson01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson01.PontonMeetingPerson01_C.UserConstructionScript");

	APontonMeetingPerson01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingPerson01.PontonMeetingPerson01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APontonMeetingPerson01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson01.PontonMeetingPerson01_C.ReceiveBeginPlay");

	APontonMeetingPerson01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingPerson01.PontonMeetingPerson01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonMeetingPerson01_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson01.PontonMeetingPerson01_C.ReceiveTick");

	APontonMeetingPerson01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingPerson01.PontonMeetingPerson01_C.SetTalking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Talking                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonMeetingPerson01_C::SetTalking(const struct FVector& LookAtLocation, bool Talking)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson01.PontonMeetingPerson01_C.SetTalking");

	APontonMeetingPerson01_C_SetTalking_Params params;
	params.LookAtLocation = LookAtLocation;
	params.Talking = Talking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingPerson01.PontonMeetingPerson01_C.TeleportMe
// (BlueprintCallable, BlueprintEvent)

void APontonMeetingPerson01_C::TeleportMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson01.PontonMeetingPerson01_C.TeleportMe");

	APontonMeetingPerson01_C_TeleportMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingPerson01.PontonMeetingPerson01_C.RamaLoadedEvent
// (BlueprintCallable, BlueprintEvent)

void APontonMeetingPerson01_C::RamaLoadedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson01.PontonMeetingPerson01_C.RamaLoadedEvent");

	APontonMeetingPerson01_C_RamaLoadedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingPerson01.PontonMeetingPerson01_C.ExecuteUbergraph_PontonMeetingPerson01
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonMeetingPerson01_C::ExecuteUbergraph_PontonMeetingPerson01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson01.PontonMeetingPerson01_C.ExecuteUbergraph_PontonMeetingPerson01");

	APontonMeetingPerson01_C_ExecuteUbergraph_PontonMeetingPerson01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
