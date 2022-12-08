
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

// Function VillaMeshPrefab.VillaMeshPrefab_C.SetPrefabEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaMeshPrefab_C::SetPrefabEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaMeshPrefab.VillaMeshPrefab_C.SetPrefabEnabled");

	AVillaMeshPrefab_C_SetPrefabEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaMeshPrefab.VillaMeshPrefab_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVillaMeshPrefab_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaMeshPrefab.VillaMeshPrefab_C.UserConstructionScript");

	AVillaMeshPrefab_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaMeshPrefab.VillaMeshPrefab_C.SubclassActivation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaMeshPrefab_C::SubclassActivation(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaMeshPrefab.VillaMeshPrefab_C.SubclassActivation");

	AVillaMeshPrefab_C_SubclassActivation_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaMeshPrefab.VillaMeshPrefab_C.ExecuteUbergraph_VillaMeshPrefab
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaMeshPrefab_C::ExecuteUbergraph_VillaMeshPrefab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaMeshPrefab.VillaMeshPrefab_C.ExecuteUbergraph_VillaMeshPrefab");

	AVillaMeshPrefab_C_ExecuteUbergraph_VillaMeshPrefab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
