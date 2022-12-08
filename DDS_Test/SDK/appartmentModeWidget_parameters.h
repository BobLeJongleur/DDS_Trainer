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

// Function appartmentModeWidget.appartmentModeWidget_C.CheckLabAchievements
struct UappartmentModeWidget_C_CheckLabAchievements_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.ShippmentOpen
struct UappartmentModeWidget_C_ShippmentOpen_Params
{
	bool                                               Open;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.GetText_4
struct UappartmentModeWidget_C_GetText_4_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function appartmentModeWidget.appartmentModeWidget_C.SetAvailableDefault
struct UappartmentModeWidget_C_SetAvailableDefault_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.GetText_3
struct UappartmentModeWidget_C_GetText_3_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function appartmentModeWidget.appartmentModeWidget_C.Get_Button_2_Visibility_1
struct UappartmentModeWidget_C_Get_Button_2_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.Get_Button_2_ToolTipWidget_1
struct UappartmentModeWidget_C_Get_Button_2_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.Get_btnConstructLab_bIsEnabled_1
struct UappartmentModeWidget_C_Get_btnConstructLab_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.GetText_2
struct UappartmentModeWidget_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function appartmentModeWidget.appartmentModeWidget_C.Get_btnRemoveLab_ToolTipWidget_1
struct UappartmentModeWidget_C_Get_btnRemoveLab_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.Get_btnBuildLab_ToolTipWidget_1
struct UappartmentModeWidget_C_Get_btnBuildLab_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.Get_btnBuildLab_ToolTipText_1
struct UappartmentModeWidget_C_Get_btnBuildLab_ToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function appartmentModeWidget.appartmentModeWidget_C.ChangeFilter
struct UappartmentModeWidget_C_ChangeFilter_Params
{
	int                                                Change;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.Get_FilterListHolder_Visibility_1
struct UappartmentModeWidget_C_Get_FilterListHolder_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.RenderFilters
struct UappartmentModeWidget_C_RenderFilters_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.GetText_1
struct UappartmentModeWidget_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function appartmentModeWidget.appartmentModeWidget_C.CanPlaceGizmo
struct UappartmentModeWidget_C_CanPlaceGizmo_Params
{
	bool                                               canPlace;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.SetFilterCategory
struct UappartmentModeWidget_C_SetFilterCategory_Params
{
	bool                                               FilterByCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EequipmentCategory>                    Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.CheckLabAvailable
struct UappartmentModeWidget_C_CheckLabAvailable_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.RenderLabTypeList
struct UappartmentModeWidget_C_RenderLabTypeList_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.RenderCrewList
struct UappartmentModeWidget_C_RenderCrewList_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.Get_txt_Text_1
struct UappartmentModeWidget_C_Get_txt_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function appartmentModeWidget.appartmentModeWidget_C.Get_tabsVilla_Visibility_1
struct UappartmentModeWidget_C_Get_tabsVilla_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.ClearLocalList
struct UappartmentModeWidget_C_ClearLocalList_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.PrepListItems
struct UappartmentModeWidget_C_PrepListItems_Params
{
	TArray<struct FName>                               IDs;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Quantities;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EVillaListCategories>                  Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.SellItems
struct UappartmentModeWidget_C_SellItems_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.ShowShipmentPanel
struct UappartmentModeWidget_C_ShowShipmentPanel_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.ShipItems
struct UappartmentModeWidget_C_ShipItems_Params
{
	class ArentAppartmentArea_C*                       TargetAppartment;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AVillaPropertyInstance_C*                    TargetVilla;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.PrepareManager
struct UappartmentModeWidget_C_PrepareManager_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.GetbIsEnabled_2
struct UappartmentModeWidget_C_GetbIsEnabled_2_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.GetbIsEnabled_1
struct UappartmentModeWidget_C_GetbIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.RenderManager
struct UappartmentModeWidget_C_RenderManager_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.reconstructSourceIndexes
struct UappartmentModeWidget_C_reconstructSourceIndexes_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.renderObjectList
struct UappartmentModeWidget_C_renderObjectList_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.selectIndexUp
struct UappartmentModeWidget_C_selectIndexUp_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.selectIndexDown
struct UappartmentModeWidget_C_selectIndexDown_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.removeSelectedIndex
struct UappartmentModeWidget_C_removeSelectedIndex_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.TabSwitch
struct UappartmentModeWidget_C_TabSwitch_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.Destruct
struct UappartmentModeWidget_C_Destruct_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__AppManageList_K2Node_ComponentBoundEvent_0_ListContentChanged__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__AppManageList_K2Node_ComponentBoundEvent_0_ListContentChanged__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__AppManageList_0_K2Node_ComponentBoundEvent_1_ListContentChanged__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__AppManageList_0_K2Node_ComponentBoundEvent_1_ListContentChanged__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__AppManageList_1_K2Node_ComponentBoundEvent_2_ListContentChanged__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__AppManageList_1_K2Node_ComponentBoundEvent_2_ListContentChanged__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.setNewObjectGizmo
struct UappartmentModeWidget_C_setNewObjectGizmo_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.SetupWidget
struct UappartmentModeWidget_C_SetupWidget_Params
{
	class ArentAppartmentArea_C*                       AppartmentRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AVillaPropertyInstance_C*                    VillaRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.Construct
struct UappartmentModeWidget_C_Construct_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.PreConstruct
struct UappartmentModeWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.UserClickedCancel
struct UappartmentModeWidget_C_UserClickedCancel_Params
{
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__btnBuildLab_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__btnBuildLab_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__btnRemoveLab_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__btnRemoveLab_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__btnConstructLab_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__btnConstructLab_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__LabTypeSelect_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__LabTypeSelect_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.UserClickedConfirm
struct UappartmentModeWidget_C_UserClickedConfirm_Params
{
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function appartmentModeWidget.appartmentModeWidget_C.ConfirmLabPurge
struct UappartmentModeWidget_C_ConfirmLabPurge_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.ConfirmBuildLab
struct UappartmentModeWidget_C_ConfirmBuildLab_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.RightClickFilters
struct UappartmentModeWidget_C_RightClickFilters_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.TryApplyFilter
struct UappartmentModeWidget_C_TryApplyFilter_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__btnLabCancel_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__btnLabCancel_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.ClearCrewAssigns
struct UappartmentModeWidget_C_ClearCrewAssigns_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.ConvertAnyway
struct UappartmentModeWidget_C_ConvertAnyway_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.ConvertLab
struct UappartmentModeWidget_C_ConvertLab_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__btnChangeHideoutName_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__btnChangeHideoutName_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__HideoutNameInput_K2Node_ComponentBoundEvent_13_OnEditableTextChangedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__HideoutNameInput_K2Node_ComponentBoundEvent_13_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__HideoutNameInput_K2Node_ComponentBoundEvent_14_OnEditableTextCommittedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__HideoutNameInput_K2Node_ComponentBoundEvent_14_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.CloseShipment
struct UappartmentModeWidget_C_CloseShipment_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.ExecuteUbergraph_appartmentModeWidget
struct UappartmentModeWidget_C_ExecuteUbergraph_appartmentModeWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
