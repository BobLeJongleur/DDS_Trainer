#pragma once

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InventoryComponent.InventoryComponent_C
// 0x0150 (0x0240 - 0x00F0)
class UInventoryComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FName>                               ItemNames;                                                // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        itemQuantities;                                           // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ItemCurAmount;                                            // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGuid>                               ItemLocalGuids;                                           // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGuid>                               ItemHeldInGuids;                                          // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ItemPocketIndex;                                          // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       ItemSearchProgress;                                       // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       ItemVendorFlag;                                           // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FMixProportionsStruct>               ItemMixProportions;                                       // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               ItemCustomTagName;                                        // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ContainerWidth;                                           // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ContainerHeight;                                          // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                pocketCount;                                              // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SkipDebug;                                                // 0x01A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	struct FName                                       CurBackpackID;                                            // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    InventoryStateChanged;                                    // 0x01B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BackpackChanged;                                          // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               CurBackpackVendor;                                        // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	struct FName                                       LootPool;                                                 // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, int>                            ValuableMap;                                              // 0x01E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             RamaVars;                                                 // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryComponent.InventoryComponent_C");
		return ptr;
	}


	void Restack(const struct FGuid& SourceGuid, const struct FGuid& TargetGuid, bool* Success);
	void AddLoot();
	void UpdateBackpack(const struct FName& NewBackpack, bool FromVendor);
	void CountItemsOfType(const struct FName& ItemID, bool CountAmounts, int* OutItems);
	void UseInventoryItem(int Amount, const struct FGuid& LocalGuid, const struct FName& ItemID, bool* Success, int* AmountLeft);
	void SetItemLooted(int Index, bool LootedState);
	void GetLootArray(TArray<bool>* LootArray);
	void PurgeInventory(bool BackpackOnly);
	void HasAnyItems(bool* HasItems);
	void CheckCanAdd(const struct FName& ItemID, int Quantity, int Amount, bool* CanAdd);
	void AcceptVendorItems();
	void PurgeVendorItems();
	void CountVendorItemValue(class AshopInstance_C* ShopRef, int* AllValue);
	void DrawInventoryMoney(int Amount, bool* HasAmount);
	void CountInventoryMoney(bool IncludeValuables, int* AllMoney);
	void GetItemOfGuid(const struct FGuid& LocalGuid, struct FInventoryListStructure* itemData, bool* ItemFound);
	void RemoveItemOfType(const struct FName& ItemID, int Quantity);
	void RemoveItem(const struct FGuid& LocalGuid, int Quantity);
	void HandleOldBackpack(const struct FinventoryItemStruct& backpackData, struct FName* OutName);
	void GetItemAtPocket(int PocketIndex, bool* HasItem, struct FInventoryListStructure* OutItem, int* ArrayIndex);
	void GetTotalWeight(float* TotalWeight);
	void GetItemList(const struct FName& ItemsOfName, bool FilterByCategory, TEnumAsByte<EitemCategories> Category, const struct FGuid& HeldInGuid, bool IncludePockets, TArray<struct FInventoryListStructure>* OutItems, bool* StackExceeded);
	void CountFrontItems(bool BackpackOnly, int* FrontItemCount);
	void AddItem(const struct FName& ItemID, const struct FText& CustomTagName, int Quantity, int Amount, const struct FMixProportionsStruct& MixProportions, const struct FGuid& SetHeldIn, bool ForceAdd, bool VendorItem, int PocketIndex, bool SetLooted, bool CountOnly, bool* AllAdded, int* QuantityLeft, struct FGuid* OutLocalGuid);
	void HandleOldInventory(TArray<struct FinventoryItemStruct>* InventoryStructs, TArray<int>* InventoryQuantities, TArray<class AitemInventoryHolder_C*>* itemContents, TArray<int>* PocketIndexes);
	void BlockDisplatcher();
	void UnlockDispatcher();
	void DispatchUpdate();
	void UpdateInventorySerialization(class URamaSaveComponent* RamaComponent);
	void ExecuteUbergraph_InventoryComponent(int EntryPoint);
	void BackpackChanged__DelegateSignature(bool FromVendor);
	void InventoryStateChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
