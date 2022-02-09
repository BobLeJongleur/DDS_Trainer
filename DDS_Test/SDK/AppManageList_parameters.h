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

// Function AppManageList.AppManageList_C.HandleDropQuantity
struct UAppManageList_C_HandleDropQuantity_Params
{
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.Get_txtPrice_ColorAndOpacity_1
struct UAppManageList_C_Get_txtPrice_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AppManageList.AppManageList_C.FindEqPrice
struct UAppManageList_C_FindEqPrice_Params
{
	struct FName                                       EquipmentID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemSourcePrice;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.Get_txtPrice_Visibility_1
struct UAppManageList_C_Get_txtPrice_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.CountMoney
struct UAppManageList_C_CountMoney_Params
{
	int                                                countedMoney;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.GetVisibility_3
struct UAppManageList_C_GetVisibility_3_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.RemoveListIndex
struct UAppManageList_C_RemoveListIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.AddListIndex
struct UAppManageList_C_AddListIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SkipDispatch;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.OnDrop
struct UAppManageList_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.isListEmpty
struct UAppManageList_C_isListEmpty_Params
{
	bool                                               Empty;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.GetVisibility_2
struct UAppManageList_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.addListItem
struct UAppManageList_C_addListItem_Params
{
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SourceIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quan;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.ClearList
struct UAppManageList_C_ClearList_Params
{
	bool                                               PurgeArrays;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.Get_furnitureList_Visibility_1
struct UAppManageList_C_Get_furnitureList_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.GetVisibility_1
struct UAppManageList_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppManageList.AppManageList_C.ListContentChanged__DelegateSignature
struct UAppManageList_C_ListContentChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
