
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

// Function BP_Car.BP_Car_C.RandomGenerator
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Car_C::RandomGenerator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Car.BP_Car_C.RandomGenerator");

	ABP_Car_C_RandomGenerator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Car.BP_Car_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Car_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Car.BP_Car_C.UserConstructionScript");

	ABP_Car_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Car.BP_Car_C.GenerateCar
// (BlueprintCallable, BlueprintEvent)

void ABP_Car_C::GenerateCar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Car.BP_Car_C.GenerateCar");

	ABP_Car_C_GenerateCar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Car.BP_Car_C.ExecuteUbergraph_BP_Car
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Car_C::ExecuteUbergraph_BP_Car(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Car.BP_Car_C.ExecuteUbergraph_BP_Car");

	ABP_Car_C_ExecuteUbergraph_BP_Car_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
