
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

// Function GSMQuest04.GSMQuest04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGSMQuest04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest04.GSMQuest04_C.UserConstructionScript");

	AGSMQuest04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest04.GSMQuest04_C.QuestActivation
// (BlueprintCallable, BlueprintEvent)

void AGSMQuest04_C::QuestActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest04.GSMQuest04_C.QuestActivation");

	AGSMQuest04_C_QuestActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest04.GSMQuest04_C.ExecuteUbergraph_GSMQuest04
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGSMQuest04_C::ExecuteUbergraph_GSMQuest04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest04.GSMQuest04_C.ExecuteUbergraph_GSMQuest04");

	AGSMQuest04_C_ExecuteUbergraph_GSMQuest04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
