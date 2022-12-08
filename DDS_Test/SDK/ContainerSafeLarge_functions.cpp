
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

// Function ContainerSafeLarge.ContainerSafeLarge_C.DropCash
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DropConfirmed                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AContainerSafeLarge_C::DropCash(const struct FGuid& Guid, int CashAmount, bool* DropConfirmed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerSafeLarge.ContainerSafeLarge_C.DropCash");

	AContainerSafeLarge_C_DropCash_Params params;
	params.Guid = Guid;
	params.CashAmount = CashAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DropConfirmed != nullptr)
		*DropConfirmed = params.DropConfirmed;
}


// Function ContainerSafeLarge.ContainerSafeLarge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AContainerSafeLarge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerSafeLarge.ContainerSafeLarge_C.UserConstructionScript");

	AContainerSafeLarge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContainerSafeLarge.ContainerSafeLarge_C.InvalidateOldSafe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   SafeGuid                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AContainerSafeLarge_C::InvalidateOldSafe(const struct FGuid& SafeGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerSafeLarge.ContainerSafeLarge_C.InvalidateOldSafe");

	AContainerSafeLarge_C_InvalidateOldSafe_Params params;
	params.SafeGuid = SafeGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContainerSafeLarge.ContainerSafeLarge_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AContainerSafeLarge_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerSafeLarge.ContainerSafeLarge_C.ReceiveDestroyed");

	AContainerSafeLarge_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContainerSafeLarge.ContainerSafeLarge_C.RamaLoaded
// (BlueprintCallable, BlueprintEvent)

void AContainerSafeLarge_C::RamaLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerSafeLarge.ContainerSafeLarge_C.RamaLoaded");

	AContainerSafeLarge_C_RamaLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContainerSafeLarge.ContainerSafeLarge_C.ExecuteUbergraph_ContainerSafeLarge
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AContainerSafeLarge_C::ExecuteUbergraph_ContainerSafeLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContainerSafeLarge.ContainerSafeLarge_C.ExecuteUbergraph_ContainerSafeLarge");

	AContainerSafeLarge_C_ExecuteUbergraph_ContainerSafeLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
