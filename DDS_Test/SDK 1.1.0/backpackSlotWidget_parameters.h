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

// Function backpackSlotWidget.backpackSlotWidget_C.Get_curBackpackIcon_ToolTipWidget_1
struct UbackpackSlotWidget_C_Get_curBackpackIcon_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function backpackSlotWidget.backpackSlotWidget_C.Get_curBackpackIcon_ToolTipText_1
struct UbackpackSlotWidget_C_Get_curBackpackIcon_ToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function backpackSlotWidget.backpackSlotWidget_C.extractItemContents
struct UbackpackSlotWidget_C_extractItemContents_Params
{
	struct FString                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                FromIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParentGuid;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AitemInventoryHolder_C*                      ItemHolderRef;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function backpackSlotWidget.backpackSlotWidget_C.setBackpack
struct UbackpackSlotWidget_C_setBackpack_Params
{
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       BackpackID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromVendor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function backpackSlotWidget.backpackSlotWidget_C.OnDragDetected
struct UbackpackSlotWidget_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function backpackSlotWidget.backpackSlotWidget_C.OnMouseButtonDown
struct UbackpackSlotWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function backpackSlotWidget.backpackSlotWidget_C.OnDrop
struct UbackpackSlotWidget_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function backpackSlotWidget.backpackSlotWidget_C.OnDragEnter
struct UbackpackSlotWidget_C_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function backpackSlotWidget.backpackSlotWidget_C.OnDragLeave
struct UbackpackSlotWidget_C_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function backpackSlotWidget.backpackSlotWidget_C.clearBackpackSlot
struct UbackpackSlotWidget_C_clearBackpackSlot_Params
{
};

// Function backpackSlotWidget.backpackSlotWidget_C.ExecuteUbergraph_backpackSlotWidget
struct UbackpackSlotWidget_C_ExecuteUbergraph_backpackSlotWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
