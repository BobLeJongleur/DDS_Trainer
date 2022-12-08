
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

// Function toiletBP.toiletBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtoiletBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function toiletBP.toiletBP_C.UserConstructionScript");

	AtoiletBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function toiletBP.toiletBP_C.closeEventScript
// (BlueprintCallable, BlueprintEvent)

void AtoiletBP_C::closeEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function toiletBP.toiletBP_C.closeEventScript");

	AtoiletBP_C_closeEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function toiletBP.toiletBP_C.ExecuteUbergraph_toiletBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtoiletBP_C::ExecuteUbergraph_toiletBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function toiletBP.toiletBP_C.ExecuteUbergraph_toiletBP");

	AtoiletBP_C_ExecuteUbergraph_toiletBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
