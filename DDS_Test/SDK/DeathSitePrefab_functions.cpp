
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

// Function DeathSitePrefab.DeathSitePrefab_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeathSitePrefab_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefab.DeathSitePrefab_C.UserConstructionScript");

	ADeathSitePrefab_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSitePrefab.DeathSitePrefab_C.SetPrefabStage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Stage                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathSitePrefab_C::SetPrefabStage(int Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefab.DeathSitePrefab_C.SetPrefabStage");

	ADeathSitePrefab_C_SetPrefabStage_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSitePrefab.DeathSitePrefab_C.SubclassPrefabStageChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Stage                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathSitePrefab_C::SubclassPrefabStageChange(int Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefab.DeathSitePrefab_C.SubclassPrefabStageChange");

	ADeathSitePrefab_C_SubclassPrefabStageChange_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSitePrefab.DeathSitePrefab_C.ExecuteUbergraph_DeathSitePrefab
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathSitePrefab_C::ExecuteUbergraph_DeathSitePrefab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefab.DeathSitePrefab_C.ExecuteUbergraph_DeathSitePrefab");

	ADeathSitePrefab_C_ExecuteUbergraph_DeathSitePrefab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
