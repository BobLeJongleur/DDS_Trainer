#pragma once

#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function InventoryComponent.InventoryComponent_C.Restack
struct UInventoryComponent_C_Restack_Params
{
	struct FGuid                                       SourceGuid;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       TargetGuid;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.AddLoot
struct UInventoryComponent_C_AddLoot_Params
{
};

// Function InventoryComponent.InventoryComponent_C.UpdateBackpack
struct UInventoryComponent_C_UpdateBackpack_Params
{
	struct FName                                       NewBackpack;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromVendor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.CountItemsOfType
struct UInventoryComponent_C_CountItemsOfType_Params
{
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CountAmounts;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutItems;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.UseInventoryItem
struct UInventoryComponent_C_UseInventoryItem_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       LocalGuid;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmountLeft;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.SetItemLooted
struct UInventoryComponent_C_SetItemLooted_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LootedState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.GetLootArray
struct UInventoryComponent_C_GetLootArray_Params
{
	TArray<bool>                                       LootArray;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function InventoryComponent.InventoryComponent_C.PurgeInventory
struct UInventoryComponent_C_PurgeInventory_Params
{
	bool                                               BackpackOnly;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.HasAnyItems
struct UInventoryComponent_C_HasAnyItems_Params
{
	bool                                               HasItems;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.CheckCanAdd
struct UInventoryComponent_C_CheckCanAdd_Params
{
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanAdd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.AcceptVendorItems
struct UInventoryComponent_C_AcceptVendorItems_Params
{
};

// Function InventoryComponent.InventoryComponent_C.PurgeVendorItems
struct UInventoryComponent_C_PurgeVendorItems_Params
{
};

// Function InventoryComponent.InventoryComponent_C.CountVendorItemValue
struct UInventoryComponent_C_CountVendorItemValue_Params
{
	class AshopInstance_C*                             ShopRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AllValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.DrawInventoryMoney
struct UInventoryComponent_C_DrawInventoryMoney_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasAmount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.CountInventoryMoney
struct UInventoryComponent_C_CountInventoryMoney_Params
{
	bool                                               IncludeValuables;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AllMoney;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.GetItemOfGuid
struct UInventoryComponent_C_GetItemOfGuid_Params
{
	struct FGuid                                       LocalGuid;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryListStructure                     itemData;                                                 // (Parm, OutParm)
	bool                                               ItemFound;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.RemoveItemOfType
struct UInventoryComponent_C_RemoveItemOfType_Params
{
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.removeItem
struct UInventoryComponent_C_removeItem_Params
{
	struct FGuid                                       LocalGuid;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.HandleOldBackpack
struct UInventoryComponent_C_HandleOldBackpack_Params
{
	struct FinventoryItemStruct                        backpackData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       OutName;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.GetItemAtPocket
struct UInventoryComponent_C_GetItemAtPocket_Params
{
	int                                                PocketIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FInventoryListStructure                     OutItem;                                                  // (Parm, OutParm)
	int                                                ArrayIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.GetTotalWeight
struct UInventoryComponent_C_GetTotalWeight_Params
{
	float                                              TotalWeight;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.GetItemList
struct UInventoryComponent_C_GetItemList_Params
{
	struct FName                                       ItemsOfName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FilterByCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EitemCategories>                       Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       HeldInGuid;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IncludePockets;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInventoryListStructure>             OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               StackExceeded;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.CountFrontItems
struct UInventoryComponent_C_CountFrontItems_Params
{
	bool                                               BackpackOnly;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FrontItemCount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.AddItem
struct UInventoryComponent_C_AddItem_Params
{
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CustomTagName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMixProportionsStruct                       MixProportions;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGuid                                       SetHeldIn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceAdd;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               VendorItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PocketIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetLooted;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CountOnly;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllAdded;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                QuantityLeft;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       OutLocalGuid;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.HandleOldInventory
struct UInventoryComponent_C_HandleOldInventory_Params
{
	TArray<struct FinventoryItemStruct>                InventoryStructs;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        InventoryQuantities;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AitemInventoryHolder_C*>              itemContents;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        PocketIndexes;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function InventoryComponent.InventoryComponent_C.BlockDisplatcher
struct UInventoryComponent_C_BlockDisplatcher_Params
{
};

// Function InventoryComponent.InventoryComponent_C.UnlockDispatcher
struct UInventoryComponent_C_UnlockDispatcher_Params
{
};

// Function InventoryComponent.InventoryComponent_C.DispatchUpdate
struct UInventoryComponent_C_DispatchUpdate_Params
{
};

// Function InventoryComponent.InventoryComponent_C.UpdateInventorySerialization
struct UInventoryComponent_C_UpdateInventorySerialization_Params
{
	class URamaSaveComponent*                          RamaComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent
struct UInventoryComponent_C_ExecuteUbergraph_InventoryComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.BackpackChanged__DelegateSignature
struct UInventoryComponent_C_BackpackChanged__DelegateSignature_Params
{
	bool                                               FromVendor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryComponent.InventoryComponent_C.InventoryStateChanged__DelegateSignature
struct UInventoryComponent_C_InventoryStateChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
