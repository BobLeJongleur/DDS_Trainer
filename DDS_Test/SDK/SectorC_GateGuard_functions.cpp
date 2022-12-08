
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

// Function SectorC_GateGuard.SectorC_GateGuard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASectorC_GateGuard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GateGuard.SectorC_GateGuard_C.UserConstructionScript");

	ASectorC_GateGuard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorC_GateGuard.SectorC_GateGuard_C.RamaLoadedEvent
// (BlueprintCallable, BlueprintEvent)

void ASectorC_GateGuard_C::RamaLoadedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GateGuard.SectorC_GateGuard_C.RamaLoadedEvent");

	ASectorC_GateGuard_C_RamaLoadedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorC_GateGuard.SectorC_GateGuard_C.ExecuteUbergraph_SectorC_GateGuard
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectorC_GateGuard_C::ExecuteUbergraph_SectorC_GateGuard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GateGuard.SectorC_GateGuard_C.ExecuteUbergraph_SectorC_GateGuard");

	ASectorC_GateGuard_C_ExecuteUbergraph_SectorC_GateGuard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
