
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

// Function ContainerSafeSmall.ContainerSafeSmall_C.DropCash
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DropConfirmed                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AContainerSafeSmall_C::DropCash(const struct FGuid& Guid, int CashAmount, bool* DropConfirmed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerSafeSmall.ContainerSafeSmall_C.DropCash");

	AContainerSafeSmall_C_DropCash_Params params;
	params.Guid = Guid;
	params.CashAmount = CashAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DropConfirmed != nullptr)
		*DropConfirmed = params.DropConfirmed;
}


// Function ContainerSafeSmall.ContainerSafeSmall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AContainerSafeSmall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerSafeSmall.ContainerSafeSmall_C.UserConstructionScript");

	AContainerSafeSmall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContainerSafeSmall.ContainerSafeSmall_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AContainerSafeSmall_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerSafeSmall.ContainerSafeSmall_C.ReceiveDestroyed");

	AContainerSafeSmall_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContainerSafeSmall.ContainerSafeSmall_C.InvalidateOldSafe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   SafeGuid                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AContainerSafeSmall_C::InvalidateOldSafe(const struct FGuid& SafeGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerSafeSmall.ContainerSafeSmall_C.InvalidateOldSafe");

	AContainerSafeSmall_C_InvalidateOldSafe_Params params;
	params.SafeGuid = SafeGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContainerSafeSmall.ContainerSafeSmall_C.ExecuteUbergraph_ContainerSafeSmall
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AContainerSafeSmall_C::ExecuteUbergraph_ContainerSafeSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerSafeSmall.ContainerSafeSmall_C.ExecuteUbergraph_ContainerSafeSmall");

	AContainerSafeSmall_C_ExecuteUbergraph_ContainerSafeSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
