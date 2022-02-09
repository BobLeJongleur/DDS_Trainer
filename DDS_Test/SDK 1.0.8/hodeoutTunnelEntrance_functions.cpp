
#include "pch.h"

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AhodeoutTunnelEntrance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.UserConstructionScript");

	AhodeoutTunnelEntrance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AhodeoutTunnelEntrance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.ReceiveBeginPlay");

	AhodeoutTunnelEntrance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.EntranceInteracted
// (BlueprintCallable, BlueprintEvent)

void AhodeoutTunnelEntrance_C::EntranceInteracted()
{
	static auto fn = UObject::FindObject<UFunction>("Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.EntranceInteracted");

	AhodeoutTunnelEntrance_C_EntranceInteracted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.ExecuteUbergraph_hodeoutTunnelEntrance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AhodeoutTunnelEntrance_C::ExecuteUbergraph_hodeoutTunnelEntrance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.ExecuteUbergraph_hodeoutTunnelEntrance");

	AhodeoutTunnelEntrance_C_ExecuteUbergraph_hodeoutTunnelEntrance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
