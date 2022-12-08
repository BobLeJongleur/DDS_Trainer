
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

// Function toiletBathroomToilet.toiletBathroomToilet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtoiletBathroomToilet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function toiletBathroomToilet.toiletBathroomToilet_C.UserConstructionScript");

	AtoiletBathroomToilet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function toiletBathroomToilet.toiletBathroomToilet_C.closeEventScript
// (BlueprintCallable, BlueprintEvent)

void AtoiletBathroomToilet_C::closeEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function toiletBathroomToilet.toiletBathroomToilet_C.closeEventScript");

	AtoiletBathroomToilet_C_closeEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function toiletBathroomToilet.toiletBathroomToilet_C.ExecuteUbergraph_toiletBathroomToilet
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtoiletBathroomToilet_C::ExecuteUbergraph_toiletBathroomToilet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function toiletBathroomToilet.toiletBathroomToilet_C.ExecuteUbergraph_toiletBathroomToilet");

	AtoiletBathroomToilet_C_ExecuteUbergraph_toiletBathroomToilet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
