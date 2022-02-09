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

// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.getMaxQuantity
struct UfurnitureDropQuantityWidget_C_getMaxQuantity_Params
{
	struct FString                                     targetString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                sourceQuan;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                maxQuantity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.PreConstruct
struct UfurnitureDropQuantityWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.Construct
struct UfurnitureDropQuantityWidget_C_Construct_Params
{
};

// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UfurnitureDropQuantityWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.Setup
struct UfurnitureDropQuantityWidget_C_Setup_Params
{
	struct FString                                     targetString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                quanMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAppManageList_C*                            ManageList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
struct UfurnitureDropQuantityWidget_C_BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UfurnitureDropQuantityWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.ExecuteUbergraph_furnitureDropQuantityWidget
struct UfurnitureDropQuantityWidget_C_ExecuteUbergraph_furnitureDropQuantityWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
