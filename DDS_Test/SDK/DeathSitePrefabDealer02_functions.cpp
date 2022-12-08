
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

// Function DeathSitePrefabDealer02.DeathSitePrefabDealer02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeathSitePrefabDealer02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefabDealer02.DeathSitePrefabDealer02_C.UserConstructionScript");

	ADeathSitePrefabDealer02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSitePrefabDealer02.DeathSitePrefabDealer02_C.SubclassPrefabStageChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Stage                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathSitePrefabDealer02_C::SubclassPrefabStageChange(int Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefabDealer02.DeathSitePrefabDealer02_C.SubclassPrefabStageChange");

	ADeathSitePrefabDealer02_C_SubclassPrefabStageChange_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSitePrefabDealer02.DeathSitePrefabDealer02_C.ExecuteUbergraph_DeathSitePrefabDealer02
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathSitePrefabDealer02_C::ExecuteUbergraph_DeathSitePrefabDealer02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSitePrefabDealer02.DeathSitePrefabDealer02_C.ExecuteUbergraph_DeathSitePrefabDealer02");

	ADeathSitePrefabDealer02_C_ExecuteUbergraph_DeathSitePrefabDealer02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
