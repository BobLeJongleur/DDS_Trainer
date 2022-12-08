
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

// Function toiletGoldenThrone.toiletGoldenThrone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtoiletGoldenThrone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function toiletGoldenThrone.toiletGoldenThrone_C.UserConstructionScript");

	AtoiletGoldenThrone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function toiletGoldenThrone.toiletGoldenThrone_C.closeEventScript
// (BlueprintCallable, BlueprintEvent)

void AtoiletGoldenThrone_C::closeEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function toiletGoldenThrone.toiletGoldenThrone_C.closeEventScript");

	AtoiletGoldenThrone_C_closeEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function toiletGoldenThrone.toiletGoldenThrone_C.ExecuteUbergraph_toiletGoldenThrone
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtoiletGoldenThrone_C::ExecuteUbergraph_toiletGoldenThrone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function toiletGoldenThrone.toiletGoldenThrone_C.ExecuteUbergraph_toiletGoldenThrone");

	AtoiletGoldenThrone_C_ExecuteUbergraph_toiletGoldenThrone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
