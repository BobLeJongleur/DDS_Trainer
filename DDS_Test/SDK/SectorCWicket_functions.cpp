
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

// Function SectorCWicket.SectorCWicket_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASectorCWicket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorCWicket.SectorCWicket_C.UserConstructionScript");

	ASectorCWicket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorCWicket.SectorCWicket_C.LongRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectorCWicket_C::LongRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorCWicket.SectorCWicket_C.LongRadiusChanged");

	ASectorCWicket_C_LongRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorCWicket.SectorCWicket_C.eventDoorActivated
// (BlueprintCallable, BlueprintEvent)

void ASectorCWicket_C::eventDoorActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorCWicket.SectorCWicket_C.eventDoorActivated");

	ASectorCWicket_C_eventDoorActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorCWicket.SectorCWicket_C.ShortRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectorCWicket_C::ShortRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorCWicket.SectorCWicket_C.ShortRadiusChanged");

	ASectorCWicket_C_ShortRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorCWicket.SectorCWicket_C.ExecuteUbergraph_SectorCWicket
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectorCWicket_C::ExecuteUbergraph_SectorCWicket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorCWicket.SectorCWicket_C.ExecuteUbergraph_SectorCWicket");

	ASectorCWicket_C_ExecuteUbergraph_SectorCWicket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
