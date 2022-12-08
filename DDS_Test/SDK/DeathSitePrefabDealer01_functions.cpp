
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

// Function DeathSitePrefabDealer01.DeathSitePrefabDealer01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeathSitePrefabDealer01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefabDealer01.DeathSitePrefabDealer01_C.UserConstructionScript");

	ADeathSitePrefabDealer01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSitePrefabDealer01.DeathSitePrefabDealer01_C.SubclassPrefabStageChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Stage                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathSitePrefabDealer01_C::SubclassPrefabStageChange(int Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefabDealer01.DeathSitePrefabDealer01_C.SubclassPrefabStageChange");

	ADeathSitePrefabDealer01_C_SubclassPrefabStageChange_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSitePrefabDealer01.DeathSitePrefabDealer01_C.ExecuteUbergraph_DeathSitePrefabDealer01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathSitePrefabDealer01_C::ExecuteUbergraph_DeathSitePrefabDealer01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefabDealer01.DeathSitePrefabDealer01_C.ExecuteUbergraph_DeathSitePrefabDealer01");

	ADeathSitePrefabDealer01_C_ExecuteUbergraph_DeathSitePrefabDealer01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
