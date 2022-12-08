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

// Function LabCrewListItem.LabCrewListItem_C.UserClickedCancel
struct ULabCrewListItem_C_UserClickedCancel_Params
{
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LabCrewListItem.LabCrewListItem_C.setup
struct ULabCrewListItem_C_setup_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AsalesManager_C*                             salesManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AcontactsManager_C*                          contactsManager;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UappartmentModeWidget_C*                     Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LabCrewListItem.LabCrewListItem_C.BndEvt__btnPromote_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct ULabCrewListItem_C_BndEvt__btnPromote_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LabCrewListItem.LabCrewListItem_C.BndEvt__btnLabAssign_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct ULabCrewListItem_C_BndEvt__btnLabAssign_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LabCrewListItem.LabCrewListItem_C.BndEvt__btnRemove_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct ULabCrewListItem_C_BndEvt__btnRemove_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LabCrewListItem.LabCrewListItem_C.ConfirmTrain
struct ULabCrewListItem_C_ConfirmTrain_Params
{
};

// Function LabCrewListItem.LabCrewListItem_C.ContinueTrain
struct ULabCrewListItem_C_ContinueTrain_Params
{
};

// Function LabCrewListItem.LabCrewListItem_C.UserClickedConfirm
struct ULabCrewListItem_C_UserClickedConfirm_Params
{
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LabCrewListItem.LabCrewListItem_C.MoneyDeposited
struct ULabCrewListItem_C_MoneyDeposited_Params
{
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LabCrewListItem.LabCrewListItem_C.ExecuteUbergraph_LabCrewListItem
struct ULabCrewListItem_C_ExecuteUbergraph_LabCrewListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
