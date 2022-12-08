
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

// Function PontonMeetingPerson02.PontonMeetingPerson02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APontonMeetingPerson02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson02.PontonMeetingPerson02_C.UserConstructionScript");

	APontonMeetingPerson02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingPerson02.PontonMeetingPerson02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APontonMeetingPerson02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson02.PontonMeetingPerson02_C.ReceiveBeginPlay");

	APontonMeetingPerson02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingPerson02.PontonMeetingPerson02_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonMeetingPerson02_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson02.PontonMeetingPerson02_C.ReceiveTick");

	APontonMeetingPerson02_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingPerson02.PontonMeetingPerson02_C.SetTalking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Talking                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonMeetingPerson02_C::SetTalking(const struct FVector& LookAtLocation, bool Talking)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson02.PontonMeetingPerson02_C.SetTalking");

	APontonMeetingPerson02_C_SetTalking_Params params;
	params.LookAtLocation = LookAtLocation;
	params.Talking = Talking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingPerson02.PontonMeetingPerson02_C.TeleportMe
// (BlueprintCallable, BlueprintEvent)

void APontonMeetingPerson02_C::TeleportMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson02.PontonMeetingPerson02_C.TeleportMe");

	APontonMeetingPerson02_C_TeleportMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingPerson02.PontonMeetingPerson02_C.RamaLoadedEvent
// (BlueprintCallable, BlueprintEvent)

void APontonMeetingPerson02_C::RamaLoadedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson02.PontonMeetingPerson02_C.RamaLoadedEvent");

	APontonMeetingPerson02_C_RamaLoadedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PontonMeetingPerson02.PontonMeetingPerson02_C.ExecuteUbergraph_PontonMeetingPerson02
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APontonMeetingPerson02_C::ExecuteUbergraph_PontonMeetingPerson02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PontonMeetingPerson02.PontonMeetingPerson02_C.ExecuteUbergraph_PontonMeetingPerson02");

	APontonMeetingPerson02_C_ExecuteUbergraph_PontonMeetingPerson02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
