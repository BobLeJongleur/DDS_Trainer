
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

// Function CursedSpotFixer.CursedSpotFixer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACursedSpotFixer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CursedSpotFixer.CursedSpotFixer_C.UserConstructionScript");

	ACursedSpotFixer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CursedSpotFixer.CursedSpotFixer_C.FixCursedSpot
// (BlueprintCallable, BlueprintEvent)

void ACursedSpotFixer_C::FixCursedSpot()
{
	static auto fn = UObject::FindObject<UFunction>("Function CursedSpotFixer.CursedSpotFixer_C.FixCursedSpot");

	ACursedSpotFixer_C_FixCursedSpot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CursedSpotFixer.CursedSpotFixer_C.ExecuteUbergraph_CursedSpotFixer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACursedSpotFixer_C::ExecuteUbergraph_CursedSpotFixer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CursedSpotFixer.CursedSpotFixer_C.ExecuteUbergraph_CursedSpotFixer");

	ACursedSpotFixer_C_ExecuteUbergraph_CursedSpotFixer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
