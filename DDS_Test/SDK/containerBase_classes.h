#pragma once

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass containerBase.containerBase_C
// 0x00C9 (0x04F1 - 0x0428)
class AcontainerBase_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInventoryComponent_C*                       InventoryComponent;                                       // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave_1;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FinventoryItemStruct>                Items;                                                    // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        itemQuantity;                                             // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AitemInventoryHolder_C*>              itemContents;                                             // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<bool>                                       itemsSearchProgress;                                      // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  openSound;                                                // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  closeSound;                                               // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOpen;                                                   // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	float                                              itemMaxSize;                                              // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              itemMaxWeight;                                            // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              curItemSize;                                              // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              curItemWeight;                                            // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                containerRefID;                                           // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               respawned;                                                // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SlowLooting;                                              // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04AA(0x0006) MISSED OFFSET
	class UAudioComponent*                             LootingSound;                                             // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<TEnumAsByte<EitemCategories>>               AcceptedCategories;                                       // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DisableDrop;                                              // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EitemCategories>>               DeclinedCategories;                                       // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGuid                                       ContainerGuid;                                            // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isCashSafe;                                               // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass containerBase.containerBase_C");
		return ptr;
	}


	void ExpandRama();
	void ParseOldInventory();
	void CanAccessContainer(bool* CanAccess, struct FText* DeclineReason);
	void AcceptsCategory(TEnumAsByte<EitemCategories> Category, bool* OK);
	void CheckFullyLooted(bool* NotLooted);
	void EndLootingSound();
	void GetOpenState(bool* IsOpen);
	void reconstructContentsReferences();
	void respawnFurniture();
	void setBackpackDefaults();
	void returnItemSizing(const struct FinventoryItemStruct& Data, float* Size, float* Weight);
	void resetContentSizes();
	void removeItem(int ItemIndex, int Quantity);
	void AddItem(const struct FinventoryItemStruct& itemData, int itemQuantity, bool ForceLooted, int* AddedIndex, bool* QuanChanged);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void openContainer();
	void openEventScript();
	void closeContainer();
	void closeEventScript();
	void purgeContainer();
	void BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName);
	void RamaLoaded();
	void BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature();
	void ExecuteUbergraph_containerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
