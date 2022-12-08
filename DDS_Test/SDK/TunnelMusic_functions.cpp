
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

// Function TunnelMusic.TunnelMusic_C.PickRandomSound
// (Public, BlueprintCallable, BlueprintEvent)

void ATunnelMusic_C::PickRandomSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.PickRandomSound");

	ATunnelMusic_C_PickRandomSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TunnelMusic.TunnelMusic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATunnelMusic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.UserConstructionScript");

	ATunnelMusic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TunnelMusic.TunnelMusic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATunnelMusic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.ReceiveBeginPlay");

	ATunnelMusic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TunnelMusic.TunnelMusic_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATunnelMusic_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.ReceiveTick");

	ATunnelMusic_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TunnelMusic.TunnelMusic_C.EventPlayerEnteredTunnels
// (BlueprintCallable, BlueprintEvent)

void ATunnelMusic_C::EventPlayerEnteredTunnels()
{
	static auto fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.EventPlayerEnteredTunnels");

	ATunnelMusic_C_EventPlayerEnteredTunnels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TunnelMusic.TunnelMusic_C.EventPlayerPeeking
// (BlueprintCallable, BlueprintEvent)

void ATunnelMusic_C::EventPlayerPeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.EventPlayerPeeking");

	ATunnelMusic_C_EventPlayerPeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TunnelMusic.TunnelMusic_C.EventPlayerBack
// (BlueprintCallable, BlueprintEvent)

void ATunnelMusic_C::EventPlayerBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.EventPlayerBack");

	ATunnelMusic_C_EventPlayerBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TunnelMusic.TunnelMusic_C.EventPlayerLeft
// (BlueprintCallable, BlueprintEvent)

void ATunnelMusic_C::EventPlayerLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.EventPlayerLeft");

	ATunnelMusic_C_EventPlayerLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TunnelMusic.TunnelMusic_C.ExecuteUbergraph_TunnelMusic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATunnelMusic_C::ExecuteUbergraph_TunnelMusic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.ExecuteUbergraph_TunnelMusic");

	ATunnelMusic_C_ExecuteUbergraph_TunnelMusic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
