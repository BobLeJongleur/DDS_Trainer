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

// Function EquipmentShopCatFilter.EquipmentShopCatFilter_C.setup
struct UEquipmentShopCatFilter_C_setup_Params
{
	TEnumAsByte<EequipmentCategory>                    Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UEquipmentShopInterfaceWidget_C*             Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EquipmentShopCatFilter.EquipmentShopCatFilter_C.BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UEquipmentShopCatFilter_C_BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EquipmentShopCatFilter.EquipmentShopCatFilter_C.ExecuteUbergraph_EquipmentShopCatFilter
struct UEquipmentShopCatFilter_C_ExecuteUbergraph_EquipmentShopCatFilter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
