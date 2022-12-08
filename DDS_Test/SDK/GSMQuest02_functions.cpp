
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

// Function GSMQuest02.GSMQuest02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGSMQuest02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest02.GSMQuest02_C.UserConstructionScript");

	AGSMQuest02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest02.GSMQuest02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGSMQuest02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest02.GSMQuest02_C.ReceiveBeginPlay");

	AGSMQuest02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest02.GSMQuest02_C.GraveUnlock
// (BlueprintCallable, BlueprintEvent)

void AGSMQuest02_C::GraveUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest02.GSMQuest02_C.GraveUnlock");

	AGSMQuest02_C_GraveUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest02.GSMQuest02_C.QuestActivation
// (BlueprintCallable, BlueprintEvent)

void AGSMQuest02_C::QuestActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest02.GSMQuest02_C.QuestActivation");

	AGSMQuest02_C_QuestActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest02.GSMQuest02_C.ExecuteUbergraph_GSMQuest02
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGSMQuest02_C::ExecuteUbergraph_GSMQuest02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest02.GSMQuest02_C.ExecuteUbergraph_GSMQuest02");

	AGSMQuest02_C_ExecuteUbergraph_GSMQuest02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
