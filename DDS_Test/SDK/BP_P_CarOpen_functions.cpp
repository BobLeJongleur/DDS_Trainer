
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

// Function BP_P_CarOpen.BP_P_CarOpen_C.RandomGenerator
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_P_CarOpen_C::RandomGenerator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_P_CarOpen.BP_P_CarOpen_C.RandomGenerator");

	ABP_P_CarOpen_C_RandomGenerator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_P_CarOpen.BP_P_CarOpen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_P_CarOpen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_P_CarOpen.BP_P_CarOpen_C.UserConstructionScript");

	ABP_P_CarOpen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_P_CarOpen.BP_P_CarOpen_C.GenerateCar
// (BlueprintCallable, BlueprintEvent)

void ABP_P_CarOpen_C::GenerateCar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_P_CarOpen.BP_P_CarOpen_C.GenerateCar");

	ABP_P_CarOpen_C_GenerateCar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_P_CarOpen.BP_P_CarOpen_C.ExecuteUbergraph_BP_P_CarOpen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_P_CarOpen_C::ExecuteUbergraph_BP_P_CarOpen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_P_CarOpen.BP_P_CarOpen_C.ExecuteUbergraph_BP_P_CarOpen");

	ABP_P_CarOpen_C_ExecuteUbergraph_BP_P_CarOpen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
