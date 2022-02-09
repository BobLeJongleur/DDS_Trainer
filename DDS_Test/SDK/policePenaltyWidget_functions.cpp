
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

// Function policePenaltyWidget.policePenaltyWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UpolicePenaltyWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function policePenaltyWidget.policePenaltyWidget_C.Construct");

	UpolicePenaltyWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePenaltyWidget.policePenaltyWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Reason                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpolicePenaltyWidget_C::Setup(const struct FText& Reason, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePenaltyWidget.policePenaltyWidget_C.Setup");

	UpolicePenaltyWidget_C_Setup_Params params;
	params.Reason = Reason;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePenaltyWidget.policePenaltyWidget_C.ExecuteUbergraph_policePenaltyWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpolicePenaltyWidget_C::ExecuteUbergraph_policePenaltyWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePenaltyWidget.policePenaltyWidget_C.ExecuteUbergraph_policePenaltyWidget");

	UpolicePenaltyWidget_C_ExecuteUbergraph_policePenaltyWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
