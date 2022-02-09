
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

// Function doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdoorsExtWoodPsychedelicHideout_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C.UserConstructionScript");

	AdoorsExtWoodPsychedelicHideout_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C.eventDoorActivated
// (BlueprintCallable, BlueprintEvent)

void AdoorsExtWoodPsychedelicHideout_C::eventDoorActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C.eventDoorActivated");

	AdoorsExtWoodPsychedelicHideout_C_eventDoorActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C.ExecuteUbergraph_doorsExtWoodPsychedelicHideout
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdoorsExtWoodPsychedelicHideout_C::ExecuteUbergraph_doorsExtWoodPsychedelicHideout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C.ExecuteUbergraph_doorsExtWoodPsychedelicHideout");

	AdoorsExtWoodPsychedelicHideout_C_ExecuteUbergraph_doorsExtWoodPsychedelicHideout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
