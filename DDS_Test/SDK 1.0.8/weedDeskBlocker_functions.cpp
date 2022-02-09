
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

// Function weedDeskBlocker.weedDeskBlocker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AweedDeskBlocker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedDeskBlocker.weedDeskBlocker_C.UserConstructionScript");

	AweedDeskBlocker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedDeskBlocker.weedDeskBlocker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AweedDeskBlocker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedDeskBlocker.weedDeskBlocker_C.ReceiveBeginPlay");

	AweedDeskBlocker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedDeskBlocker.weedDeskBlocker_C.testGangUnlocked
// (BlueprintCallable, BlueprintEvent)

void AweedDeskBlocker_C::testGangUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedDeskBlocker.weedDeskBlocker_C.testGangUnlocked");

	AweedDeskBlocker_C_testGangUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedDeskBlocker.weedDeskBlocker_C.ExecuteUbergraph_weedDeskBlocker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AweedDeskBlocker_C::ExecuteUbergraph_weedDeskBlocker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedDeskBlocker.weedDeskBlocker_C.ExecuteUbergraph_weedDeskBlocker");

	AweedDeskBlocker_C_ExecuteUbergraph_weedDeskBlocker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
