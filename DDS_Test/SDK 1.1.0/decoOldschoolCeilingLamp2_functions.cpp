
#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoOldschoolCeilingLamp2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C.UserConstructionScript");

	AdecoOldschoolCeilingLamp2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoOldschoolCeilingLamp2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C.ReceiveBeginPlay");

	AdecoOldschoolCeilingLamp2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C.ExecuteUbergraph_decoOldschoolCeilingLamp2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoOldschoolCeilingLamp2_C::ExecuteUbergraph_decoOldschoolCeilingLamp2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C.ExecuteUbergraph_decoOldschoolCeilingLamp2");

	AdecoOldschoolCeilingLamp2_C_ExecuteUbergraph_decoOldschoolCeilingLamp2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
