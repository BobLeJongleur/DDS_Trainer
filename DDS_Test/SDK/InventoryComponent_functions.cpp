
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

// Function InventoryComponent.InventoryComponent_C.Restack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   SourceGuid                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   TargetGuid                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::Restack(const struct FGuid& SourceGuid, const struct FGuid& TargetGuid, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.Restack");

	UInventoryComponent_C_Restack_Params params;
	params.SourceGuid = SourceGuid;
	params.TargetGuid = TargetGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function InventoryComponent.InventoryComponent_C.AddLoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInventoryComponent_C::AddLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AddLoot");

	UInventoryComponent_C_AddLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.UpdateBackpack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewBackpack                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromVendor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::UpdateBackpack(const struct FName& NewBackpack, bool FromVendor)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateBackpack");

	UInventoryComponent_C_UpdateBackpack_Params params;
	params.NewBackpack = NewBackpack;
	params.FromVendor = FromVendor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.CountItemsOfType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CountAmounts                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutItems                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::CountItemsOfType(const struct FName& ItemID, bool CountAmounts, int* OutItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CountItemsOfType");

	UInventoryComponent_C_CountItemsOfType_Params params;
	params.ItemID = ItemID;
	params.CountAmounts = CountAmounts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItems != nullptr)
		*OutItems = params.OutItems;
}


// Function InventoryComponent.InventoryComponent_C.UseInventoryItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   LocalGuid                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmountLeft                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::UseInventoryItem(int Amount, const struct FGuid& LocalGuid, const struct FName& ItemID, bool* Success, int* AmountLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UseInventoryItem");

	UInventoryComponent_C_UseInventoryItem_Params params;
	params.Amount = Amount;
	params.LocalGuid = LocalGuid;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AmountLeft != nullptr)
		*AmountLeft = params.AmountLeft;
}


// Function InventoryComponent.InventoryComponent_C.SetItemLooted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LootedState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::SetItemLooted(int Index, bool LootedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SetItemLooted");

	UInventoryComponent_C_SetItemLooted_Params params;
	params.Index = Index;
	params.LootedState = LootedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.GetLootArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   LootArray                      (Parm, OutParm, ZeroConstructor)

void UInventoryComponent_C::GetLootArray(TArray<bool>* LootArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetLootArray");

	UInventoryComponent_C_GetLootArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LootArray != nullptr)
		*LootArray = params.LootArray;
}


// Function InventoryComponent.InventoryComponent_C.PurgeInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BackpackOnly                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::PurgeInventory(bool BackpackOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.PurgeInventory");

	UInventoryComponent_C_PurgeInventory_Params params;
	params.BackpackOnly = BackpackOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.HasAnyItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasItems                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::HasAnyItems(bool* HasItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.HasAnyItems");

	UInventoryComponent_C_HasAnyItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasItems != nullptr)
		*HasItems = params.HasItems;
}


// Function InventoryComponent.InventoryComponent_C.CheckCanAdd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanAdd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::CheckCanAdd(const struct FName& ItemID, int Quantity, int Amount, bool* CanAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CheckCanAdd");

	UInventoryComponent_C_CheckCanAdd_Params params;
	params.ItemID = ItemID;
	params.Quantity = Quantity;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAdd != nullptr)
		*CanAdd = params.CanAdd;
}


// Function InventoryComponent.InventoryComponent_C.AcceptVendorItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInventoryComponent_C::AcceptVendorItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AcceptVendorItems");

	UInventoryComponent_C_AcceptVendorItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.PurgeVendorItems
// (Public, BlueprintCallable, BlueprintEvent)

void UInventoryComponent_C::PurgeVendorItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.PurgeVendorItems");

	UInventoryComponent_C_PurgeVendorItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.CountVendorItemValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AshopInstance_C*         ShopRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AllValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::CountVendorItemValue(class AshopInstance_C* ShopRef, int* AllValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CountVendorItemValue");

	UInventoryComponent_C_CountVendorItemValue_Params params;
	params.ShopRef = ShopRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllValue != nullptr)
		*AllValue = params.AllValue;
}


// Function InventoryComponent.InventoryComponent_C.DrawInventoryMoney
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasAmount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::DrawInventoryMoney(int Amount, bool* HasAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.DrawInventoryMoney");

	UInventoryComponent_C_DrawInventoryMoney_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAmount != nullptr)
		*HasAmount = params.HasAmount;
}


// Function InventoryComponent.InventoryComponent_C.CountInventoryMoney
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IncludeValuables               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AllMoney                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::CountInventoryMoney(bool IncludeValuables, int* AllMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CountInventoryMoney");

	UInventoryComponent_C_CountInventoryMoney_Params params;
	params.IncludeValuables = IncludeValuables;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllMoney != nullptr)
		*AllMoney = params.AllMoney;
}


// Function InventoryComponent.InventoryComponent_C.GetItemOfGuid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   LocalGuid                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryListStructure itemData                       (Parm, OutParm)
// bool                           ItemFound                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::GetItemOfGuid(const struct FGuid& LocalGuid, struct FInventoryListStructure* itemData, bool* ItemFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetItemOfGuid");

	UInventoryComponent_C_GetItemOfGuid_Params params;
	params.LocalGuid = LocalGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (itemData != nullptr)
		*itemData = params.itemData;
	if (ItemFound != nullptr)
		*ItemFound = params.ItemFound;
}


// Function InventoryComponent.InventoryComponent_C.RemoveItemOfType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::RemoveItemOfType(const struct FName& ItemID, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RemoveItemOfType");

	UInventoryComponent_C_RemoveItemOfType_Params params;
	params.ItemID = ItemID;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.removeItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   LocalGuid                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::removeItem(const struct FGuid& LocalGuid, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.removeItem");

	UInventoryComponent_C_removeItem_Params params;
	params.LocalGuid = LocalGuid;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.HandleOldBackpack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FinventoryItemStruct    backpackData                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   OutName                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::HandleOldBackpack(const struct FinventoryItemStruct& backpackData, struct FName* OutName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.HandleOldBackpack");

	UInventoryComponent_C_HandleOldBackpack_Params params;
	params.backpackData = backpackData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutName != nullptr)
		*OutName = params.OutName;
}


// Function InventoryComponent.InventoryComponent_C.GetItemAtPocket
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PocketIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FInventoryListStructure OutItem                        (Parm, OutParm)
// int                            ArrayIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::GetItemAtPocket(int PocketIndex, bool* HasItem, struct FInventoryListStructure* OutItem, int* ArrayIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetItemAtPocket");

	UInventoryComponent_C_GetItemAtPocket_Params params;
	params.PocketIndex = PocketIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasItem != nullptr)
		*HasItem = params.HasItem;
	if (OutItem != nullptr)
		*OutItem = params.OutItem;
	if (ArrayIndex != nullptr)
		*ArrayIndex = params.ArrayIndex;
}


// Function InventoryComponent.InventoryComponent_C.GetTotalWeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TotalWeight                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::GetTotalWeight(float* TotalWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetTotalWeight");

	UInventoryComponent_C_GetTotalWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalWeight != nullptr)
		*TotalWeight = params.TotalWeight;
}


// Function InventoryComponent.InventoryComponent_C.GetItemList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemsOfName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FilterByCategory               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EitemCategories>   Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   HeldInGuid                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IncludePockets                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInventoryListStructure> OutItems                       (Parm, OutParm, ZeroConstructor)
// bool                           StackExceeded                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::GetItemList(const struct FName& ItemsOfName, bool FilterByCategory, TEnumAsByte<EitemCategories> Category, const struct FGuid& HeldInGuid, bool IncludePockets, TArray<struct FInventoryListStructure>* OutItems, bool* StackExceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetItemList");

	UInventoryComponent_C_GetItemList_Params params;
	params.ItemsOfName = ItemsOfName;
	params.FilterByCategory = FilterByCategory;
	params.Category = Category;
	params.HeldInGuid = HeldInGuid;
	params.IncludePockets = IncludePockets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItems != nullptr)
		*OutItems = params.OutItems;
	if (StackExceeded != nullptr)
		*StackExceeded = params.StackExceeded;
}


// Function InventoryComponent.InventoryComponent_C.CountFrontItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           BackpackOnly                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FrontItemCount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::CountFrontItems(bool BackpackOnly, int* FrontItemCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CountFrontItems");

	UInventoryComponent_C_CountFrontItems_Params params;
	params.BackpackOnly = BackpackOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FrontItemCount != nullptr)
		*FrontItemCount = params.FrontItemCount;
}


// Function InventoryComponent.InventoryComponent_C.AddItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CustomTagName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMixProportionsStruct   MixProportions                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGuid                   SetHeldIn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceAdd                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           VendorItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PocketIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetLooted                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CountOnly                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllAdded                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            QuantityLeft                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   OutLocalGuid                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::AddItem(const struct FName& ItemID, const struct FText& CustomTagName, int Quantity, int Amount, const struct FMixProportionsStruct& MixProportions, const struct FGuid& SetHeldIn, bool ForceAdd, bool VendorItem, int PocketIndex, bool SetLooted, bool CountOnly, bool* AllAdded, int* QuantityLeft, struct FGuid* OutLocalGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AddItem");

	UInventoryComponent_C_AddItem_Params params;
	params.ItemID = ItemID;
	params.CustomTagName = CustomTagName;
	params.Quantity = Quantity;
	params.Amount = Amount;
	params.MixProportions = MixProportions;
	params.SetHeldIn = SetHeldIn;
	params.ForceAdd = ForceAdd;
	params.VendorItem = VendorItem;
	params.PocketIndex = PocketIndex;
	params.SetLooted = SetLooted;
	params.CountOnly = CountOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllAdded != nullptr)
		*AllAdded = params.AllAdded;
	if (QuantityLeft != nullptr)
		*QuantityLeft = params.QuantityLeft;
	if (OutLocalGuid != nullptr)
		*OutLocalGuid = params.OutLocalGuid;
}


// Function InventoryComponent.InventoryComponent_C.HandleOldInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FinventoryItemStruct> InventoryStructs               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    InventoryQuantities            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AitemInventoryHolder_C*> itemContents                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    PocketIndexes                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInventoryComponent_C::HandleOldInventory(TArray<struct FinventoryItemStruct>* InventoryStructs, TArray<int>* InventoryQuantities, TArray<class AitemInventoryHolder_C*>* itemContents, TArray<int>* PocketIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.HandleOldInventory");

	UInventoryComponent_C_HandleOldInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryStructs != nullptr)
		*InventoryStructs = params.InventoryStructs;
	if (InventoryQuantities != nullptr)
		*InventoryQuantities = params.InventoryQuantities;
	if (itemContents != nullptr)
		*itemContents = params.itemContents;
	if (PocketIndexes != nullptr)
		*PocketIndexes = params.PocketIndexes;
}


// Function InventoryComponent.InventoryComponent_C.BlockDisplatcher
// (BlueprintCallable, BlueprintEvent)

void UInventoryComponent_C::BlockDisplatcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.BlockDisplatcher");

	UInventoryComponent_C_BlockDisplatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.UnlockDispatcher
// (BlueprintCallable, BlueprintEvent)

void UInventoryComponent_C::UnlockDispatcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UnlockDispatcher");

	UInventoryComponent_C_UnlockDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.DispatchUpdate
// (BlueprintCallable, BlueprintEvent)

void UInventoryComponent_C::DispatchUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.DispatchUpdate");

	UInventoryComponent_C_DispatchUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.UpdateInventorySerialization
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInventoryComponent_C::UpdateInventorySerialization(class URamaSaveComponent* RamaComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateInventorySerialization");

	UInventoryComponent_C_UpdateInventorySerialization_Params params;
	params.RamaComponent = RamaComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::ExecuteUbergraph_InventoryComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent");

	UInventoryComponent_C_ExecuteUbergraph_InventoryComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.BackpackChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromVendor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent_C::BackpackChanged__DelegateSignature(bool FromVendor)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.BackpackChanged__DelegateSignature");

	UInventoryComponent_C_BackpackChanged__DelegateSignature_Params params;
	params.FromVendor = FromVendor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryComponent.InventoryComponent_C.InventoryStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UInventoryComponent_C::InventoryStateChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.InventoryStateChanged__DelegateSignature");

	UInventoryComponent_C_InventoryStateChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
