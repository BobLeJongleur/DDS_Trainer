
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

// Function FireworkExplosion.FireworkExplosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFireworkExplosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireworkExplosion.FireworkExplosion_C.UserConstructionScript");

	AFireworkExplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireworkExplosion.FireworkExplosion_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFireworkExplosion_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireworkExplosion.FireworkExplosion_C.ReceiveTick");

	AFireworkExplosion_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireworkExplosion.FireworkExplosion_C.ExecuteUbergraph_FireworkExplosion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFireworkExplosion_C::ExecuteUbergraph_FireworkExplosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireworkExplosion.FireworkExplosion_C.ExecuteUbergraph_FireworkExplosion");

	AFireworkExplosion_C_ExecuteUbergraph_FireworkExplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
