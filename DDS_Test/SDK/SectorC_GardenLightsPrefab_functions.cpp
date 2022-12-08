
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

// Function SectorC_GardenLightsPrefab.SectorC_GardenLightsPrefab_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASectorC_GardenLightsPrefab_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GardenLightsPrefab.SectorC_GardenLightsPrefab_C.UserConstructionScript");

	ASectorC_GardenLightsPrefab_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorC_GardenLightsPrefab.SectorC_GardenLightsPrefab_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASectorC_GardenLightsPrefab_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GardenLightsPrefab.SectorC_GardenLightsPrefab_C.ReceiveBeginPlay");

	ASectorC_GardenLightsPrefab_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorC_GardenLightsPrefab.SectorC_GardenLightsPrefab_C.SwitchOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnedOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectorC_GardenLightsPrefab_C::SwitchOn(bool TurnedOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GardenLightsPrefab.SectorC_GardenLightsPrefab_C.SwitchOn");

	ASectorC_GardenLightsPrefab_C_SwitchOn_Params params;
	params.TurnedOn = TurnedOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectorC_GardenLightsPrefab.SectorC_GardenLightsPrefab_C.ExecuteUbergraph_SectorC_GardenLightsPrefab
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectorC_GardenLightsPrefab_C::ExecuteUbergraph_SectorC_GardenLightsPrefab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectorC_GardenLightsPrefab.SectorC_GardenLightsPrefab_C.ExecuteUbergraph_SectorC_GardenLightsPrefab");

	ASectorC_GardenLightsPrefab_C_ExecuteUbergraph_SectorC_GardenLightsPrefab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
