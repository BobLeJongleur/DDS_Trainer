
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

// Function InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryItemTooltipContentItem_C::Setup(const struct FText& Name, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C.Setup");

	UInventoryItemTooltipContentItem_C_Setup_Params params;
	params.Name = Name;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C.ExecuteUbergraph_InventoryItemTooltipContentItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryItemTooltipContentItem_C::ExecuteUbergraph_InventoryItemTooltipContentItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C.ExecuteUbergraph_InventoryItemTooltipContentItem");

	UInventoryItemTooltipContentItem_C_ExecuteUbergraph_InventoryItemTooltipContentItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
