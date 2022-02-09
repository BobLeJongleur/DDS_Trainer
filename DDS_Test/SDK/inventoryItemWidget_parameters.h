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

// Function inventoryItemWidget.inventoryItemWidget_C.DisplayMixProportions
struct UinventoryItemWidget_C_DisplayMixProportions_Params
{
};

// Function inventoryItemWidget.inventoryItemWidget_C.OnDrop
struct UinventoryItemWidget_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function inventoryItemWidget.inventoryItemWidget_C.Get_TextBlock_1_Visibility_1
struct UinventoryItemWidget_C_Get_TextBlock_1_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_4
struct UinventoryItemWidget_C_GetVisibility_4_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_3
struct UinventoryItemWidget_C_GetVisibility_3_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_2
struct UinventoryItemWidget_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function inventoryItemWidget.inventoryItemWidget_C.SetLooted
struct UinventoryItemWidget_C_SetLooted_Params
{
};

// Function inventoryItemWidget.inventoryItemWidget_C.VerifyLooting
struct UinventoryItemWidget_C_VerifyLooting_Params
{
};

// Function inventoryItemWidget.inventoryItemWidget_C.Get_bgImage_ToolTipWidget_1
struct UinventoryItemWidget_C_Get_bgImage_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function inventoryItemWidget.inventoryItemWidget_C.GetShortName
struct UinventoryItemWidget_C_GetShortName_Params
{
	struct FText                                       ShortName;                                                // (Parm, OutParm)
};

// Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_1
struct UinventoryItemWidget_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function inventoryItemWidget.inventoryItemWidget_C.formToText
struct UinventoryItemWidget_C_formToText_Params
{
	TEnumAsByte<EdrugForm>                             Form;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
};

// Function inventoryItemWidget.inventoryItemWidget_C.OnMouseButtonDoubleClick
struct UinventoryItemWidget_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function inventoryItemWidget.inventoryItemWidget_C.widgetSetup
struct UinventoryItemWidget_C_widgetSetup_Params
{
	int                                                setPrice;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               showPrice;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromVendor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               workStation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowAsGrid;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CustomName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function inventoryItemWidget.inventoryItemWidget_C.OnDragDetected
struct UinventoryItemWidget_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryItemWidget.inventoryItemWidget_C.OnMouseButtonDown
struct UinventoryItemWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function inventoryItemWidget.inventoryItemWidget_C.Construct
struct UinventoryItemWidget_C_Construct_Params
{
};

// Function inventoryItemWidget.inventoryItemWidget_C.Tick
struct UinventoryItemWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryItemWidget.inventoryItemWidget_C.OnDragCancelled
struct UinventoryItemWidget_C_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryItemWidget.inventoryItemWidget_C.Destruct
struct UinventoryItemWidget_C_Destruct_Params
{
};

// Function inventoryItemWidget.inventoryItemWidget_C.OnDragEnter
struct UinventoryItemWidget_C_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryItemWidget.inventoryItemWidget_C.OnDragLeave
struct UinventoryItemWidget_C_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryItemWidget.inventoryItemWidget_C.ExecuteUbergraph_inventoryItemWidget
struct UinventoryItemWidget_C_ExecuteUbergraph_inventoryItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
