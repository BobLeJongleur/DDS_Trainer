
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

// Function InventoryItemTooltip.InventoryItemTooltip_C.Get_txtWeight_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UInventoryItemTooltip_C::Get_txtWeight_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemTooltip.InventoryItemTooltip_C.Get_txtWeight_Text_1");

	UInventoryItemTooltip_C_Get_txtWeight_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryItemTooltip.InventoryItemTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInventoryItemTooltip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemTooltip.InventoryItemTooltip_C.Construct");

	UInventoryItemTooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemTooltip.InventoryItemTooltip_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FinventoryItemStruct    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   CustomTagName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent_C*   InvComp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGuid                   ItemGuid                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryItemTooltip_C::Setup(const struct FName& ItemID, const struct FinventoryItemStruct& Data, const struct FText& CustomTagName, int Quantity, int Amount, class UInventoryComponent_C* InvComp, const struct FGuid& ItemGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemTooltip.InventoryItemTooltip_C.Setup");

	UInventoryItemTooltip_C_Setup_Params params;
	params.ItemID = ItemID;
	params.Data = Data;
	params.CustomTagName = CustomTagName;
	params.Quantity = Quantity;
	params.Amount = Amount;
	params.InvComp = InvComp;
	params.ItemGuid = ItemGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemTooltip.InventoryItemTooltip_C.ExecuteUbergraph_InventoryItemTooltip
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryItemTooltip_C::ExecuteUbergraph_InventoryItemTooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemTooltip.InventoryItemTooltip_C.ExecuteUbergraph_InventoryItemTooltip");

	UInventoryItemTooltip_C_ExecuteUbergraph_InventoryItemTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
