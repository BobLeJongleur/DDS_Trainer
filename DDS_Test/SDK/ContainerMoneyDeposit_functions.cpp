
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

// Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.CanAccessContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanAccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   DeclineReason                  (Parm, OutParm)

void AContainerMoneyDeposit_C::CanAccessContainer(bool* CanAccess, struct FText* DeclineReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.CanAccessContainer");

	AContainerMoneyDeposit_C_CanAccessContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAccess != nullptr)
		*CanAccess = params.CanAccess;
	if (DeclineReason != nullptr)
		*DeclineReason = params.DeclineReason;
}


// Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AContainerMoneyDeposit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.UserConstructionScript");

	AContainerMoneyDeposit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.NewPickupQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            taskID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AContainerMoneyDeposit_C::NewPickupQuest(int taskID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.NewPickupQuest");

	AContainerMoneyDeposit_C_NewPickupQuest_Params params;
	params.taskID = taskID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.closeEventScript
// (BlueprintCallable, BlueprintEvent)

void AContainerMoneyDeposit_C::closeEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.closeEventScript");

	AContainerMoneyDeposit_C_closeEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.DepositCash
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AContainerMoneyDeposit_C::DepositCash(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.DepositCash");

	AContainerMoneyDeposit_C_DepositCash_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.ExecuteUbergraph_ContainerMoneyDeposit
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AContainerMoneyDeposit_C::ExecuteUbergraph_ContainerMoneyDeposit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.ExecuteUbergraph_ContainerMoneyDeposit");

	AContainerMoneyDeposit_C_ExecuteUbergraph_ContainerMoneyDeposit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
