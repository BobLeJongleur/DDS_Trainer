
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

// Function GardenLightsPrefab.GardenLightsPrefab_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGardenLightsPrefab_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GardenLightsPrefab.GardenLightsPrefab_C.UserConstructionScript");

	AGardenLightsPrefab_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GardenLightsPrefab.GardenLightsPrefab_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGardenLightsPrefab_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GardenLightsPrefab.GardenLightsPrefab_C.ReceiveBeginPlay");

	AGardenLightsPrefab_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GardenLightsPrefab.GardenLightsPrefab_C.SwitchOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnedOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGardenLightsPrefab_C::SwitchOn(bool TurnedOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GardenLightsPrefab.GardenLightsPrefab_C.SwitchOn");

	AGardenLightsPrefab_C_SwitchOn_Params params;
	params.TurnedOn = TurnedOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GardenLightsPrefab.GardenLightsPrefab_C.ExecuteUbergraph_GardenLightsPrefab
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGardenLightsPrefab_C::ExecuteUbergraph_GardenLightsPrefab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GardenLightsPrefab.GardenLightsPrefab_C.ExecuteUbergraph_GardenLightsPrefab");

	AGardenLightsPrefab_C_ExecuteUbergraph_GardenLightsPrefab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
