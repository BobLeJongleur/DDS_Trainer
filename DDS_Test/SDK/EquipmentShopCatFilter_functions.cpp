
#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function EquipmentShopCatFilter.EquipmentShopCatFilter_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EequipmentCategory> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UEquipmentShopInterfaceWidget_C* Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEquipmentShopCatFilter_C::setup(TEnumAsByte<EequipmentCategory> Category, class UEquipmentShopInterfaceWidget_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopCatFilter.EquipmentShopCatFilter_C.setup");

	UEquipmentShopCatFilter_C_setup_Params params;
	params.Category = Category;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopCatFilter.EquipmentShopCatFilter_C.BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentShopCatFilter_C::BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopCatFilter.EquipmentShopCatFilter_C.BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UEquipmentShopCatFilter_C_BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopCatFilter.EquipmentShopCatFilter_C.ExecuteUbergraph_EquipmentShopCatFilter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEquipmentShopCatFilter_C::ExecuteUbergraph_EquipmentShopCatFilter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopCatFilter.EquipmentShopCatFilter_C.ExecuteUbergraph_EquipmentShopCatFilter");

	UEquipmentShopCatFilter_C_ExecuteUbergraph_EquipmentShopCatFilter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
