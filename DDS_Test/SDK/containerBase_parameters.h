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

// Function containerBase.containerBase_C.ExpandRama
struct AcontainerBase_C_ExpandRama_Params
{
};

// Function containerBase.containerBase_C.ParseOldInventory
struct AcontainerBase_C_ParseOldInventory_Params
{
};

// Function containerBase.containerBase_C.CanAccessContainer
struct AcontainerBase_C_CanAccessContainer_Params
{
	bool                                               CanAccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DeclineReason;                                            // (Parm, OutParm)
};

// Function containerBase.containerBase_C.AcceptsCategory
struct AcontainerBase_C_AcceptsCategory_Params
{
	TEnumAsByte<EitemCategories>                       Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OK;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function containerBase.containerBase_C.CheckFullyLooted
struct AcontainerBase_C_CheckFullyLooted_Params
{
	bool                                               NotLooted;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function containerBase.containerBase_C.EndLootingSound
struct AcontainerBase_C_EndLootingSound_Params
{
};

// Function containerBase.containerBase_C.GetOpenState
struct AcontainerBase_C_GetOpenState_Params
{
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function containerBase.containerBase_C.reconstructContentsReferences
struct AcontainerBase_C_reconstructContentsReferences_Params
{
};

// Function containerBase.containerBase_C.respawnFurniture
struct AcontainerBase_C_respawnFurniture_Params
{
};

// Function containerBase.containerBase_C.setBackpackDefaults
struct AcontainerBase_C_setBackpackDefaults_Params
{
};

// Function containerBase.containerBase_C.returnItemSizing
struct AcontainerBase_C_returnItemSizing_Params
{
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function containerBase.containerBase_C.resetContentSizes
struct AcontainerBase_C_resetContentSizes_Params
{
};

// Function containerBase.containerBase_C.removeItem
struct AcontainerBase_C_removeItem_Params
{
	int                                                ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function containerBase.containerBase_C.AddItem
struct AcontainerBase_C_AddItem_Params
{
	struct FinventoryItemStruct                        itemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                itemQuantity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceLooted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddedIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               QuanChanged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function containerBase.containerBase_C.UserConstructionScript
struct AcontainerBase_C_UserConstructionScript_Params
{
};

// Function containerBase.containerBase_C.ReceiveBeginPlay
struct AcontainerBase_C_ReceiveBeginPlay_Params
{
};

// Function containerBase.containerBase_C.openContainer
struct AcontainerBase_C_openContainer_Params
{
};

// Function containerBase.containerBase_C.openEventScript
struct AcontainerBase_C_openEventScript_Params
{
};

// Function containerBase.containerBase_C.closeContainer
struct AcontainerBase_C_closeContainer_Params
{
};

// Function containerBase.containerBase_C.closeEventScript
struct AcontainerBase_C_closeEventScript_Params
{
};

// Function containerBase.containerBase_C.purgeContainer
struct AcontainerBase_C_purgeContainer_Params
{
};

// Function containerBase.containerBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
struct AcontainerBase_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function containerBase.containerBase_C.RamaLoaded
struct AcontainerBase_C_RamaLoaded_Params
{
};

// Function containerBase.containerBase_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature
struct AcontainerBase_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature_Params
{
};

// Function containerBase.containerBase_C.ExecuteUbergraph_containerBase
struct AcontainerBase_C_ExecuteUbergraph_containerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
