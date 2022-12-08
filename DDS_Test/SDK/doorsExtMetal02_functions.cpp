
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

// Function doorsExtMetal02.doorsExtMetal02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdoorsExtMetal02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorsExtMetal02.doorsExtMetal02_C.UserConstructionScript");

	AdoorsExtMetal02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorsExtMetal02.doorsExtMetal02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdoorsExtMetal02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorsExtMetal02.doorsExtMetal02_C.ReceiveBeginPlay");

	AdoorsExtMetal02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorsExtMetal02.doorsExtMetal02_C.TestOpen
// (BlueprintCallable, BlueprintEvent)

void AdoorsExtMetal02_C::TestOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorsExtMetal02.doorsExtMetal02_C.TestOpen");

	AdoorsExtMetal02_C_TestOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorsExtMetal02.doorsExtMetal02_C.ExecuteUbergraph_doorsExtMetal02
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdoorsExtMetal02_C::ExecuteUbergraph_doorsExtMetal02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function doorsExtMetal02.doorsExtMetal02_C.ExecuteUbergraph_doorsExtMetal02");

	AdoorsExtMetal02_C_ExecuteUbergraph_doorsExtMetal02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
