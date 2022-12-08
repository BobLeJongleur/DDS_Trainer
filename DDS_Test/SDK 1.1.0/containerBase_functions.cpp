
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

// Function containerBase.containerBase_C.ExpandRama
// (Public, BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::ExpandRama()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.ExpandRama");

	AcontainerBase_C_ExpandRama_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.ParseOldInventory
// (Public, BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::ParseOldInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.ParseOldInventory");

	AcontainerBase_C_ParseOldInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.CanAccessContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanAccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   DeclineReason                  (Parm, OutParm)

void AcontainerBase_C::CanAccessContainer(bool* CanAccess, struct FText* DeclineReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.CanAccessContainer");

	AcontainerBase_C_CanAccessContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAccess != nullptr)
		*CanAccess = params.CanAccess;
	if (DeclineReason != nullptr)
		*DeclineReason = params.DeclineReason;
}


// Function containerBase.containerBase_C.AcceptsCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EitemCategories>   Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AcontainerBase_C::AcceptsCategory(TEnumAsByte<EitemCategories> Category, bool* ok)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.AcceptsCategory");

	AcontainerBase_C_AcceptsCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ok != nullptr)
		*ok = params.ok;
}


// Function containerBase.containerBase_C.CheckFullyLooted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NotLooted                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AcontainerBase_C::CheckFullyLooted(bool* NotLooted)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.CheckFullyLooted");

	AcontainerBase_C_CheckFullyLooted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NotLooted != nullptr)
		*NotLooted = params.NotLooted;
}


// Function containerBase.containerBase_C.EndLootingSound
// (Public, BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::EndLootingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.EndLootingSound");

	AcontainerBase_C_EndLootingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.GetOpenState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOpen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AcontainerBase_C::GetOpenState(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.GetOpenState");

	AcontainerBase_C_GetOpenState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
}


// Function containerBase.containerBase_C.reconstructContentsReferences
// (Public, BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::reconstructContentsReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.reconstructContentsReferences");

	AcontainerBase_C_reconstructContentsReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.respawnFurniture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::respawnFurniture()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.respawnFurniture");

	AcontainerBase_C_respawnFurniture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.setBackpackDefaults
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::setBackpackDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.setBackpackDefaults");

	AcontainerBase_C_setBackpackDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.returnItemSizing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FinventoryItemStruct    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AcontainerBase_C::returnItemSizing(const struct FinventoryItemStruct& Data, float* Size, float* Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.returnItemSizing");

	AcontainerBase_C_returnItemSizing_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
	if (Weight != nullptr)
		*Weight = params.Weight;
}


// Function containerBase.containerBase_C.resetContentSizes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::resetContentSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.resetContentSizes");

	AcontainerBase_C_resetContentSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.RemoveItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AcontainerBase_C::RemoveItem(int ItemIndex, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.RemoveItem");

	AcontainerBase_C_RemoveItem_Params params;
	params.ItemIndex = ItemIndex;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.AddItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FinventoryItemStruct    itemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            itemQuantity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceLooted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AddedIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           QuanChanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AcontainerBase_C::AddItem(const struct FinventoryItemStruct& itemData, int itemQuantity, bool ForceLooted, int* AddedIndex, bool* QuanChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.AddItem");

	AcontainerBase_C_AddItem_Params params;
	params.itemData = itemData;
	params.itemQuantity = itemQuantity;
	params.ForceLooted = ForceLooted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AddedIndex != nullptr)
		*AddedIndex = params.AddedIndex;
	if (QuanChanged != nullptr)
		*QuanChanged = params.QuanChanged;
}


// Function containerBase.containerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.UserConstructionScript");

	AcontainerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AcontainerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.ReceiveBeginPlay");

	AcontainerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.openContainer
// (BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::openContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.openContainer");

	AcontainerBase_C_openContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.openEventScript
// (BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::openEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.openEventScript");

	AcontainerBase_C_openEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.closeContainer
// (BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::closeContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.closeContainer");

	AcontainerBase_C_closeContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.closeEventScript
// (BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::closeEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.closeEventScript");

	AcontainerBase_C_closeEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.purgeContainer
// (BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::purgeContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.purgeContainer");

	AcontainerBase_C_purgeContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 LevelPackageName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AcontainerBase_C::BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");

	AcontainerBase_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;
	params.LevelPackageName = LevelPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.RamaLoaded
// (BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::RamaLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.RamaLoaded");

	AcontainerBase_C_RamaLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature
// (BlueprintEvent)

void AcontainerBase_C::BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature");

	AcontainerBase_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.ExecuteUbergraph_containerBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AcontainerBase_C::ExecuteUbergraph_containerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.ExecuteUbergraph_containerBase");

	AcontainerBase_C_ExecuteUbergraph_containerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
