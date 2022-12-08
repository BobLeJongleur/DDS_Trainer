
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

// Function GSMQuest03.GSMQuest03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGSMQuest03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest03.GSMQuest03_C.UserConstructionScript");

	AGSMQuest03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest03.GSMQuest03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGSMQuest03_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest03.GSMQuest03_C.ReceiveBeginPlay");

	AGSMQuest03_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest03.GSMQuest03_C.QuestActivation
// (BlueprintCallable, BlueprintEvent)

void AGSMQuest03_C::QuestActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest03.GSMQuest03_C.QuestActivation");

	AGSMQuest03_C_QuestActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest03.GSMQuest03_C.PontonDropped
// (BlueprintCallable, BlueprintEvent)

void AGSMQuest03_C::PontonDropped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest03.GSMQuest03_C.PontonDropped");

	AGSMQuest03_C_PontonDropped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest03.GSMQuest03_C.DropPonton
// (BlueprintCallable, BlueprintEvent)

void AGSMQuest03_C::DropPonton()
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest03.GSMQuest03_C.DropPonton");

	AGSMQuest03_C_DropPonton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSMQuest03.GSMQuest03_C.ExecuteUbergraph_GSMQuest03
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGSMQuest03_C::ExecuteUbergraph_GSMQuest03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GSMQuest03.GSMQuest03_C.ExecuteUbergraph_GSMQuest03");

	AGSMQuest03_C_ExecuteUbergraph_GSMQuest03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
