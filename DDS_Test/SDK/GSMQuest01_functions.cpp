
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

// Function GSMQuest01.GSMQuest01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGSMQuest01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest01.GSMQuest01_C.UserConstructionScript");

	AGSMQuest01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest01.GSMQuest01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGSMQuest01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest01.GSMQuest01_C.ReceiveBeginPlay");

	AGSMQuest01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest01.GSMQuest01_C.QuestActivation
// (BlueprintCallable, BlueprintEvent)

void AGSMQuest01_C::QuestActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest01.GSMQuest01_C.QuestActivation");

	AGSMQuest01_C_QuestActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest01.GSMQuest01_C.KnockObserved
// (BlueprintCallable, BlueprintEvent)

void AGSMQuest01_C::KnockObserved()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest01.GSMQuest01_C.KnockObserved");

	AGSMQuest01_C_KnockObserved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest01.GSMQuest01_C.DoorUnlocked
// (BlueprintCallable, BlueprintEvent)

void AGSMQuest01_C::DoorUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest01.GSMQuest01_C.DoorUnlocked");

	AGSMQuest01_C_DoorUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest01.GSMQuest01_C.ExecuteUbergraph_GSMQuest01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGSMQuest01_C::ExecuteUbergraph_GSMQuest01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest01.GSMQuest01_C.ExecuteUbergraph_GSMQuest01");

	AGSMQuest01_C_ExecuteUbergraph_GSMQuest01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
