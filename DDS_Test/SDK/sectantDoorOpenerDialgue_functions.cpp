
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

// Function sectantDoorOpenerDialgue.sectantDoorOpenerDialgue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsectantDoorOpenerDialgue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function sectantDoorOpenerDialgue.sectantDoorOpenerDialgue_C.UserConstructionScript");

	AsectantDoorOpenerDialgue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sectantDoorOpenerDialgue.sectantDoorOpenerDialgue_C.PasswordSaid
// (BlueprintCallable, BlueprintEvent)

void AsectantDoorOpenerDialgue_C::PasswordSaid()
{
	static auto fn = UObject::FindObject<UFunction>("Function sectantDoorOpenerDialgue.sectantDoorOpenerDialgue_C.PasswordSaid");

	AsectantDoorOpenerDialgue_C_PasswordSaid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sectantDoorOpenerDialgue.sectantDoorOpenerDialgue_C.ExecuteUbergraph_sectantDoorOpenerDialgue
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsectantDoorOpenerDialgue_C::ExecuteUbergraph_sectantDoorOpenerDialgue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sectantDoorOpenerDialgue.sectantDoorOpenerDialgue_C.ExecuteUbergraph_sectantDoorOpenerDialgue");

	AsectantDoorOpenerDialgue_C_ExecuteUbergraph_sectantDoorOpenerDialgue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
