
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

// Function SectorHidoutUnlocker.SectorHidoutUnlocker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASectorHidoutUnlocker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorHidoutUnlocker.SectorHidoutUnlocker_C.UserConstructionScript");

	ASectorHidoutUnlocker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorHidoutUnlocker.SectorHidoutUnlocker_C.RentHideout
// (BlueprintCallable, BlueprintEvent)

void ASectorHidoutUnlocker_C::RentHideout()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorHidoutUnlocker.SectorHidoutUnlocker_C.RentHideout");

	ASectorHidoutUnlocker_C_RentHideout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorHidoutUnlocker.SectorHidoutUnlocker_C.ExecuteUbergraph_SectorHidoutUnlocker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectorHidoutUnlocker_C::ExecuteUbergraph_SectorHidoutUnlocker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorHidoutUnlocker.SectorHidoutUnlocker_C.ExecuteUbergraph_SectorHidoutUnlocker");

	ASectorHidoutUnlocker_C_ExecuteUbergraph_SectorHidoutUnlocker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
