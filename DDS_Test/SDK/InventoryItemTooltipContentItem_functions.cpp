
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

// Function InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryItemTooltipContentItem_C::setup(const struct FText& Name, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C.setup");

	UInventoryItemTooltipContentItem_C_setup_Params params;
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
