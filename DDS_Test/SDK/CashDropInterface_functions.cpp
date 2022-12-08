
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

// Function CashDropInterface.CashDropInterface_C.InvalidateOldSafe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   SafeGuid                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCashDropInterface_C::InvalidateOldSafe(const struct FGuid& SafeGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDropInterface.CashDropInterface_C.InvalidateOldSafe");

	UCashDropInterface_C_InvalidateOldSafe_Params params;
	params.SafeGuid = SafeGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashDropInterface.CashDropInterface_C.DropCash
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DropConfirmed                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCashDropInterface_C::DropCash(const struct FGuid& Guid, int CashAmount, bool* DropConfirmed)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDropInterface.CashDropInterface_C.DropCash");

	UCashDropInterface_C_DropCash_Params params;
	params.Guid = Guid;
	params.CashAmount = CashAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DropConfirmed != nullptr)
		*DropConfirmed = params.DropConfirmed;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
