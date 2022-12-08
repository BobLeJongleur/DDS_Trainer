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

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.Get_VillaHolder_Visibility_1
struct UEquipmentShopInterfaceWidget_C_Get_VillaHolder_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.RenderFilters
struct UEquipmentShopInterfaceWidget_C_RenderFilters_Params
{
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.SetFilter
struct UEquipmentShopInterfaceWidget_C_SetFilter_Params
{
	bool                                               FilterEnabled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EequipmentCategory>                    FilterCat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.checkAvailableApartments
struct UEquipmentShopInterfaceWidget_C_checkAvailableApartments_Params
{
	bool                                               OK;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.updateBalance
struct UEquipmentShopInterfaceWidget_C_updateBalance_Params
{
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.checkPlayerHasApartments
struct UEquipmentShopInterfaceWidget_C_checkPlayerHasApartments_Params
{
	bool                                               hasApartments;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderAppartments
struct UEquipmentShopInterfaceWidget_C_renderAppartments_Params
{
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderMainList
struct UEquipmentShopInterfaceWidget_C_renderMainList_Params
{
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderCheckoutItems
struct UEquipmentShopInterfaceWidget_C_renderCheckoutItems_Params
{
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.recalcCheckout
struct UEquipmentShopInterfaceWidget_C_recalcCheckout_Params
{
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.addListItem
struct UEquipmentShopInterfaceWidget_C_addListItem_Params
{
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UequipmentShopItemWidget_C*                  ItemRef;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.Construct
struct UEquipmentShopInterfaceWidget_C_Construct_Params
{
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.setup
struct UEquipmentShopInterfaceWidget_C_setup_Params
{
	TArray<struct FappartmentEquipment>                baseEq;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      basePrices;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AequipmentShop_C*                            ParentShopRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       unlocked;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UEquipmentShopInterfaceWidget_C_BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UEquipmentShopInterfaceWidget_C_BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnConfirmAddress_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UEquipmentShopInterfaceWidget_C_BndEvt__btnConfirmAddress_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UEquipmentShopInterfaceWidget_C_BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UEquipmentShopInterfaceWidget_C_BndEvt__btnShowAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.ExecuteUbergraph_EquipmentShopInterfaceWidget
struct UEquipmentShopInterfaceWidget_C_ExecuteUbergraph_EquipmentShopInterfaceWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
