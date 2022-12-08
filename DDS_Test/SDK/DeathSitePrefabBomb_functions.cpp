
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

// Function DeathSitePrefabBomb.DeathSitePrefabBomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeathSitePrefabBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefabBomb.DeathSitePrefabBomb_C.UserConstructionScript");

	ADeathSitePrefabBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSitePrefabBomb.DeathSitePrefabBomb_C.SubclassPrefabStageChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Stage                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathSitePrefabBomb_C::SubclassPrefabStageChange(int Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefabBomb.DeathSitePrefabBomb_C.SubclassPrefabStageChange");

	ADeathSitePrefabBomb_C_SubclassPrefabStageChange_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSitePrefabBomb.DeathSitePrefabBomb_C.ExecuteUbergraph_DeathSitePrefabBomb
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathSitePrefabBomb_C::ExecuteUbergraph_DeathSitePrefabBomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefabBomb.DeathSitePrefabBomb_C.ExecuteUbergraph_DeathSitePrefabBomb");

	ADeathSitePrefabBomb_C_ExecuteUbergraph_DeathSitePrefabBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
