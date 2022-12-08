#pragma once

#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C.Setup
struct UInventoryItemTooltipContentItem_C_Setup_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C.ExecuteUbergraph_InventoryItemTooltipContentItem
struct UInventoryItemTooltipContentItem_C_ExecuteUbergraph_InventoryItemTooltipContentItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
