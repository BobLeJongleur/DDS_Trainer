
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

// Function SpecialEqBlocker.SpecialEqBlocker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASpecialEqBlocker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpecialEqBlocker.SpecialEqBlocker_C.UserConstructionScript");

	ASpecialEqBlocker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpecialEqBlocker.SpecialEqBlocker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASpecialEqBlocker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpecialEqBlocker.SpecialEqBlocker_C.ReceiveBeginPlay");

	ASpecialEqBlocker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpecialEqBlocker.SpecialEqBlocker_C.ExecuteUbergraph_SpecialEqBlocker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpecialEqBlocker_C::ExecuteUbergraph_SpecialEqBlocker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpecialEqBlocker.SpecialEqBlocker_C.ExecuteUbergraph_SpecialEqBlocker");

	ASpecialEqBlocker_C_ExecuteUbergraph_SpecialEqBlocker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
