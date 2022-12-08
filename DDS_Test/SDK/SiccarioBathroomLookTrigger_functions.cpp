
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

// Function SiccarioBathroomLookTrigger.SiccarioBathroomLookTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASiccarioBathroomLookTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SiccarioBathroomLookTrigger.SiccarioBathroomLookTrigger_C.UserConstructionScript");

	ASiccarioBathroomLookTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SiccarioBathroomLookTrigger.SiccarioBathroomLookTrigger_C.playerLookedAt
// (BlueprintCallable, BlueprintEvent)

void ASiccarioBathroomLookTrigger_C::playerLookedAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function SiccarioBathroomLookTrigger.SiccarioBathroomLookTrigger_C.playerLookedAt");

	ASiccarioBathroomLookTrigger_C_playerLookedAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SiccarioBathroomLookTrigger.SiccarioBathroomLookTrigger_C.ExecuteUbergraph_SiccarioBathroomLookTrigger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASiccarioBathroomLookTrigger_C::ExecuteUbergraph_SiccarioBathroomLookTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SiccarioBathroomLookTrigger.SiccarioBathroomLookTrigger_C.ExecuteUbergraph_SiccarioBathroomLookTrigger");

	ASiccarioBathroomLookTrigger_C_ExecuteUbergraph_SiccarioBathroomLookTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
