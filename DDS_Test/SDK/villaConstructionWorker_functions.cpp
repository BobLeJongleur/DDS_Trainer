
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

// Function villaConstructionWorker.villaConstructionWorker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AvillaConstructionWorker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function villaConstructionWorker.villaConstructionWorker_C.UserConstructionScript");

	AvillaConstructionWorker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaConstructionWorker.villaConstructionWorker_C.dialogueMode
// (BlueprintCallable, BlueprintEvent)

void AvillaConstructionWorker_C::dialogueMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function villaConstructionWorker.villaConstructionWorker_C.dialogueMode");

	AvillaConstructionWorker_C_dialogueMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function villaConstructionWorker.villaConstructionWorker_C.ExecuteUbergraph_villaConstructionWorker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AvillaConstructionWorker_C::ExecuteUbergraph_villaConstructionWorker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function villaConstructionWorker.villaConstructionWorker_C.ExecuteUbergraph_villaConstructionWorker");

	AvillaConstructionWorker_C_ExecuteUbergraph_villaConstructionWorker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
