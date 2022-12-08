
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

// Function CashDrawerBP.CashDrawerBP_C.ProcessValuables
// (Public, BlueprintCallable, BlueprintEvent)

void ACashDrawerBP_C::ProcessValuables()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.ProcessValuables");

	ACashDrawerBP_C_ProcessValuables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashDrawerBP.CashDrawerBP_C.CanAccessContainer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanAccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   DeclineReason                  (Parm, OutParm)

void ACashDrawerBP_C::CanAccessContainer(bool* CanAccess, struct FText* DeclineReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.CanAccessContainer");

	ACashDrawerBP_C_CanAccessContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAccess != nullptr)
		*CanAccess = params.CanAccess;
	if (DeclineReason != nullptr)
		*DeclineReason = params.DeclineReason;
}


// Function CashDrawerBP.CashDrawerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACashDrawerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.UserConstructionScript");

	ACashDrawerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashDrawerBP.CashDrawerBP_C.DrawerOpening__FinishedFunc
// (BlueprintEvent)

void ACashDrawerBP_C::DrawerOpening__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.DrawerOpening__FinishedFunc");

	ACashDrawerBP_C_DrawerOpening__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashDrawerBP.CashDrawerBP_C.DrawerOpening__UpdateFunc
// (BlueprintEvent)

void ACashDrawerBP_C::DrawerOpening__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.DrawerOpening__UpdateFunc");

	ACashDrawerBP_C_DrawerOpening__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashDrawerBP.CashDrawerBP_C.LongRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACashDrawerBP_C::LongRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.LongRadiusChanged");

	ACashDrawerBP_C_LongRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashDrawerBP.CashDrawerBP_C.OpenDrawer
// (BlueprintCallable, BlueprintEvent)

void ACashDrawerBP_C::OpenDrawer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.OpenDrawer");

	ACashDrawerBP_C_OpenDrawer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashDrawerBP.CashDrawerBP_C.CloseDrawer
// (BlueprintCallable, BlueprintEvent)

void ACashDrawerBP_C::CloseDrawer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.CloseDrawer");

	ACashDrawerBP_C_CloseDrawer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashDrawerBP.CashDrawerBP_C.closeEventScript
// (BlueprintCallable, BlueprintEvent)

void ACashDrawerBP_C::closeEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.closeEventScript");

	ACashDrawerBP_C_closeEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashDrawerBP.CashDrawerBP_C.ShortRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACashDrawerBP_C::ShortRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.ShortRadiusChanged");

	ACashDrawerBP_C_ShortRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashDrawerBP.CashDrawerBP_C.MoneyDeposited
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACashDrawerBP_C::MoneyDeposited(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.MoneyDeposited");

	ACashDrawerBP_C_MoneyDeposited_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CashDrawerBP.CashDrawerBP_C.ExecuteUbergraph_CashDrawerBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACashDrawerBP_C::ExecuteUbergraph_CashDrawerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.ExecuteUbergraph_CashDrawerBP");

	ACashDrawerBP_C_ExecuteUbergraph_CashDrawerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
