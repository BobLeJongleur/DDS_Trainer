
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

// Function sewageExit.sewageExit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsewageExit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function sewageExit.sewageExit_C.UserConstructionScript");

	AsewageExit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sewageExit.sewageExit_C.activateExit
// (BlueprintCallable, BlueprintEvent)

void AsewageExit_C::activateExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function sewageExit.sewageExit_C.activateExit");

	AsewageExit_C_activateExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sewageExit.sewageExit_C.ExecuteUbergraph_sewageExit
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsewageExit_C::ExecuteUbergraph_sewageExit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sewageExit.sewageExit_C.ExecuteUbergraph_sewageExit");

	AsewageExit_C_ExecuteUbergraph_sewageExit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
