
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

// Function toiletBathroomToilet2.toiletBathroomToilet2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtoiletBathroomToilet2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function toiletBathroomToilet2.toiletBathroomToilet2_C.UserConstructionScript");

	AtoiletBathroomToilet2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function toiletBathroomToilet2.toiletBathroomToilet2_C.closeEventScript
// (BlueprintCallable, BlueprintEvent)

void AtoiletBathroomToilet2_C::closeEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function toiletBathroomToilet2.toiletBathroomToilet2_C.closeEventScript");

	AtoiletBathroomToilet2_C_closeEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function toiletBathroomToilet2.toiletBathroomToilet2_C.ExecuteUbergraph_toiletBathroomToilet2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtoiletBathroomToilet2_C::ExecuteUbergraph_toiletBathroomToilet2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function toiletBathroomToilet2.toiletBathroomToilet2_C.ExecuteUbergraph_toiletBathroomToilet2");

	AtoiletBathroomToilet2_C_ExecuteUbergraph_toiletBathroomToilet2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
